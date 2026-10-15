#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAIEffectEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount; }

#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D604580)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D604590)
#define RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D605080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAIEffectEvaluatorConfig_DiceDiffCount_TypeDefinitionIndex = 16172;

	class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount : public ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATAIEFFECTEVALUATORCONFIG_DICEDIFFCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
