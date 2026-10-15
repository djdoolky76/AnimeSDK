#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerSound.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerSoundMusicRhythmStageBGM; }

#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5E380)
#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5E390)
#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5EB40)

namespace RPG::GameCore
{
	class TriggerSoundMusicRhythmStageBGM : public ::RPG::GameCore::TriggerSound
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
