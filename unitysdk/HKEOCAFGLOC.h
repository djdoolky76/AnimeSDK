#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HKEOCAFGLOC__CTOR_OFFSET UNITYSDK_OFFSET(0x14953A30)

inline static constexpr unsigned int HKEOCAFGLOC_TypeDefinitionIndex = 89115;

class HKEOCAFGLOC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOCAFGLOC__CTOR_OFFSET))(this);
	}
};
