#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByPropInPosition; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D394250)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3945E0)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3945A0)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D394260)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D394210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPropInPosition_TypeDefinitionIndex = 20783;

	class AdventureByPropInPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGroupID; // 0x20
		::System::UInt32 TargetGroupPropID; // 0x24
		::System::Boolean SourceIsOwner; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* AreaName; // 0x30
		::RPG::GameCore::DynamicString* AnchorName; // 0x38
		::System::Boolean IgnoreYAsix; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single Range; // 0x44
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
