#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class AFHHLFALJJN;

#define ACGAHNMAMEB_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x135D47A0)
#define ACGAHNMAMEB_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x135D47B0)
#define ACGAHNMAMEB__CTOR_OFFSET UNITYSDK_OFFSET(0x135D4780)

inline static constexpr unsigned int ACGAHNMAMEB_TypeDefinitionIndex = 50327;

class ACGAHNMAMEB : public ::HGOBBALJENJ
{
public:
	::AFHHLFALJJN* DAAAEJDBNFI; // 0x30

	::System::Void _ctor(::AFHHLFALJJN* AAOCANGHBDG, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::AFHHLFALJJN*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACGAHNMAMEB__CTOR_OFFSET))(this, AAOCANGHBDG, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGAHNMAMEB_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGAHNMAMEB_HFBPONNNLBA_OFFSET))(this);
	}
};
