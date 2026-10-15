#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGENOTIFYMESSAGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86D70)

namespace MiHoYo::SDK::PluginUI
{
	class PluginUIBridgeNotifyMessageModel : public ::System::Object
	{
	public:
		::System::String* event_name; // 0x10
		::System::Int32 msg_id; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* msg_params; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGENOTIFYMESSAGEMODEL_CTOR_OFFSET))(this);
		}

	};
}
