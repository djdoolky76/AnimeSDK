#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFCNEOOAHFC.h"
#include "unitysdk/FLLHHBJMAMO.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define FFIBAPKMPNJ_GHCGMKJFDGG_OFFSET UNITYSDK_OFFSET(0x1CCB4F20)
#define FFIBAPKMPNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB4F30)

inline static constexpr unsigned int FFIBAPKMPNJ_TypeDefinitionIndex = 94309;

class FFIBAPKMPNJ : public ::FLLHHBJMAMO
{
public:
	::JGLIFHIAIEH CEHGFFDBHOJ; // 0x10
	::System::Single GJLKCLKBNME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIBAPKMPNJ__CTOR_OFFSET))(this);
	}

	::DFCNEOOAHFC GHCGMKJFDGG()
	{
		return ((::DFCNEOOAHFC(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIBAPKMPNJ_GHCGMKJFDGG_OFFSET))(this);
	}
};
