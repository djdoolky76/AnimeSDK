#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IBNKIKGOLIH__CTOR_OFFSET UNITYSDK_OFFSET(0x10130500)

inline static constexpr unsigned int IBNKIKGOLIH_TypeDefinitionIndex = 63254;

class IBNKIKGOLIH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNKIKGOLIH__CTOR_OFFSET))(this);
	}
};
