#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPCBIBDNDAM.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define AFJEMBAGGNG_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D9A8140)
#define AFJEMBAGGNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A8190)

inline static constexpr unsigned int AFJEMBAGGNG_TypeDefinitionIndex = 93752;

class AFJEMBAGGNG
{
public:
	::System::Int32 EGEGIMGMJHN; // 0x28
	::System::Int32 CLACNEMIOBA; // 0x2C
	::JGLIFHIAIEH PGLLJALFBJJ; // 0x30
	::DPCBIBDNDAM KAHIJOMLLBE; // 0x38
	::System::UInt32 BKLGNCBNEGM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJEMBAGGNG__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJEMBAGGNG_AIMAIGLGDBE_OFFSET))(this);
	}
};
