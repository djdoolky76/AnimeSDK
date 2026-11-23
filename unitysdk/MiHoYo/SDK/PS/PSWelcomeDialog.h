#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PS/PSWelcomeDialog_E457B05ACB1F9BA3.h"

namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A3AE50)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_AD38EA5F748941CF_OFFSET UNITYSDK_OFFSET(0x3A3ADF0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_B849FB7530D11030_OFFSET UNITYSDK_OFFSET(0x3A3B0E0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_B874B290CD1D8EFD_OFFSET UNITYSDK_OFFSET(0x3A3AED0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_BD542AB78B294683_OFFSET UNITYSDK_OFFSET(0x393DE90)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3A3AEA0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A3B3C0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_E060FD75EC8EE726_OFFSET UNITYSDK_OFFSET(0x3A3ADC0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A3AE00)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_E86BF3D509D0F4E3_OFFSET UNITYSDK_OFFSET(0x3A3AD80)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A3A7C0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x3A3B510)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog_TypeDefinitionIndex = 12930;

	class PSWelcomeDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSWelcomeDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PS::PSWelcomeDialog**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Text* A0830E09F3D64900; // 0xB8
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0xC0
		::UnityEngine::UI::Text* EBC8F4C78BA5E9A2; // 0xC8
		::UnityEngine::UI::Text* A73B794C92041E31; // 0xD0
		::UnityEngine::GameObject* F96E5292E82C9EEA; // 0xD8
		::UnityEngine::GameObject* A1AA1F5832A752F7; // 0xE0
		::System::Action* OnBindExisitingAccount; // 0xE8
		::System::Action* OnCreateAndBindNewAccount; // 0xF0
		::System::Action* OnCancelBinding; // 0xF8
		::MiHoYo::SDK::PS::PSWelcomeDialog_E457B05ACB1F9BA3 B0FC2FC54CE95F0C; // 0x100

		::System::Void BD542AB78B294683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_BD542AB78B294683_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void B849FB7530D11030()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_B849FB7530D11030_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B874B290CD1D8EFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_B874B290CD1D8EFD_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void E060FD75EC8EE726()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_E060FD75EC8EE726_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E86BF3D509D0F4E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_E86BF3D509D0F4E3_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AD38EA5F748941CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG_AD38EA5F748941CF_OFFSET))(this);
		}
	};
}
