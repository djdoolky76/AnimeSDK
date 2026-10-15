#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class PS4BindEmailDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDEFED0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEFF10)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__SHOW_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BDEFF20)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindEmailDialog___c_TypeDefinitionIndex = 9019;

	class PS4BindEmailDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x19C0);
		}

		static ::System::Action_1<::MiHoYo::SDK::Console::PS4BindEmailDialog*>** StaticGet___9__53_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::PS4BindEmailDialog*>**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x19C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__53_0(::MiHoYo::SDK::Console::PS4BindEmailDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::PS4BindEmailDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__SHOW_B__53_0_OFFSET))(this, a1);
		}

	};
}
