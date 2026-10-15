#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8C90)
#define RPG_GAMECORE_ASSISTWAYPOINT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3F8CA0)
#define RPG_GAMECORE_ASSISTWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F8670)

namespace RPG::GameCore
{
	class AssistWayPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionWayPointType WayPointType; // 0x10
		::System::UInt32 WayPointGroupID; // 0x14
		::System::UInt32 WayPointEntityID; // 0x18
		::System::UInt32 WayPointLittleGameEntityID; // 0x1C
		::System::UInt32 SubmissionID; // 0x20
		::System::Boolean SkipWhenSubMissionFinish; // 0x24
		::System::Boolean UseDistance; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AssistWayPointDistanceCondition* DistanceCondition; // 0x28
		::System::Boolean CanBacktrace; // 0x30
		::System::Byte _padding1[0x7];
		::RPG::GameCore::AssistWayPointConditionMain* FinishConditionMain; // 0x38
		::System::Boolean UsePropState; // 0x40
		::System::Boolean UsePropStateBacktrace; // 0x41
		::System::Byte _padding2[0x2];
		::RPG::GameCore::PropState TargetPropState; // 0x44
		::System::Boolean UseLogicProp; // 0x48
		::System::Byte _padding3[0x3];
		::System::UInt32 LogciWayPointGroupID; // 0x4C
		::System::UInt32 LogciWayPointEntityID; // 0x50
		::System::Boolean UseOverrideRangeMin; // 0x54
		::System::Byte _padding4[0x3];
		::System::Int32 OverrideRangeMin; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
