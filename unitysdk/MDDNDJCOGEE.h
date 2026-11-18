#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define MDDNDJCOGEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5FCA0)

inline static constexpr unsigned int MDDNDJCOGEE_TypeDefinitionIndex = 94887;

class MDDNDJCOGEE : public ::BIHPBFHEOOA
{
public:
	::System::Int32 HAAEBCOBKFF; // 0x10
	::System::Int32 BFMMEICFNCD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDNDJCOGEE__CTOR_OFFSET))(this);
	}
};
