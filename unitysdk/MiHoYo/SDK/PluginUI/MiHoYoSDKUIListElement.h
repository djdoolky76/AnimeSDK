#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIElement.h"
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIListItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB02B7D0)

namespace MiHoYo::SDK::PluginUI
{
	class MiHoYoSDKUIListElement : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement
	{
	public:
		::System::Action* itemsInvocation; // 0x40
		::System::Action* itemsDeleteInvocation; // 0x48
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>* lstItem; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUILISTELEMENT_CTOR_OFFSET))(this);
		}

	};
}
