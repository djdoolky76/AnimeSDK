#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEBHBAOHHII.h"
#include "unitysdk/DIKBMJBFOBG.h"

#define BFEOGBPMBFB_CTOR_OFFSET UNITYSDK_OFFSET(0xFAD0)
#define BFEOGBPMBFB_GET_KEY_OFFSET UNITYSDK_OFFSET(0xFB10)
#define BFEOGBPMBFB_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xFB30)

inline static constexpr unsigned int BFEOGBPMBFB_TypeDefinitionIndex = 62158;

	struct alignas(4) BFEOGBPMBFB
	{
		::DIKBMJBFOBG _Key_k__BackingField; // 0x10
		::DEBHBAOHHII _Value_k__BackingField; // 0x28
		::System::Void _ctor(::DIKBMJBFOBG a1, ::DEBHBAOHHII a2)
		{
			return ((::System::Void(*)(::PVOID, ::DIKBMJBFOBG, ::DEBHBAOHHII))((::PBYTE)hIl2Cpp + BFEOGBPMBFB_CTOR_OFFSET))(this, a1, a2);
		}

		::DIKBMJBFOBG get_Key()
		{
			return ((::DIKBMJBFOBG(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEOGBPMBFB_GET_KEY_OFFSET))(this);
		}

		::DEBHBAOHHII get_Value()
		{
			return ((::DEBHBAOHHII(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEOGBPMBFB_GET_VALUE_OFFSET))(this);
		}

	};
