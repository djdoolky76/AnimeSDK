#pragma once
#include "unitysdk/unitysdk.h"
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

#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39F7D80)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39F7E00)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E3D9249DD0E4032E_OFFSET UNITYSDK_OFFSET(0x39F81A0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x39F7CB0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E57BDB3E904D3CF5_OFFSET UNITYSDK_OFFSET(0x39F83F0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39F7D30)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x39F7F00)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x39F82E0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x39F7DD0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x393AC30)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x39F7FB0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x39AA520)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x394E270)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39F7490)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x39AA870)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaVerifyPhone_TypeDefinitionIndex = 11882;

	class OverseaVerifyPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaVerifyPhone** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaVerifyPhone**)Il2CppClass::FromTypeDefinitionIndex(OverseaVerifyPhone_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::GameObject* EA2623B74CDB1769; // 0x68
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x70
		::UnityEngine::UI::Text* BCB36982740EBBAA; // 0x78
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x80
		::UnityEngine::UI::InputField* FCEBE8606898FDD6; // 0x88
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x90
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x98
		::UnityEngine::UI::Button* A648A0754F22CBBB; // 0xA0
		::UnityEngine::UI::Text* EAAA83FFDBF16A33; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Action* OnGetCode; // 0xC0
		::System::Action_1<::System::String*>* OnVerify; // 0xC8
		::System::Boolean AE0DBF5B307E1580; // 0xD0
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xD4
		::System::Boolean E1041FCB5D68AA87; // 0xD8
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0xE0

		::System::Void E3D9249DD0E4032E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E3D9249DD0E4032E_OFFSET))(this);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__CTOR_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void E57BDB3E904D3CF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E57BDB3E904D3CF5_OFFSET))(this);
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_EB021D1A11B61DB7_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}
	};
}
