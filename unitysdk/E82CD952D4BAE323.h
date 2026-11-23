#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B7D12B7B4893DA4E.h"

#define E82CD952D4BAE323_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x2216B00)
#define E82CD952D4BAE323__CTOR_OFFSET UNITYSDK_OFFSET(0x2216DC0)

inline static constexpr unsigned int E82CD952D4BAE323_TypeDefinitionIndex = 9102;

class E82CD952D4BAE323 : public ::B7D12B7B4893DA4E
{
public:
	::System::Single F5DBBAF13721163D; // 0xE0

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E82CD952D4BAE323_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E82CD952D4BAE323__CTOR_OFFSET))(this);
	}
};
