#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointPropEraFlipShowCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B1E0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E61F0D0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E61C560)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E61B1F0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E61F0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropEraFlipShowCondition_TypeDefinitionIndex = 19187;

	class AssistWayPointPropEraFlipShowCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::Boolean TargetPropEraFlipShow; // 0x18
		::System::Boolean UseLogicProp; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 LogicWayPointGroupID; // 0x1C
		::System::UInt32 LogicWayPointEntityID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
