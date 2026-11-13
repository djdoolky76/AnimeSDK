#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointTimelineStateCondition; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2EB0)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DEB7D10)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DEB3B70)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEB2EC0)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEB7CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointTimelineStateCondition_TypeDefinitionIndex = 19188;

	class AssistWayPointTimelineStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::String* TargetTimelineState; // 0x18
		::System::Boolean UseLogicProp; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 LogicWayPointGroupID; // 0x24
		::System::UInt32 LogicWayPointEntityID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
