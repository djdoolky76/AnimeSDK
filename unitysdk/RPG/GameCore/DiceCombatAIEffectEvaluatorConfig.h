#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7300)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D72A0)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_TypeDefinitionIndex = 16164;

	class DiceCombatAIEffectEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
