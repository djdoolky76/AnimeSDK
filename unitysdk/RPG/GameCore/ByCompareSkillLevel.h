#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSkillLevel; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D47C0)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D4AD0)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D4A70)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D4800)
#define RPG_GAMECORE_BYCOMPARESKILLLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D4760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillLevel_TypeDefinitionIndex = 23005;

	class ByCompareSkillLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TriggerKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLLEVEL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
