#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleRealNameDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6_FB122FE89774F7B5_OFFSET UNITYSDK_OFFSET(0x39CCB20)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39CDE50)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleRealNameDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12610;

	class ConsoleRealNameDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleRealNameDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Console::ConsoleRealNameDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ConsoleRealNameDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>** StaticGet_FB5E19DD986E8C90()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleRealNameDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FB122FE89774F7B5(::MiHoYo::SDK::Console::ConsoleRealNameDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleRealNameDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_F5628F8349D4A8A6_FB122FE89774F7B5_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
