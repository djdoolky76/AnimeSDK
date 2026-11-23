#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A2B6D5EEC81A9621;

#define BBE2C43BD63FF066_B238E87DC8A552A5_OFFSET UNITYSDK_OFFSET(0x3B60BD0)
#define BBE2C43BD63FF066__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBE2C43BD63FF066_TypeDefinitionIndex = 11063;

class BBE2C43BD63FF066 : public ::System::Object
{
public:
	::System::Int32 BBFF5DD369749024; // 0x10
	::System::Int32 A498F75281BC9809; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBE2C43BD63FF066__CTOR_OFFSET))(this);
	}

	::System::Void B238E87DC8A552A5(::A2B6D5EEC81A9621* AF4717A1A80FD60F)
	{
		return ((::System::Void(*)(::PVOID, ::A2B6D5EEC81A9621*))((::PBYTE)hIl2Cpp + BBE2C43BD63FF066_B238E87DC8A552A5_OFFSET))(this, AF4717A1A80FD60F);
	}
};
