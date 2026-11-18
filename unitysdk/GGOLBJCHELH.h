#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGOLBJCHELH_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x13D4A7E0)
#define GGOLBJCHELH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4A7D0)

inline static constexpr unsigned int GGOLBJCHELH_TypeDefinitionIndex = 44550;

class GGOLBJCHELH : public ::System::Object
{
public:
	::System::Boolean OLELMAABOKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOLBJCHELH__CTOR_OFFSET))(this);
	}

	::System::Boolean PADHEHLKBDO(::GGOLBJCHELH* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGOLBJCHELH*))((::PBYTE)hIl2Cpp + GGOLBJCHELH_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
};
