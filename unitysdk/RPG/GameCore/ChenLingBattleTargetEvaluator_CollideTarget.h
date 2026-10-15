#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_CollideTarget; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A6D0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55A6E0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55A640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_CollideTarget_TypeDefinitionIndex = 15763;

	class ChenLingBattleTargetEvaluator_CollideTarget : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CollideTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_COLLIDETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
