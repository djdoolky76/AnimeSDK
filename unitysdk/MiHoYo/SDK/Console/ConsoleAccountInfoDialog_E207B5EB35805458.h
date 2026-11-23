#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleAccountInfoDialog; }
namespace MiHoYo::SDK::Console { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3923F70)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_F0B92CA147ADB067_OFFSET UNITYSDK_OFFSET(0x38F5510)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_FAD355F75D2ECFC1_OFFSET UNITYSDK_OFFSET(0x38F5540)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountInfoDialog_E207B5EB35805458_TypeDefinitionIndex = 12351;

	class ConsoleAccountInfoDialog_E207B5EB35805458 : public ::System::Object
	{
	public:
		::System::String* B61F69430CC84F65; // 0x10
		::System::String* AAA79195584BBBA9; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* B918010F05C22662; // 0x20
		::System::String* B833A8D9C61223DD; // 0x28
		::System::E891BA3236FD13E7<::MiHoYo::SDK::Console::UserGameServerInfo*>* BDCB87964C751DB1; // 0x30
		::System::E891BA3236FD13E7<::MiHoYo::SDK::Console::UserGameServerInfo*>* FC1BFCAB993D006C; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::ConsoleAccountInfoDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountInfoDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}

		::System::Boolean F0B92CA147ADB067(::MiHoYo::SDK::Console::UserGameServerInfo* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_F0B92CA147ADB067_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean FAD355F75D2ECFC1(::MiHoYo::SDK::Console::UserGameServerInfo* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_E207B5EB35805458_FAD355F75D2ECFC1_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
