#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class ConsoleRealNameDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC70200)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC70240)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__SHOW_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BC70250)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleRealNameDialog___c_TypeDefinitionIndex = 9009;

	class ConsoleRealNameDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x56020);
		}

		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>**)UnitySDK::FromName("MiHoYo.SDK.Console", "<>c")->GetStaticField(0x56028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__16_0(::MiHoYo::SDK::Console::ConsoleRealNameDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleRealNameDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__SHOW_B__16_0_OFFSET))(this, a1);
		}

	};
}
