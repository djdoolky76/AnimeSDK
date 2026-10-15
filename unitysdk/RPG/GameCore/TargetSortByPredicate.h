#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB448D0)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB44A50)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB44A00)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB448E0)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB44880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPredicate_TypeDefinitionIndex = 23980;

	class TargetSortByPredicate : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::System::Boolean InverseSort; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
