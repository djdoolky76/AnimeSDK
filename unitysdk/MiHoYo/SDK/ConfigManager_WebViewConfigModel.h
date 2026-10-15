#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_WEBVIEWCONFIGMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5BB10)

namespace MiHoYo::SDK
{
	class ConfigManager_WebViewConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* abtest; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_WEBVIEWCONFIGMODEL_CTOR_OFFSET))(this);
		}

	};
}
