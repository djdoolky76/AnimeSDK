#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define BMKJOGACIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E568060)

inline static constexpr unsigned int BMKJOGACIGD_TypeDefinitionIndex = 95285;

class BMKJOGACIGD : public ::CGGLJLECNJM
{
public:
	::System::UInt32 JCEJDIHGDEA; // 0x20
	::System::UInt32 BKLGNCBNEGM; // 0x24
	::System::UInt32 KEHNCKBIBFA; // 0x28
	::System::Int32 DNFAEHNDGKF; // 0x2C
	::System::Int32 DJBNIHCEHCG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKJOGACIGD__CTOR_OFFSET))(this);
	}
};
