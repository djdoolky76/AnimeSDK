#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B276BD183A6255CD.h"

#define B1CFDDBCB7FEF541_A042465F299BA94E_OFFSET UNITYSDK_OFFSET(0x28CDA00)
#define B1CFDDBCB7FEF541_B1AF1F59AC6BEF27_OFFSET UNITYSDK_OFFSET(0x28CD9B0)
#define B1CFDDBCB7FEF541__CTOR_OFFSET UNITYSDK_OFFSET(0x2880BC0)

inline static constexpr unsigned int B1CFDDBCB7FEF541_TypeDefinitionIndex = 16297;

class B1CFDDBCB7FEF541 : public ::B276BD183A6255CD
{
public:
	::System::Void A042465F299BA94E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1CFDDBCB7FEF541_A042465F299BA94E_OFFSET))(this);
	}

	::System::Void B1AF1F59AC6BEF27()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1CFDDBCB7FEF541_B1AF1F59AC6BEF27_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1CFDDBCB7FEF541__CTOR_OFFSET))(this);
	}
};
