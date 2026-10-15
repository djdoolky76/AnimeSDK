#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_GlobalConfig; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A8D0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55A8E0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_GlobalConfig_TypeDefinitionIndex = 15768;

	class ChenLingBattleTargetEvaluator_GlobalConfig : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
