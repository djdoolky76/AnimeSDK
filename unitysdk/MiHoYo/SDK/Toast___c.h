#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_TOAST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D16BDE0)
#define MIHOYO_SDK_TOAST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D16BE20)
#define MIHOYO_SDK_TOAST___C__SHOWPLUGINUI_B__7_0_OFFSET UNITYSDK_OFFSET(0x1D16BE30)
#define MIHOYO_SDK_TOAST___C__SHOW_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D16BED0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast___c_TypeDefinitionIndex = 8238;

	class Toast___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1EF10);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1EF18);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1EF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__SHOWPLUGINUI_B__7_0_OFFSET))(this);
		}

		::System::Void _Show_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__SHOW_B__8_1_OFFSET))(this);
		}

	};
}
