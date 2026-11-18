#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/System/ValueType.h"

#define BFPLHJPJDCI_FGPNGOFOPHN_OFFSET UNITYSDK_OFFSET(0x78F680)
#define BFPLHJPJDCI_MOCFBCKIAJN_OFFSET UNITYSDK_OFFSET(0x78F6D0)
#define BFPLHJPJDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x78F650)

inline static constexpr unsigned int BFPLHJPJDCI_TypeDefinitionIndex = 76535;

struct alignas(4) BFPLHJPJDCI
{
	::DPKOIBEFPAO EGEGIMGMJHN; // 0x10
	::DPKOIBEFPAO MCOHLHMKLIP; // 0x28
	::System::Int32 MHBJNGBICKD; // 0x40

	::System::Void _ctor(::DPKOIBEFPAO& NONAHPBFJPB, ::DPKOIBEFPAO& JCJDKCLCKKH)
	{
		return ((::System::Void(*)(::PVOID, ::DPKOIBEFPAO&, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + BFPLHJPJDCI__CTOR_OFFSET))(this, NONAHPBFJPB, JCJDKCLCKKH);
	}

	::System::Void FGPNGOFOPHN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFPLHJPJDCI_FGPNGOFOPHN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MOCFBCKIAJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPLHJPJDCI_MOCFBCKIAJN_OFFSET))(this);
	}
};
