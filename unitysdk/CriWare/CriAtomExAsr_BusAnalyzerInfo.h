#pragma once
#include "unitysdk/unitysdk.h"

#define CRIWARE_CRIATOMEXASR_BUSANALYZERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x2E8C180)

namespace CriWare
{
	struct alignas(8) CriAtomExAsr_BusAnalyzerInfo
	{
		::System::Int32 numChannels; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* rmsLevels; // 0x18
		::Il2CppArray<::System::Single>* peakLevels; // 0x20
		::Il2CppArray<::System::Single>* peakHoldLevels; // 0x28
		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_BUSANALYZERINFO_CTOR_OFFSET))(this, a1);
		}

	};
}
