#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CCBD0)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3CED50)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3CE550)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CCBE0)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointDistanceCondition_TypeDefinitionIndex = 18996;

	class AssistWayPointDistanceCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::Boolean UseOverrideRangeMin; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 OverrideRangeMin; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
