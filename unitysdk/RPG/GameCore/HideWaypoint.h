#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideWaypoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D769D40)
#define RPG_GAMECORE_HIDEWAYPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D769D50)
#define RPG_GAMECORE_HIDEWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D769D00)

namespace RPG::GameCore
{
	class HideWaypoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnNameBoard; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideWaypoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideWaypoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
