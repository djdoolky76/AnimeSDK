#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Self; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589020)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D589030)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Self_TypeDefinitionIndex = 15761;

	class ChenLingBattleTargetEvaluator_Self : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Self*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_SELF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
