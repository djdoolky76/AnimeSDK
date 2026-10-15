#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitTimeRelayFlameLoaded; }

#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA33D0)
#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA33E0)
#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA3310)

namespace RPG::GameCore
{
	class WaitTimeRelayFlameLoaded : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimeRelayFlameLoaded* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimeRelayFlameLoaded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimeRelayFlameLoaded* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimeRelayFlameLoaded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
