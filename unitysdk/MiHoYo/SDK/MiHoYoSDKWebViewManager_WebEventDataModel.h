#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTDATAMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB010490)

namespace MiHoYo::SDK
{
	class MiHoYoSDKWebViewManager_WebEventDataModel : public ::System::Object
	{
	public:
		::System::Int32 num; // 0x10
		::System::Int32 type; // 0x14
		::System::Int32 exchange; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER_WEBEVENTDATAMODEL_CTOR_OFFSET))(this);
		}

	};
}
