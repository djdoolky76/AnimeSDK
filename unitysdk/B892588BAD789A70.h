#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F99F554F0AC2B8C3.h"

class A2255F4B9978A3BD;

#define B892588BAD789A70_E1C67F23C6641A1F_OFFSET UNITYSDK_OFFSET(0x18EAA30)
#define B892588BAD789A70__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B892588BAD789A70_TypeDefinitionIndex = 1426;

class B892588BAD789A70 : public ::F99F554F0AC2B8C3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B892588BAD789A70__CTOR_OFFSET))(this);
	}

	::System::Boolean E1C67F23C6641A1F(::A2255F4B9978A3BD* F5BA898E96D1FD0D)
	{
		return ((::System::Boolean(*)(::PVOID, ::A2255F4B9978A3BD*))((::PBYTE)hIl2Cpp + B892588BAD789A70_E1C67F23C6641A1F_OFFSET))(this, F5BA898E96D1FD0D);
	}
};
