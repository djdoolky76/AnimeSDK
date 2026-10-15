#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B5B70)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B5E40)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B5E10)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B5B80)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B5B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareUnusedUltraSkillCount_TypeDefinitionIndex = 23052;

	class ByCompareUnusedUltraSkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillOwnerType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeInsertAction; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
