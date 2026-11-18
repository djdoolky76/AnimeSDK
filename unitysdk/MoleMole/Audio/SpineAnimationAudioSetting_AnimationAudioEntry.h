#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SpineAnimationAudioSetting_AnimationAudioEntry_TypeDefinitionIndex = 80251;

	struct alignas(8) SpineAnimationAudioSetting_AnimationAudioEntry
	{
		::MoleMole::Config::ConfigSoundActionGeneral* Start; // 0x10
		::MoleMole::Config::ConfigSoundActionGeneral* End; // 0x18
	};
}
