#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FPKMAANKLOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17510400)

inline static constexpr unsigned int FPKMAANKLOI_TypeDefinitionIndex = 78010;

class FPKMAANKLOI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKMAANKLOI__CTOR_OFFSET))(this);
	}
};
