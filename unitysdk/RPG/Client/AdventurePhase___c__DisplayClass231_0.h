#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS231_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B6BA0)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS231_0___PRELOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1B2B6BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass231_0_TypeDefinitionIndex = 61406;

	class AdventurePhase___c__DisplayClass231_0 : public ::System::Object
	{
	public:
		::System::Boolean isPreBattlePreloadFinish; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS231_0_CTOR_OFFSET))(this);
		}

		::System::Void __Preload_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS231_0___PRELOAD_B__0_OFFSET))(this);
		}

	};
}
