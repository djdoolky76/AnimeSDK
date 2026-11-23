#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6_A3E3EA7D09B43200_OFFSET UNITYSDK_OFFSET(0x3ADF7A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE0290)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12188;

	class ConsoleWelcomeDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleWelcomeDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Console::ConsoleWelcomeDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>** StaticGet_E9ECEFD236E8FFBC()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A3E3EA7D09B43200(::MiHoYo::SDK::Console::ConsoleWelcomeDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG_F5628F8349D4A8A6_A3E3EA7D09B43200_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
