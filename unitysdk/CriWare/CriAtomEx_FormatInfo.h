#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Format.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_FormatInfo_TypeDefinitionIndex = 39964;

	struct alignas(4) CriAtomEx_FormatInfo
	{
		::CriWare::CriAtomEx_Format format; // 0x10
		::System::Int32 samplingRate; // 0x14
		::System::Int64 numSamples; // 0x18
		::System::Int64 loopOffset; // 0x20
		::System::Int64 loopLength; // 0x28
		::System::Int32 numChannels; // 0x30
		::System::UInt32 reserved; // 0x34
	};
}
