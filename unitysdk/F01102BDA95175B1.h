#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

#define F01102BDA95175B1_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x1D36F60)
#define F01102BDA95175B1_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1D36EB0)
#define F01102BDA95175B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F01102BDA95175B1_TypeDefinitionIndex = 10051;

class F01102BDA95175B1 : public ::AB07E24B584983C1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F01102BDA95175B1__CTOR_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F01102BDA95175B1_AFD5178090BD77F2_OFFSET))(this);
	}

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F01102BDA95175B1_A3C2F655C6B4F5E2_OFFSET))(this);
	}
};
