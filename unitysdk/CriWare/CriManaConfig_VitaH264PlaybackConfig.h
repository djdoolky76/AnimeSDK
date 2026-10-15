#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANACONFIG_VITAH264PLAYBACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1672C330)

namespace CriWare
{
	class CriManaConfig_VitaH264PlaybackConfig : public ::System::Object
	{
	public:
		::System::Boolean useH264Playback; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 maxWidth; // 0x14
		::System::Int32 maxHeight; // 0x18
		::System::Boolean getMemoryFromTexture; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_VITAH264PLAYBACKCONFIG_CTOR_OFFSET))(this);
		}

	};
}
