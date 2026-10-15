#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_Union; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55B690)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55B6A0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55B640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Union_TypeDefinitionIndex = 15774;

	class ChenLingBattleTargetEvaluator_Union : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleTargetEvaluator*>* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Union*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_UNION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
