#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSkillUsageLimit; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D5230)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D55F0)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D5570)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D5290)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D51B0)

namespace RPG::GameCore
{
	class ByCompareSkillUsageLimit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IDFromTargetType; // 0x20
		::System::String* IDFromTriggerKey; // 0x28
		::Il2CppArray<::System::UInt32>* SharedLimitSkillConfigIDs; // 0x30
		::RPG::GameCore::DynamicFloat* ActionDelay; // 0x38
		::RPG::GameCore::DynamicFloat* LimitTimes; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
