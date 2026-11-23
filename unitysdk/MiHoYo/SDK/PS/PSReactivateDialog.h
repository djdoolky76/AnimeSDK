#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"

namespace System { class Action; }

#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3906150)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_B074C1DCB1DD3448_OFFSET UNITYSDK_OFFSET(0x39061A0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3906240)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x38E4090)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3906100)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E86BF3D509D0F4E3_OFFSET UNITYSDK_OFFSET(0x38E4060)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3905C90)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x38E4350)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSReactivateDialog_TypeDefinitionIndex = 12288;

	class PSReactivateDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSReactivateDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PS::PSReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* OnReactivateAccount; // 0xB8
		::System::Action* OnBack; // 0xC0
		::System::Boolean A9FDA7C7782E3C0C; // 0xC8

		static ::System::Void B074C1DCB1DD3448(::System::Boolean A4D3F13450FDBF6D)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_B074C1DCB1DD3448_OFFSET))(A4D3F13450FDBF6D);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void E86BF3D509D0F4E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E86BF3D509D0F4E3_OFFSET))(this);
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_E060FD75EC8EE726_OFFSET))(this);
		}
	};
}
