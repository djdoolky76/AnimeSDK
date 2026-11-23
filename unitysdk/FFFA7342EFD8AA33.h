#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FFFA7342EFD8AA33_F275E2A37518EB76_OFFSET UNITYSDK_OFFSET(0x28992C0)
#define FFFA7342EFD8AA33_F326D0924676233B_OFFSET UNITYSDK_OFFSET(0x28992D0)

inline static constexpr unsigned int FFFA7342EFD8AA33_TypeDefinitionIndex = 16227;

struct alignas(4) FFFA7342EFD8AA33
{
	::System::Single F65EE8635B094773; // 0x10

	::System::Void F326D0924676233B(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFFA7342EFD8AA33_F326D0924676233B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Single F275E2A37518EB76()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFA7342EFD8AA33_F275E2A37518EB76_OFFSET))(this);
	}
};
