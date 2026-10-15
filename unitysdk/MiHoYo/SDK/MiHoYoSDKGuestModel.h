#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKGUESTMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xAFCAE60)

namespace MiHoYo::SDK
{
	class MiHoYoSDKGuestModel : public ::System::Object
	{
	public:
		::System::String* guest_id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGUESTMODEL_CTOR_OFFSET))(this);
		}

	};
}
