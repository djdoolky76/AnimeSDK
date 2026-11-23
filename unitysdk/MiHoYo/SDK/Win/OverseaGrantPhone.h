#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/A1BD91685A90EEA6.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A63AE0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A63220)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A633C0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E3D9249DD0E4032E_OFFSET UNITYSDK_OFFSET(0x3A63890)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x3A63150)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A631D0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x3A634C0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x3A639D0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x3A63390)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F0D84DD6B60B233F_OFFSET UNITYSDK_OFFSET(0x3A63270)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A63570)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x3A39F70)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FCEAC5135771A493_OFFSET UNITYSDK_OFFSET(0x391EC80)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A62960)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A3A7B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantPhone_TypeDefinitionIndex = 13039;

	class OverseaGrantPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGrantPhone** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaGrantPhone**)Il2CppClass::FromTypeDefinitionIndex(OverseaGrantPhone_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::GameObject* dialog; // 0x60
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x68
		::UnityEngine::UI::Button* A0C96F47DCDE8F74; // 0x70
		::UnityEngine::UI::Text* BCB36982740EBBAA; // 0x78
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x80
		::UnityEngine::UI::InputField* FCEBE8606898FDD6; // 0x88
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x90
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x98
		::UnityEngine::UI::Button* A648A0754F22CBBB; // 0xA0
		::UnityEngine::UI::Text* EAAA83FFDBF16A33; // 0xA8
		::UnityEngine::UI::Button* E23B0ED638485720; // 0xB0
		::UnityEngine::UI::Text* E9E0E3A5F7EC0FA6; // 0xB8
		::System::Action* OnBack; // 0xC0
		::System::Action_1<::BED79290917896D4::A1BD91685A90EEA6>* OnGetCode; // 0xC8
		::System::Action_1<::System::String*>* OnSubmit; // 0xD0
		::System::Action* OnOtherButton; // 0xD8
		::System::Boolean AE0DBF5B307E1580; // 0xE0
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xE4
		::System::Boolean E1041FCB5D68AA87; // 0xE8
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0xF0

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Void FCEAC5135771A493()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FCEAC5135771A493_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__CTOR_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_EB021D1A11B61DB7_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E3D9249DD0E4032E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E3D9249DD0E4032E_OFFSET))(this);
		}

		::System::Void F0D84DD6B60B233F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F0D84DD6B60B233F_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E9EE22D33973EDE4_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
