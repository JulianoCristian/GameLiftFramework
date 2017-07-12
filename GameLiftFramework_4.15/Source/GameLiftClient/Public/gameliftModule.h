#pragma once

#include "ModuleManager.h"

#include "aws/gamelift/GameliftClient.h"
#include "aws/gamelift/model/SearchGameSessionsRequest.h"
#include "aws/gamelift/model/CreatePlayerSessionRequest.h"
#include "aws/gamelift/model/CreateGameSessionRequest.h"


class GameLiftClientModuleImpl : public IModuleInterface
{
public:
	void StartupModule();
	void ShutdownModule();

private:
	static void* GameLiftClientLibraryHandle;
	static bool LoadDependency(const FString& Dir, const FString& Name, void*& Handle);
	static void FreeDependency(void*& Handle);
};