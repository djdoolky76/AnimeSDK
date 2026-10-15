#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0166B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__REGISTERDELEGATE_B__6_OFFSET UNITYSDK_OFFSET(0xB016800)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList___c__DisplayClass7_0_TypeDefinitionIndex = 46739;

	class HoYoSDKAccountList___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* deleteCallback; // 0x10
		::System::Int32 nItemIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__6(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__REGISTERDELEGATE_B__6_OFFSET))(this, a1);
		}

	};
}
