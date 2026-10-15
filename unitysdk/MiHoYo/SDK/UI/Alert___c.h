#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_UI_ALERT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFF03D0)
#define MIHOYO_SDK_UI_ALERT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF0410)
#define MIHOYO_SDK_UI_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET UNITYSDK_OFFSET(0x1BFF0420)
#define MIHOYO_SDK_UI_ALERT___C__SHOW_B__21_1_OFFSET UNITYSDK_OFFSET(0x1BFF04C0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert___c_TypeDefinitionIndex = 8398;

	class Alert___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x20920);
		}

		static ::System::Action** StaticGet___9__20_2()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x20928);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x20930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET))(this);
		}

		::System::Void _Show_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__SHOW_B__21_1_OFFSET))(this);
		}

	};
}
