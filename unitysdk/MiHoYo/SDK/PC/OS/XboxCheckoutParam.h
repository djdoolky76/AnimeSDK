#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXCHECKOUTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF428B0)

namespace MiHoYo::SDK::PC::OS
{
	class XboxCheckoutParam : public ::System::Object
	{
	public:
		::System::String* storeId; // 0x10
		::System::String* productName; // 0x18
		::System::String* extData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXCHECKOUTPARAM_CTOR_OFFSET))(this);
		}

	};
}
