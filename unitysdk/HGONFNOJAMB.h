#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HGONFNOJAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48F70)

inline static constexpr unsigned int HGONFNOJAMB_TypeDefinitionIndex = 82453;

class HGONFNOJAMB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGONFNOJAMB__CTOR_OFFSET))(this);
	}
};
