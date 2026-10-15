#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityBase; }
namespace RPG::GameCore { class ChimeraBattleConditionEvaluator; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }

#define RPG_GAMECORE_CHIMERAABILITYBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596350)
#define RPG_GAMECORE_CHIMERAABILITYBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D596510)
#define RPG_GAMECORE_CHIMERAABILITYBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityBase_TypeDefinitionIndex = 15840;

	class ChimeraAbilityBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraBattleConditionEvaluator* TriggerCondition; // 0x10
		::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* ExtraCondition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
