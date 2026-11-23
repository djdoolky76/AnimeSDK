#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B69B9602AA30BF97.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

#define A1CCF3F98148489B_A66245FDD0182C57_OFFSET UNITYSDK_OFFSET(0x1E3A020)
#define A1CCF3F98148489B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A1CCF3F98148489B_TypeDefinitionIndex = 9511;

class A1CCF3F98148489B : public ::B69B9602AA30BF97
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1CCF3F98148489B__CTOR_OFFSET))(this);
	}

	::E12F55A5FCCCF1EC A66245FDD0182C57()
	{
		return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + A1CCF3F98148489B_A66245FDD0182C57_OFFSET))(this);
	}
};
