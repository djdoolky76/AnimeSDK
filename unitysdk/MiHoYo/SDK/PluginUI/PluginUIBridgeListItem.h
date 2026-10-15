#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELISTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86D60)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIBridgeListItem : public ::System::Object
	{
	public:
		::System::Int32 action_index; // 0x10
		::System::Int32 delete_action_index; // 0x14
		::System::Boolean is_selected; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* item_data; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELISTITEM_CTOR_OFFSET))(this);
		}

	};
}
