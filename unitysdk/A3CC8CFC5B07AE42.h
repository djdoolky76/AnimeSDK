#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A143BE359A899021;

#define A3CC8CFC5B07AE42_F77112F154650043_OFFSET UNITYSDK_OFFSET(0x1F5F7C0)
#define A3CC8CFC5B07AE42__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3CC8CFC5B07AE42_TypeDefinitionIndex = 7825;

class A3CC8CFC5B07AE42 : public ::System::Object
{
public:
	::A143BE359A899021* E76EDB4561E1808C; // 0x10

	::System::Void F77112F154650043()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3CC8CFC5B07AE42_F77112F154650043_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3CC8CFC5B07AE42__CTOR_OFFSET))(this);
	}
};
