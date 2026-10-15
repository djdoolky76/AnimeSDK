#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopImageType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_POPIMAGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAB130)

namespace MiHoYo::SDK
{
	class PopImageModel : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* img; // 0x18
		::System::String* url; // 0x20
		::MiHoYo::SDK::PopImageType mode; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGEMODEL_CTOR_OFFSET))(this);
		}

	};
}
