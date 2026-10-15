#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuteTargetTimeSlow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTETARGETTIMESLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CFA10)
#define RPG_GAMECORE_MUTETARGETTIMESLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CFA20)
#define RPG_GAMECORE_MUTETARGETTIMESLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CF9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteTargetTimeSlow_TypeDefinitionIndex = 23829;

	class MuteTargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsMute; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
