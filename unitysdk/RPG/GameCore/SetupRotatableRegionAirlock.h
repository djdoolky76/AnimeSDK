#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetupRotatableRegionAirlock; }

#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACE290)
#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACE2A0)
#define RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACE260)

namespace RPG::GameCore
{
	class SetupRotatableRegionAirlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AirlockInstanceID; // 0x18
		::RPG::GameCore::DynamicString* AirlockTrigger; // 0x20
		::RPG::GameCore::DynamicFloat* ValveAInstanceID; // 0x28
		::RPG::GameCore::DynamicFloat* ValveBInstanceID; // 0x30
		::RPG::GameCore::DynamicFloat* ValveARegionIndex; // 0x38
		::RPG::GameCore::DynamicFloat* ValveBRegionIndex; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupRotatableRegionAirlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupRotatableRegionAirlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupRotatableRegionAirlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupRotatableRegionAirlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPROTATABLEREGIONAIRLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
