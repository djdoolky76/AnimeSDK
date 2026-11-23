#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3B02500)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3B02550)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3B024B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E9E2ED0CDD5AF821_OFFSET UNITYSDK_OFFSET(0x3B02660)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FBC0C6B604076C22_OFFSET UNITYSDK_OFFSET(0x3B02050)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3B020C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x391EFB0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindingSuccessDialog_TypeDefinitionIndex = 12246;

	class ConsoleBindingSuccessDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleBindingSuccessDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::GameObject* F5900F3CFCA8AFF0; // 0xB8
		::System::Action* OnConfirmed; // 0xC0
		::System::Single BDABB7898A0DA231; // 0xC8
		::System::Byte _padding0[0x4];
		::System::String* E149D8A7F5E85F25; // 0xD0
		::System::String* EB68D1C408C432F3; // 0xD8

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E060FD75EC8EE726_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* F72ADE84A7CA8ECF, ::System::String* F84B5F67F40C0E97)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_BFA7961FF2AC380B_OFFSET))(F72ADE84A7CA8ECF, F84B5F67F40C0E97);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void E9E2ED0CDD5AF821(::System::Single A11D4EC92205DAEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_E9E2ED0CDD5AF821_OFFSET))(this, A11D4EC92205DAEE);
		}

		::System::Collections::IEnumerator* FBC0C6B604076C22()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FBC0C6B604076C22_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}
	};
}
