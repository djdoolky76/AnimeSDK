#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TravelShipNavigateTo; }

#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3C660)
#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3C670)
#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3C620)

namespace RPG::GameCore
{
	class TravelShipNavigateTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaAnchorName; // 0x18
		::System::Boolean AutoStart; // 0x20
		::System::Boolean StopOnArrive; // 0x21
		::System::Boolean ShowToast; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipNavigateTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipNavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipNavigateTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipNavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
