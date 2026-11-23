#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6D57A31343640D7.h"

#define A4B44389ACE52A1B_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x23BE6C0)
#define A4B44389ACE52A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA0)

inline static constexpr unsigned int A4B44389ACE52A1B_TypeDefinitionIndex = 3673;

class A4B44389ACE52A1B : public ::F6D57A31343640D7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B44389ACE52A1B__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B44389ACE52A1B_BC8FCB218D25F8E8_OFFSET))(this);
	}
};
