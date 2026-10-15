#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Defender; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A7D0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55A7E0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Defender_TypeDefinitionIndex = 15772;

	class ChenLingBattleTargetEvaluator_Defender : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Defender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_DEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
