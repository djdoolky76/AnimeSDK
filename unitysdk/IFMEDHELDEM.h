#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJFGACIKBLM;
class BLCFGJIBNKI;

#define IFMEDHELDEM_GIKCMLLBEJO_OFFSET UNITYSDK_OFFSET(0x13A98160)
#define IFMEDHELDEM_KANGHGGCCLE_OFFSET UNITYSDK_OFFSET(0x13A981E0)
#define IFMEDHELDEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A98150)

inline static constexpr unsigned int IFMEDHELDEM_TypeDefinitionIndex = 92026;

class IFMEDHELDEM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMEDHELDEM__CTOR_OFFSET))(this);
	}

	::IFMEDHELDEM* GIKCMLLBEJO(::IFMEDHELDEM* LIBPKNHDIGP)
	{
		return ((::IFMEDHELDEM*(*)(::PVOID, ::IFMEDHELDEM*))((::PBYTE)hIl2Cpp + IFMEDHELDEM_GIKCMLLBEJO_OFFSET))(this, LIBPKNHDIGP);
	}

	::BLCFGJIBNKI* KANGHGGCCLE(::BJFGACIKBLM* LIBPKNHDIGP)
	{
		return ((::BLCFGJIBNKI*(*)(::PVOID, ::BJFGACIKBLM*))((::PBYTE)hIl2Cpp + IFMEDHELDEM_KANGHGGCCLE_OFFSET))(this, LIBPKNHDIGP);
	}
};
