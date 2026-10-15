#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomExVoicePool_PlayerConfig
	{
		::System::Int32 maxChannels; // 0x10
		::System::Int32 maxSamplingRate; // 0x14
		::System::Boolean streamingFlag; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 soundRendererType; // 0x1C
		::System::Int32 decodeLatency; // 0x20
		::System::Byte _padding1[0x4];
		::System::IntPtr context; // 0x28
	};
}
