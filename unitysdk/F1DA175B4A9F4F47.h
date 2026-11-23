#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

#define F1DA175B4A9F4F47_B51A3E73F2240B42_OFFSET UNITYSDK_OFFSET(0x1DC0A30)
#define F1DA175B4A9F4F47_E874D8AA3A5EC1D1_OFFSET UNITYSDK_OFFSET(0x1DC0A40)
#define F1DA175B4A9F4F47_EF7BBB868FD3AE1F_OFFSET UNITYSDK_OFFSET(0x1DC0A10)
#define F1DA175B4A9F4F47_F98779A6C3AF1F68_OFFSET UNITYSDK_OFFSET(0x16BB200)
#define F1DA175B4A9F4F47__CTOR_OFFSET UNITYSDK_OFFSET(0x2999230)

inline static constexpr unsigned int F1DA175B4A9F4F47_TypeDefinitionIndex = 15633;

class F1DA175B4A9F4F47 : public ::System::Object
{
public:
	::System::Decimal B23095334BC38887; // 0x10
	::System::Decimal EAF4877E761F83BC; // 0x20

	::System::Decimal F98779A6C3AF1F68()
	{
		return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + F1DA175B4A9F4F47_F98779A6C3AF1F68_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1DA175B4A9F4F47__CTOR_OFFSET))(this);
	}

	::System::Decimal EF7BBB868FD3AE1F()
	{
		return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + F1DA175B4A9F4F47_EF7BBB868FD3AE1F_OFFSET))(this);
	}

	::System::Void E874D8AA3A5EC1D1(::System::Decimal E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + F1DA175B4A9F4F47_E874D8AA3A5EC1D1_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void B51A3E73F2240B42(::System::Decimal E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + F1DA175B4A9F4F47_B51A3E73F2240B42_OFFSET))(this, E937D4885DAA1AE8);
	}
};
