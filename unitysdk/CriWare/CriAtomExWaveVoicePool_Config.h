#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PlayerConfig.h"

#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CONFIG_DEFAULT_OFFSET UNITYSDK_OFFSET(0x16701720)

namespace CriWare
{
	struct alignas(4) CriAtomExWaveVoicePool_Config
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExVoicePool_PlayerConfig playerConfig; // 0x18
		::System::Boolean isStreamingOnly; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 minChannels; // 0x3C
		/*
		static ::CriWare::CriAtomExWaveVoicePool_Config Default()
		{
			return ((::CriWare::CriAtomExWaveVoicePool_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CONFIG_DEFAULT_OFFSET))();
		}
		*/

	};
}
