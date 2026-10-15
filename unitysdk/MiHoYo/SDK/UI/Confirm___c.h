#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_UI_CONFIRM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC9410)
#define MIHOYO_SDK_UI_CONFIRM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC9450)
#define MIHOYO_SDK_UI_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET UNITYSDK_OFFSET(0x1BFC9460)
#define MIHOYO_SDK_UI_CONFIRM___C__SHOW_B__24_1_OFFSET UNITYSDK_OFFSET(0x1BFC9500)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm___c_TypeDefinitionIndex = 8404;

	class Confirm___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2AEB0);
		}

		static ::System::Action** StaticGet___9__23_2()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2AEB8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2AEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET))(this);
		}

		::System::Void _Show_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__SHOW_B__24_1_OFFSET))(this);
		}

	};
}
