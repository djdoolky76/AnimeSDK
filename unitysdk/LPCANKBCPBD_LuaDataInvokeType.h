#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LPCANKBCPBD_LuaDataInvokeType_TypeDefinitionIndex = 65787;

	enum class LPCANKBCPBD_LuaDataInvokeType : ::System::Int32
	{
		OnLogin = 0,
		OnBattleBegin = 1,
		OnBattleEnd = 2,
		OnLoadMap = 3,
	};
