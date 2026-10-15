#pragma once
#include "unitysdk/unitysdk.h"

#define IEHGPFIGKOB_NPHKIPDJODH_GIHKIEHLAEG_OFFSET UNITYSDK_OFFSET(0x2E80620)

	struct alignas(4) IEHGPFIGKOB_NPHKIPDJODH
	{
		::System::Single MIMJMNGMICF; // 0x10
		::System::Single CBDMAHCJGOL; // 0x14
		::System::Void GIHKIEHLAEG(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEHGPFIGKOB_NPHKIPDJODH_GIHKIEHLAEG_OFFSET))(this, a1, a2);
		}

	};
