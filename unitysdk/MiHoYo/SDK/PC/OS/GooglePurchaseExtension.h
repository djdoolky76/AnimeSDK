#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_GOOGLEPURCHASEEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE82C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePurchaseExtension_TypeDefinitionIndex = 8536;

	class GooglePurchaseExtension : public ::System::Object
	{
	public:
		::System::String* purchaseToken; // 0x10
		::System::Int32 purchaseState; // 0x18
		::System::Boolean acknowledged; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 quantity; // 0x20
		::System::Byte _padding1[0x4];
		::System::Int64 purchaseTime; // 0x28
		::System::String* packageName; // 0x30
		::System::String* signature; // 0x38
		::System::String* originalJson; // 0x40
		// static const ::System::Object PURCHASE_STATE_OKAY; // 0x0
		// static const ::System::Object PURCHASE_STATE_PENDING; // 0x0
		// static const ::System::Object PURCHASE_STATE_UNKNOWN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPURCHASEEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
