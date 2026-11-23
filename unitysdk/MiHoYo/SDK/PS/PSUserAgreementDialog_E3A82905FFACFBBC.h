#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_B66AE7C3105965E6.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSUserAgreementDialog; }

#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E3A82905FFACFBBC_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3923E70)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E3A82905FFACFBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog_E3A82905FFACFBBC_TypeDefinitionIndex = 12349;

	class PSUserAgreementDialog_E3A82905FFACFBBC : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::PSUserAgreementDialog_B66AE7C3105965E6 A84D57260767D5BD; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E3A82905FFACFBBC__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::PS::PSUserAgreementDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E3A82905FFACFBBC_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
