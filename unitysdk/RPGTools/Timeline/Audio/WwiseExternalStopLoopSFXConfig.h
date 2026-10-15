#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B3570)

namespace RPGTools::Timeline::Audio
{
	class WwiseExternalStopLoopSFXConfig : public ::System::Object
	{
	public:
		::System::Boolean StopAll; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 StopSFXId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCONFIG_CTOR_OFFSET))(this);
		}

	};
}
