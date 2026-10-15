#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI { class BindingWelcome; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_BINDINGWELCOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFC5BB0)
#define MIHOYO_SDK_UI_BINDINGWELCOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC5BF0)
#define MIHOYO_SDK_UI_BINDINGWELCOME___C__SHOW_B__36_0_OFFSET UNITYSDK_OFFSET(0x1BFC5C00)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingWelcome___c_TypeDefinitionIndex = 8390;

	class BindingWelcome___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::BindingWelcome*>** StaticGet___9__36_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::BindingWelcome*>**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2AD60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI", "<>c")->GetStaticField(0x2AD68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__36_0(::MiHoYo::SDK::UI::BindingWelcome* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::BindingWelcome*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C__SHOW_B__36_0_OFFSET))(this, a1);
		}

	};
}
