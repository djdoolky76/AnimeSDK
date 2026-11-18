#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDJKCCHMMMG_TypeDefinitionIndex = 77583;

enum class EDJKCCHMMMG : ::System::Int32
{
	HotUpdateAllBegin = 4,
	Login = 2,
	ReLogin = 3,
	Launch = 1,
	SDKWillEnterGame = 7,
	Reconnect = 11,
	None = 0,
	ExtendDataSynced = 9,
	HotUpdateAllEnd = 5,
	StartDataSync = 6,
	BasicDataSynced = 8,
	EnterScene = 10,
	Logout = 12,
};
