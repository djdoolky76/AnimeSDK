#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDEIDDOPHDD;

#define NBDIHLFAHAB_MJDANCHJAAI_GKPKOHGDIAM_OFFSET UNITYSDK_OFFSET(0x1726F550)
#define NBDIHLFAHAB_MJDANCHJAAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1726F540)

inline static constexpr unsigned int NBDIHLFAHAB_MJDANCHJAAI_TypeDefinitionIndex = 92927;

class NBDIHLFAHAB_MJDANCHJAAI : public ::System::Object
{
public:
	::System::Int32 LKGAAIGDDBH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDIHLFAHAB_MJDANCHJAAI__CTOR_OFFSET))(this);
	}

	::System::Boolean GKPKOHGDIAM(::GDEIDDOPHDD* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::GDEIDDOPHDD*))((::PBYTE)hIl2Cpp + NBDIHLFAHAB_MJDANCHJAAI_GKPKOHGDIAM_OFFSET))(this, HAAEBCOBKFF);
	}
};
