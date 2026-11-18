#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HIDPLEMBJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x10112110)

inline static constexpr unsigned int HIDPLEMBJNB_TypeDefinitionIndex = 87564;

class HIDPLEMBJNB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPLEMBJNB__CTOR_OFFSET))(this);
	}
};
