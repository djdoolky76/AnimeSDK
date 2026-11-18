#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define JGNFFEGIKIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15262720)

inline static constexpr unsigned int JGNFFEGIKIM_TypeDefinitionIndex = 63447;

class JGNFFEGIKIM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNFFEGIKIM__CTOR_OFFSET))(this);
	}
};
