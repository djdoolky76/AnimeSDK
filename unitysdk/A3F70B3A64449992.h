#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"
#include "unitysdk/System/DateTime.h"

#define A3F70B3A64449992__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E6BD90)
#define A3F70B3A64449992__CTOR_OFFSET UNITYSDK_OFFSET(0x3E6BD30)

inline static constexpr unsigned int A3F70B3A64449992_TypeDefinitionIndex = 14904;

class A3F70B3A64449992 : public ::E8C1635F85E9BC30
{
public:
	::System::DateTime FF0A37159A523E06; // 0x10

	::System::Void _ctor(::System::DateTime FF0A37159A523E06)
	{
		return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + A3F70B3A64449992__CTOR_OFFSET))(this, FF0A37159A523E06);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3F70B3A64449992__CTOR_1_OFFSET))(this);
	}
};
