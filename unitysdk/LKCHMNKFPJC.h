#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

#define LKCHMNKFPJC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1A60E720)
#define LKCHMNKFPJC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1A60E730)
#define LKCHMNKFPJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60E710)

inline static constexpr unsigned int LKCHMNKFPJC_TypeDefinitionIndex = 62670;

class LKCHMNKFPJC : public ::HGOBBALJENJ
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKCHMNKFPJC__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCHMNKFPJC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCHMNKFPJC_HFBPONNNLBA_OFFSET))(this);
	}
};
