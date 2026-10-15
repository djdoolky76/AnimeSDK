#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TravelShipWaitNavigationArrive; }

#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3CC50)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3CC60)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3CC20)

namespace RPG::GameCore
{
	class TravelShipWaitNavigationArrive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaAnchorName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnArrive; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
