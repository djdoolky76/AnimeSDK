#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PAYMENTCNBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3AC5E20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PaymentCNBoxConfig_TypeDefinitionIndex = 12127;

	class PaymentCNBoxConfig : public ::System::Object
	{
	public:
		::System::Int32 h5_cashier_timeout; // 0x10

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAYMENTCNBOXCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
