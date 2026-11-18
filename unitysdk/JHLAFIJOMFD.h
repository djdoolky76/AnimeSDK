#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEGPHLDNAF.h"

#define JHLAFIJOMFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E882FC0)

inline static constexpr unsigned int JHLAFIJOMFD_TypeDefinitionIndex = 94427;

class JHLAFIJOMFD : public ::AJEGPHLDNAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLAFIJOMFD__CTOR_OFFSET))(this);
	}
};
