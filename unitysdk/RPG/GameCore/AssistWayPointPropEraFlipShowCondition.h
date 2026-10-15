#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointPropEraFlipShowCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CD230)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3D13B0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3CE5E0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CD240)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D1380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropEraFlipShowCondition_TypeDefinitionIndex = 19000;

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
