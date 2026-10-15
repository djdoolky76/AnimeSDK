#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddTrialPlayer; }

#define RPG_GAMECORE_ADDTRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38CFB0)
#define RPG_GAMECORE_ADDTRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38CFC0)
#define RPG_GAMECORE_ADDTRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38CF70)

namespace RPG::GameCore
{
	class AddTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
