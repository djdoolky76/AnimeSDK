#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointConditionOperator.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC560)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FC570)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FC430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionPack_TypeDefinitionIndex = 19003;

	class AssistWayPointConditionPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AssistWayPointCondition*>* ConditionList; // 0x10
		::RPG::GameCore::AssistWayPointConditionOperator Operator; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointConditionPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointConditionPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
