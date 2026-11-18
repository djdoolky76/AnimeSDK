#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HDMHMFNGEFD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x8CC600)

inline static constexpr unsigned int HDMHMFNGEFD_TypeDefinitionIndex = 93284;

struct alignas(4) HDMHMFNGEFD
{
	::System::Single CCDNKBONPLB; // 0x10
	::System::Boolean OKIMPIHCIOF; // 0x14

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMHMFNGEFD_NPOLNFDBOOD_OFFSET))(this);
	}
};
