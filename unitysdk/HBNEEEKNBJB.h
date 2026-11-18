#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HBNEEEKNBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0B730)

inline static constexpr unsigned int HBNEEEKNBJB_TypeDefinitionIndex = 78495;

class HBNEEEKNBJB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNEEEKNBJB__CTOR_OFFSET))(this);
	}
};
