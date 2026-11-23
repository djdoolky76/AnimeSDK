#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8E2B8D79C80AD1A/BA165457E1A8F997.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define F1D9C7A6C91AD71B__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int F1D9C7A6C91AD71B_TypeDefinitionIndex = 4071;

struct alignas(8) F1D9C7A6C91AD71B
{
	::System::String* E233C60D2808ACF5; // 0x10
	::B8E2B8D79C80AD1A::BA165457E1A8F997 F115FA1EDA6D1617; // 0x18

	::System::Void _ctor(::System::String* A63698870A4A03E5, ::B8E2B8D79C80AD1A::BA165457E1A8F997 A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::B8E2B8D79C80AD1A::BA165457E1A8F997))((::PBYTE)hIl2Cpp + F1D9C7A6C91AD71B__CTOR_OFFSET))(this, A63698870A4A03E5, A288CB28FC2A6DA3);
	}
};
