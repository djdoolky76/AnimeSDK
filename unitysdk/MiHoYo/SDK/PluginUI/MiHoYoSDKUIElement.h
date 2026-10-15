#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB02B7C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIElement_TypeDefinitionIndex = 46882;

	class MiHoYoSDKUIElement : public ::System::Object
	{
	public:
		::System::String* text; // 0x10
		::System::String* id; // 0x18
		::System::String* hintText; // 0x20
		::System::Action* updateTextAction; // 0x28
		::System::Action* invocation; // 0x30
		::System::Boolean isChecked; // 0x38
		::System::Boolean visible; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIELEMENT_CTOR_OFFSET))(this);
		}

	};
}
