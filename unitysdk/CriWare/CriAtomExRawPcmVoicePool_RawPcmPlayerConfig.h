#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmFormat.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExRawPcmVoicePool_RawPcmPlayerConfig_TypeDefinitionIndex = 40085;

	struct alignas(4) CriAtomExRawPcmVoicePool_RawPcmPlayerConfig
	{
		::CriWare::CriAtomExRawPcmVoicePool_RawPcmFormat format; // 0x10
		::System::Int32 maxChannels; // 0x14
		::System::Int32 maxSamplingRate; // 0x18
		::System::Int32 soundRendererType; // 0x1C
		::System::Int32 decodeLatency; // 0x20
		::System::Byte _padding0[0x4];
		::System::IntPtr context; // 0x28
	};
}
