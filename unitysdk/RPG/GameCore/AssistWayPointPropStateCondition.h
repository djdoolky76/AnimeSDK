#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointPropStateCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CD4F0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3D1CB0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3CE610)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CD500)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D1C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropStateCondition_TypeDefinitionIndex = 18997;

	class AssistWayPointPropStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::PropState TargetPropState; // 0x18
		::System::Boolean UseLogicProp; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 LogicWayPointGroupID; // 0x20
		::System::UInt32 LogicWayPointEntityID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
