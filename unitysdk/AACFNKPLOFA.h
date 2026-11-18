#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALOMHBDCEID.h"
#include "unitysdk/LHMMBAGOCLO.h"

#define AACFNKPLOFA_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1E1B23D0)
#define AACFNKPLOFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B23C0)

inline static constexpr unsigned int AACFNKPLOFA_TypeDefinitionIndex = 93941;

class AACFNKPLOFA
{
public:
	::System::Int32 KGEFHMGJLMK; // 0x10
	::System::Int32 EAFAJJJDMDJ; // 0x14
	::System::Int32 OIBNFPHMNHJ; // 0x18
	::System::Int32 ICBGJKFFCGO; // 0x1C
	::System::Int32 INKHKOFDFKI; // 0x20
	::System::Boolean PEDANHBGIGE; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 LOPBLDMHPLH; // 0x28
	::System::Int32 FPPJFAHEJBL; // 0x2C
	::System::Int32 FJGFFEBBIKB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACFNKPLOFA__CTOR_OFFSET))(this);
	}

	::ALOMHBDCEID MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::ALOMHBDCEID(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + AACFNKPLOFA_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
