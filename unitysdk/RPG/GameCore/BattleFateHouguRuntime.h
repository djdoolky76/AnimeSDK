#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABMDCOFHCG;

#define RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_CTOR_OFFSET UNITYSDK_OFFSET(0xE5C1080)
#define RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5C1030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFateHouguRuntime_TypeDefinitionIndex = 56091;

	class BattleFateHouguRuntime : public ::System::Object
	{
	public:
		::FABMDCOFHCG* MazeBuffAbilityCache; // 0x10
		::System::UInt32 ConfigID; // 0x18
		::System::UInt32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_DISPOSE_OFFSET))(this);
		}

	};
}
