#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB02B7E0)

namespace MiHoYo::SDK::PluginUI
{
	class MiHoYoSDKUIListItem : public ::System::Object
	{
	public:
		::System::Action* invocation; // 0x10
		::System::Action* deleteInvocation; // 0x18
		::System::String* itemData; // 0x20
		::System::Boolean isSelected; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTITEM_CTOR_OFFSET))(this);
		}

	};
}
