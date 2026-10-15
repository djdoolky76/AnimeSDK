#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B51B0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B5460)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B5430)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B51C0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B5180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareUnusedInsertAbilityCount_TypeDefinitionIndex = 23051;

	class ByCompareUnusedInsertAbilityCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AbilityOwnerType; // 0x20
		::System::String* AbilityName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDINSERTABILITYCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
