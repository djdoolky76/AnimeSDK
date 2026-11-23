#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B659550C434EB47C;

#define A34A5E51D24C4243_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x1D23B60)
#define A34A5E51D24C4243__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A34A5E51D24C4243_TypeDefinitionIndex = 9972;

class A34A5E51D24C4243 : public ::System::Object
{
public:
	::B659550C434EB47C* F30FF8AC8D10A5F4; // 0x10
	::System::Boolean B2960EF9C7534FF6; // 0x18

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A34A5E51D24C4243_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A34A5E51D24C4243__CTOR_OFFSET))(this);
	}
};
