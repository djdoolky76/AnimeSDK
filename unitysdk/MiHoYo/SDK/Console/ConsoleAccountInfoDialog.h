#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::Console { class UserGameServerInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x391A160)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_B074C1DCB1DD3448_OFFSET UNITYSDK_OFFSET(0x391A1B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x391A250)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x38E4090)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x391A110)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E86BF3D509D0F4E3_OFFSET UNITYSDK_OFFSET(0x38E4060)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39190C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x38E4350)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountInfoDialog_TypeDefinitionIndex = 12352;

	class ConsoleAccountInfoDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleAccountInfoDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountInfoDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountInfoDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* OnContinueToBind; // 0xB8
		::System::Action* OnSwitchHoYoAccount; // 0xC0
		::System::Boolean A9FDA7C7782E3C0C; // 0xC8
		::System::Byte _padding0[0x7];
		::System::String* B4F727399818F8F7; // 0xD0
		::System::String* AB3D50E9B99F1D48; // 0xD8
		::MiHoYo::SDK::Console::UserGameServerInfo* B8A7EF98FFF072C3; // 0xE0
		::MiHoYo::SDK::Console::UserGameServerInfo* B0BC5E868CBA5788; // 0xE8

		static ::System::Void B074C1DCB1DD3448(::System::Boolean A4D3F13450FDBF6D)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_B074C1DCB1DD3448_OFFSET))(A4D3F13450FDBF6D);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* B61F69430CC84F65, ::System::String* AAA79195584BBBA9, ::System::String* B833A8D9C61223DD, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* B918010F05C22662)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_BFA7961FF2AC380B_OFFSET))(B61F69430CC84F65, AAA79195584BBBA9, B833A8D9C61223DD, B918010F05C22662);
		}

		::System::Void E86BF3D509D0F4E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E86BF3D509D0F4E3_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E060FD75EC8EE726_OFFSET))(this);
		}
	};
}
