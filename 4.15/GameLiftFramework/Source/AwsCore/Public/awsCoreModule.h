#pragma once

#include "ModuleManager.h"

#include "aws/core/Aws.h"
#include "aws/core/auth/AWSCredentialsProvider.h"
#include "aws/core/client/ClientConfiguration.h"
#include "aws/core/utils/Outcome.h"

class AwsCoreModuleImpl : public IModuleInterface
{
public:
	void StartupModule();
	void ShutdownModule();

private:
	Aws::SDKOptions options;

	static void* AwsCoreLibraryHandle;
	static bool LoadDependency(const FString& Dir, const FString& Name, void*& Handle);
	static void FreeDependency(void*& Handle);
};