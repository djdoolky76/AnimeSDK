#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DOMOBLPHIGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1209E240)

inline static constexpr unsigned int DOMOBLPHIGI_TypeDefinitionIndex = 47677;

class DOMOBLPHIGI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMOBLPHIGI__CTOR_OFFSET))(this);
	}
};
