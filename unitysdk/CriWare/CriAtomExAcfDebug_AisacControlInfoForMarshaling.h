#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacControlInfo.h"

#define CRIWARE_CRIATOMEXACFDEBUG_AISACCONTROLINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x2E8B330)

namespace CriWare
{
	struct alignas(4) CriAtomExAcfDebug_AisacControlInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::UInt32 id; // 0x18
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_AisacControlInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_AisacControlInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_AISACCONTROLINFOFORMARSHALING_CONVERT_OFFSET))(this, a1);
		}

	};
}
