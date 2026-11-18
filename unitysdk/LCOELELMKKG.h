#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LCOELELMKKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1997B6B0)

inline static constexpr unsigned int LCOELELMKKG_TypeDefinitionIndex = 90206;

class LCOELELMKKG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOELELMKKG__CTOR_OFFSET))(this);
	}
};
