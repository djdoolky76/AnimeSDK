#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HideWaypointByProp; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEWAYPOINTBYPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D769F00)
#define RPG_GAMECORE_HIDEWAYPOINTBYPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D769F10)
#define RPG_GAMECORE_HIDEWAYPOINTBYPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D769ED0)

namespace RPG::GameCore
{
	class HideWaypointByProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean UseOwnerEntity; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30
		::RPG::GameCore::DynamicString* PropKey; // 0x38
		::System::Boolean OnNameBoard; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideWaypointByProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideWaypointByProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideWaypointByProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINTBYPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
