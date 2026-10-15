#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyTrialPlayer; }

#define RPG_GAMECORE_DESTROYTRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD8A0)
#define RPG_GAMECORE_DESTROYTRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FD8B0)
#define RPG_GAMECORE_DESTROYTRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FD860)

namespace RPG::GameCore
{
	class DestroyTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYTRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
