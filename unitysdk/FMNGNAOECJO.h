#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FMNGNAOECJO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D85180)

inline static constexpr unsigned int FMNGNAOECJO_TypeDefinitionIndex = 45696;

class FMNGNAOECJO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNGNAOECJO__CTOR_OFFSET))(this);
	}
};
