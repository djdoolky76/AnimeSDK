#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

#define DHGPMJHOAKC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1A1E1010)
#define DHGPMJHOAKC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1A1E1040)
#define DHGPMJHOAKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E1020)

inline static constexpr unsigned int DHGPMJHOAKC_TypeDefinitionIndex = 59950;

class DHGPMJHOAKC : public ::HGOBBALJENJ
{
public:
	::System::Int32 JMHLFLEOGLN; // 0x30

	::System::Void _ctor(::System::Int32 EBKKCNOOINK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHGPMJHOAKC__CTOR_OFFSET))(this, EBKKCNOOINK);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPMJHOAKC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPMJHOAKC_HFBPONNNLBA_OFFSET))(this);
	}
};
