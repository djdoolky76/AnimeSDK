#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmPlayerConfig.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig_TypeDefinitionIndex = 40086;

	struct alignas(4) CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExRawPcmVoicePool_RawPcmPlayerConfig playerConfig; // 0x18
	};
}
