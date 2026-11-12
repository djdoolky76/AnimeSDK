#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_ALERT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB4C10)
#define MIHOYO_SDK_ALERT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB4C50)
#define MIHOYO_SDK_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET UNITYSDK_OFFSET(0x1CDB4C60)
#define MIHOYO_SDK_ALERT___C__SHOW_B__21_1_OFFSET UNITYSDK_OFFSET(0x1CDB4D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert___c_TypeDefinitionIndex = 8252;

	class Alert___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_2()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x51C60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x51C68);
		}

		static ::System::Action** StaticGet___9__21_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x51C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET))(this);
		}

		::System::Void _Show_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__SHOW_B__21_1_OFFSET))(this);
		}

	};
}
