#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class ConsoleWelcomeDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC99940)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC99980)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BC99990)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog___c_TypeDefinitionIndex = 9016;

	class ConsoleWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x35D60);
		}

		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x35D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__24_0(::MiHoYo::SDK::Console::ConsoleWelcomeDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET))(this, a1);
		}

	};
}
