#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EBMBBFGINIF__CTOR_OFFSET UNITYSDK_OFFSET(0x16989750)

inline static constexpr unsigned int EBMBBFGINIF_TypeDefinitionIndex = 49265;

class EBMBBFGINIF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMBBFGINIF__CTOR_OFFSET))(this);
	}
};
