#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleReactivateDialog; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_E5197BBB7D6C1B18_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3B0F8C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_E5197BBB7D6C1B18__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleReactivateDialog_E5197BBB7D6C1B18_TypeDefinitionIndex = 12273;

	class ConsoleReactivateDialog_E5197BBB7D6C1B18 : public ::System::Object
	{
	public:
		::System::Boolean E1DF5F0F06F6D6E1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_E5197BBB7D6C1B18__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::ConsoleReactivateDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_E5197BBB7D6C1B18_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
