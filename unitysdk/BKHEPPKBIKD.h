#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFCNEOOAHFC.h"
#include "unitysdk/FLLHHBJMAMO.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define BKHEPPKBIKD_GHCGMKJFDGG_OFFSET UNITYSDK_OFFSET(0x124A9380)
#define BKHEPPKBIKD__CTOR_OFFSET UNITYSDK_OFFSET(0x124A9390)

inline static constexpr unsigned int BKHEPPKBIKD_TypeDefinitionIndex = 93419;

class BKHEPPKBIKD : public ::FLLHHBJMAMO
{
public:
	::System::Single MOGEAGMKIGD; // 0x10
	::System::Single GJLKCLKBNME; // 0x14
	::System::Single BIOGBPMINKI; // 0x18
	::JGLIFHIAIEH CEHGFFDBHOJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHEPPKBIKD__CTOR_OFFSET))(this);
	}

	::DFCNEOOAHFC GHCGMKJFDGG()
	{
		return ((::DFCNEOOAHFC(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHEPPKBIKD_GHCGMKJFDGG_OFFSET))(this);
	}
};
