#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHMMBAGOCLO.h"
#include "unitysdk/PDGLMNGBJGO.h"

#define IELOGEGEPDE_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1DB81790)
#define IELOGEGEPDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81780)

inline static constexpr unsigned int IELOGEGEPDE_TypeDefinitionIndex = 94087;

class IELOGEGEPDE
{
public:
	::System::Int32 EAFAJJJDMDJ; // 0x10
	::System::Int32 FJGFFEBBIKB; // 0x14
	::System::Boolean PFFHJPABHAL; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 FPPJFAHEJBL; // 0x1C
	::System::Int32 OIBNFPHMNHJ; // 0x20
	::System::Int32 KGEFHMGJLMK; // 0x24
	::System::Int32 ICBGJKFFCGO; // 0x28
	::System::Int32 LOPBLDMHPLH; // 0x2C
	::System::Int32 INKHKOFDFKI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IELOGEGEPDE__CTOR_OFFSET))(this);
	}

	::PDGLMNGBJGO MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::PDGLMNGBJGO(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + IELOGEGEPDE_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
