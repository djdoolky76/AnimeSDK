#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_CategoryInfo.h"

#define CRIWARE_CRIATOMEXACFDEBUG_CATEGORYINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x2E8B370)

namespace CriWare
{
	struct alignas(4) CriAtomExAcfDebug_CategoryInfoForMarshaling
	{
		::System::UInt32 groupNo; // 0x10
		::System::UInt32 id; // 0x14
		::System::IntPtr namePtr; // 0x18
		::System::UInt32 numCueLimits; // 0x20
		::System::Single volume; // 0x24
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_CategoryInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_CategoryInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CATEGORYINFOFORMARSHALING_CONVERT_OFFSET))(this, a1);
		}

	};
}
