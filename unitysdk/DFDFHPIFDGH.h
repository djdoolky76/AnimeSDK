#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DFDFHPIFDGH__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6EDF0)

inline static constexpr unsigned int DFDFHPIFDGH_TypeDefinitionIndex = 45595;

class DFDFHPIFDGH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDFHPIFDGH__CTOR_OFFSET))(this);
	}
};
