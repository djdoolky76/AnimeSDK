#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_BINDMIHOYO_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x39C2D20)
#define MIHOYO_SDK_WIN_BINDMIHOYO_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39C28D0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_AE5F47BCB2B5D4C0_OFFSET UNITYSDK_OFFSET(0x39C2BC0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39C29C0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x39C2800)
#define MIHOYO_SDK_WIN_BINDMIHOYO_E57BDB3E904D3CF5_OFFSET UNITYSDK_OFFSET(0x39C2BC0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x39C26B0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39C2880)
#define MIHOYO_SDK_WIN_BINDMIHOYO_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x39C2B10)
#define MIHOYO_SDK_WIN_BINDMIHOYO_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x39C2BE0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x39C2920)
#define MIHOYO_SDK_WIN_BINDMIHOYO_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x39A9400)
#define MIHOYO_SDK_WIN_BINDMIHOYO_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x39A91F0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39C1F60)
#define MIHOYO_SDK_WIN_BINDMIHOYO__CTOR_OFFSET UNITYSDK_OFFSET(0x39A99D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindMiHoYo_TypeDefinitionIndex = 12662;

	class BindMiHoYo : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::BindMiHoYo** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::BindMiHoYo**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::UI::Text* B40CC60480F2FEB8; // 0x68
		::UnityEngine::UI::InputField* E3F11E78772F3477; // 0x70
		::UnityEngine::UI::InputField* A72839549E6FF925; // 0x78
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x80
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x88
		::UnityEngine::UI::Button* A5532A473D08A2FC; // 0x90
		::UnityEngine::UI::Text* B162DF194352E4B2; // 0x98
		::System::Action* OnBack; // 0xA0
		::System::Action_1<::System::String*>* OnGetCode; // 0xA8
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xB0
		::System::Boolean AE0DBF5B307E1580; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xBC
		::System::Boolean E1041FCB5D68AA87; // 0xC0

		::System::Void E57BDB3E904D3CF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_E57BDB3E904D3CF5_OFFSET))(this);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO__CTOR_OFFSET))(this);
		}

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_E72FED2CD630833D_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_EB021D1A11B61DB7_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		::System::Void AE5F47BCB2B5D4C0(::System::String* A24289F86856ED60)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_AE5F47BCB2B5D4C0_OFFSET))(this, A24289F86856ED60);
		}
	};
}
