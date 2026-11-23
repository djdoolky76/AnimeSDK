#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleAccountBindingDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6_E7C08F1D8D86D36F_OFFSET UNITYSDK_OFFSET(0x38F4440)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x38F5C30)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 11770;

	class ConsoleAccountBindingDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>** StaticGet_FE9102701817EE34()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E7C08F1D8D86D36F(::MiHoYo::SDK::Console::ConsoleAccountBindingDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_F5628F8349D4A8A6_E7C08F1D8D86D36F_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
