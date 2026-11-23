#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_B66AE7C3105965E6.h"

namespace System { class Action; }

#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x391ED10)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x391ED60)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x391EE50)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x391ECA0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x391ECC0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E86BF3D509D0F4E3_OFFSET UNITYSDK_OFFSET(0x391EC80)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x391E2D0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x391EFB0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog_TypeDefinitionIndex = 12350;

	class PSUserAgreementDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSUserAgreementDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PS::PSUserAgreementDialog**)Il2CppClass::FromTypeDefinitionIndex(PSUserAgreementDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::MiHoYo::SDK::PS::PSUserAgreementDialog_B66AE7C3105965E6 A0244957CFAE872F; // 0xB8
		::System::Byte _padding0[0x4];
		::System::Action* OnUserAgreementClicked; // 0xC0
		::System::Action* OnPrivacyPolicyClicked; // 0xC8
		::System::Action* OnChildrenPrivacyClicked; // 0xD0
		::System::Action* OnAgreementCanceled; // 0xD8
		::System::Action* OnAgreementAccepted; // 0xE0

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E060FD75EC8EE726_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::PS::PSUserAgreementDialog_B66AE7C3105965E6 A84D57260767D5BD)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PS::PSUserAgreementDialog_B66AE7C3105965E6))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_BFA7961FF2AC380B_OFFSET))(A84D57260767D5BD);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void E86BF3D509D0F4E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG_E86BF3D509D0F4E3_OFFSET))(this);
		}
	};
}
