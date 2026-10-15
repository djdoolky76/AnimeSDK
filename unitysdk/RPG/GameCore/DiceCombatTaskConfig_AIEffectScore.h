#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_AIEffectScore; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D610800)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D610810)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6107B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AIEffectScore_TypeDefinitionIndex = 16179;

	class DiceCombatTaskConfig_AIEffectScore : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* EffectEvaluator; // 0x10
		::RPG::GameCore::DynamicFloat* EffectScoreWeight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AIEffectScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_AIEFFECTSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
