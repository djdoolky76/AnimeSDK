#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIHNKMMCLEB.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define JKGAIJHNLNJ_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1DA14290)
#define JKGAIJHNLNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F7940)

inline static constexpr unsigned int JKGAIJHNLNJ_TypeDefinitionIndex = 93370;

class JKGAIJHNLNJ
{
public:
	::System::Boolean PJPEFGIBPKG; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single FGMJPHFBNHN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGAIJHNLNJ__CTOR_OFFSET))(this);
	}

	::HIHNKMMCLEB MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::HIHNKMMCLEB(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + JKGAIJHNLNJ_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
