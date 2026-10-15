#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TravelShipPowerSprint; }

#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0F010)
#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC0F020)
#define RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC0EFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipPowerSprint_TypeDefinitionIndex = 20972;

	class TravelShipPowerSprint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AnchorID; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipPowerSprint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipPowerSprint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipPowerSprint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipPowerSprint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPPOWERSPRINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
