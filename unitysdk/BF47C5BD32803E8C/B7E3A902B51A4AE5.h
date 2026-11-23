#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF47C5BD32803E8C/B9B4ED66B486C619.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BF47C5BD32803E8C_B7E3A902B51A4AE5_E66B87C4FEE31D16_OFFSET UNITYSDK_OFFSET(0x429C4A0)

namespace BF47C5BD32803E8C
{
	inline static constexpr unsigned int B7E3A902B51A4AE5_TypeDefinitionIndex = 14021;

	struct alignas(8) B7E3A902B51A4AE5
	{
		::BF47C5BD32803E8C::B9B4ED66B486C619 FF6907B2DC83447A; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AB64A4FC59043A06; // 0x18

		::System::Boolean E66B87C4FEE31D16()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_B7E3A902B51A4AE5_E66B87C4FEE31D16_OFFSET))(this);
		}
	};
}
