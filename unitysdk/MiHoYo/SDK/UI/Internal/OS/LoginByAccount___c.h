#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::Internal::OS { class LoginByAccount; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C00B3B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C00B3F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__SHOW_B__60_0_OFFSET UNITYSDK_OFFSET(0x1C00B400)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int LoginByAccount___c_TypeDefinitionIndex = 8425;

	class LoginByAccount___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x18480);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>** StaticGet___9__60_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x18488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__60_0(::MiHoYo::SDK::UI::Internal::OS::LoginByAccount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__SHOW_B__60_0_OFFSET))(this, a1);
		}

	};
}
