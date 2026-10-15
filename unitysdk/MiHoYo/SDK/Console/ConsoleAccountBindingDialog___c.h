#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class ConsoleAccountBindingDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC872D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC87310)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__SHOW_B__66_0_OFFSET UNITYSDK_OFFSET(0x1BC87320)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog___c_TypeDefinitionIndex = 8995;

	class ConsoleAccountBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x350F0);
		}

		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>** StaticGet___9__66_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x350F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__66_0(::MiHoYo::SDK::Console::ConsoleAccountBindingDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__SHOW_B__66_0_OFFSET))(this, a1);
		}

	};
}
