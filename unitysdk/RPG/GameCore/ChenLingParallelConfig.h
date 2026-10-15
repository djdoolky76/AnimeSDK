#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingParallelConfig; }

#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D565770)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D565780)
#define RPG_GAMECORE_CHENLINGPARALLELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D565720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingParallelConfig_TypeDefinitionIndex = 15815;

	class ChenLingParallelConfig : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* ParallelComposite; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingParallelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingParallelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPARALLELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
