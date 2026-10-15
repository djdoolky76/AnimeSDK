#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB00DBC0)

namespace MiHoYo::SDK
{
	class MiHoYoSDKWebViewManager_WebEventModel : public ::System::Object
	{
	public:
		::System::String* game; // 0x10
		::System::String* type; // 0x18
		::System::Int64 time; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTMODEL_CTOR_OFFSET))(this);
		}

	};
}
