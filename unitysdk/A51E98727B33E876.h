#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6D57A31343640D7.h"

#define A51E98727B33E876_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x266CCF0)
#define A51E98727B33E876__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA0)

inline static constexpr unsigned int A51E98727B33E876_TypeDefinitionIndex = 6208;

class A51E98727B33E876 : public ::F6D57A31343640D7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A51E98727B33E876__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A51E98727B33E876_BC8FCB218D25F8E8_OFFSET))(this);
	}
};
