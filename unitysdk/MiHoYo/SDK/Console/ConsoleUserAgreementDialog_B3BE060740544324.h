#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleUserAgreementDialog_B66AE7C3105965E6.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUserAgreementDialog; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_B3BE060740544324_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x39E4650)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_B3BE060740544324__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog_B3BE060740544324_TypeDefinitionIndex = 12716;

	class ConsoleUserAgreementDialog_B3BE060740544324 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_B66AE7C3105965E6 A84D57260767D5BD; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_B3BE060740544324__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::ConsoleUserAgreementDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG_B3BE060740544324_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
