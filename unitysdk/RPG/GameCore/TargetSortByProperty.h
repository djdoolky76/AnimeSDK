#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByProperty; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE21DA0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE21F70)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE21F40)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE21DB0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE21D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByProperty_TypeDefinitionIndex = 24439;

	class TargetSortByProperty : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AbilityProperty PropertyType; // 0x10
		::System::Boolean HighestFirst; // 0x14
		::System::Boolean AliveOnly; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
