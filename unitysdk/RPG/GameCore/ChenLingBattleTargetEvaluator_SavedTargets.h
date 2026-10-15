#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_SavedTargets; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588EE0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588EF0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_SavedTargets_TypeDefinitionIndex = 15777;

	class ChenLingBattleTargetEvaluator_SavedTargets : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::String* SaveName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_SavedTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SAVEDTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
