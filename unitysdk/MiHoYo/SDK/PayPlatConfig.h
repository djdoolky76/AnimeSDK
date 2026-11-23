#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PAYPLATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x38CD770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayPlatConfig_TypeDefinitionIndex = 12908;

	class PayPlatConfig : public ::System::Object
	{
	public:
		::System::Boolean default_pay_platform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYPLATCONFIG__CTOR_OFFSET))(this);
		}
	};
}
