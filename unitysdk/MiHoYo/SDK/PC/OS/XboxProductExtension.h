#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXPRODUCTEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42960)

namespace MiHoYo::SDK::PC::OS
{
	class XboxProductExtension : public ::System::Object
	{
	public:
		::System::String* skuId; // 0x10
		::System::String* storeId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPRODUCTEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
