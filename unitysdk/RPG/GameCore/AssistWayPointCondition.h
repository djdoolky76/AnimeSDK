#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointConditionOperator.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA4E0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3FBBF0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FB6D0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3FA4F0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FA190)

namespace RPG::GameCore
{
	class AssistWayPointCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AssistWayPointConditionOperator Operator; // 0x10
		::System::Boolean Inverse; // 0x14
		::System::Boolean ValidateInBacktrace; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
