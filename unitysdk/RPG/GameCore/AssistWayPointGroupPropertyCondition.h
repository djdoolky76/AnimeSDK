#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointGroupPropertyCondition; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2510)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DEB5420)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DEB3AB0)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEB2520)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEB53F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointGroupPropertyCondition_TypeDefinitionIndex = 19189;

	class AssistWayPointGroupPropertyCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::GroupPropertyConfig* TargetGroupProperty; // 0x18
		::System::Boolean UseLogicGroup; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 LogicWayPointGroupID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
