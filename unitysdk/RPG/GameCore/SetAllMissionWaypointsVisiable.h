#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAllMissionWaypointsVisiable; }

#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93BA0)
#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93BB0)
#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllMissionWaypointsVisiable_TypeDefinitionIndex = 20873;

	class SetAllMissionWaypointsVisiable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsVisiable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
