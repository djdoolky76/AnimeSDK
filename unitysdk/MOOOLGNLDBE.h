#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MOOOLGNLDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x131AD1C0)

inline static constexpr unsigned int MOOOLGNLDBE_TypeDefinitionIndex = 82809;

class MOOOLGNLDBE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOOLGNLDBE__CTOR_OFFSET))(this);
	}
};
