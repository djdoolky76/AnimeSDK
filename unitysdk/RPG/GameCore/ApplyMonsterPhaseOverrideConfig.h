#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ApplyMonsterPhaseOverrideConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F62E0)
#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3F6320)
#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F6280)

namespace RPG::GameCore
{
	class ApplyMonsterPhaseOverrideConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
