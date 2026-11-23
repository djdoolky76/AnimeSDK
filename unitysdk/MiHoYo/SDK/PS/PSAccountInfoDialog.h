#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace MiHoYo::SDK::PS { class UserGameServerInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x38E4110)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_B074C1DCB1DD3448_OFFSET UNITYSDK_OFFSET(0x38E4160)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x38E4200)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x38E4090)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x38E40C0)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E86BF3D509D0F4E3_OFFSET UNITYSDK_OFFSET(0x38E4060)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x38E3010)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x38E4350)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountInfoDialog_TypeDefinitionIndex = 11768;

	class PSAccountInfoDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSAccountInfoDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PS::PSAccountInfoDialog**)Il2CppClass::FromTypeDefinitionIndex(PSAccountInfoDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* OnContinueToBind; // 0xB8
		::System::Action* OnSwitchHoYoAccount; // 0xC0
		::System::Boolean A9FDA7C7782E3C0C; // 0xC8
		::System::Byte _padding0[0x7];
		::System::String* E4C9219CB097ED15; // 0xD0
		::System::String* AB3D50E9B99F1D48; // 0xD8
		::MiHoYo::SDK::PS::UserGameServerInfo* B8A7EF98FFF072C3; // 0xE0
		::MiHoYo::SDK::PS::UserGameServerInfo* B0BC5E868CBA5788; // 0xE8

		::System::Void E86BF3D509D0F4E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E86BF3D509D0F4E3_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E060FD75EC8EE726_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::String* E584F98E04C16B82, ::System::String* AAA79195584BBBA9, ::System::String* B833A8D9C61223DD, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* B918010F05C22662)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFA7961FF2AC380B_OFFSET))(E584F98E04C16B82, AAA79195584BBBA9, B833A8D9C61223DD, B918010F05C22662);
		}

		static ::System::Void B074C1DCB1DD3448(::System::Boolean A4D3F13450FDBF6D)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_B074C1DCB1DD3448_OFFSET))(A4D3F13450FDBF6D);
		}
	};
}
