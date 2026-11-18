#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4E5680)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E56C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET UNITYSDK_OFFSET(0x1D4E56D0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog___c_TypeDefinitionIndex = 20312;

	class ConsoleWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xB270);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xB278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__24_0(::MiHoYo::SDK::Console::ConsoleWelcomeDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET))(this, dialog);
		}
	};
}
