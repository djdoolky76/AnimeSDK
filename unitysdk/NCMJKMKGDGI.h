#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NCMJKMKGDGI__CTOR_OFFSET UNITYSDK_OFFSET(0x17275B20)

inline static constexpr unsigned int NCMJKMKGDGI_TypeDefinitionIndex = 51647;

class NCMJKMKGDGI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMJKMKGDGI__CTOR_OFFSET))(this);
	}
};
