#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class ConsoleUGCAgreementDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC94110)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC94150)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__SHOW_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BC94160)

namespace MiHoYo::SDK::Console
{
	class ConsoleUGCAgreementDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x35B60);
		}

		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x35B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__22_0(::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__SHOW_B__22_0_OFFSET))(this, a1);
		}

	};
}
