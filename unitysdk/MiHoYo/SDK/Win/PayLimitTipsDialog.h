#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_A930D43740ED0E2D_OFFSET UNITYSDK_OFFSET(0x39067E0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39068F0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x3906B90)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3906940)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_E3D9249DD0E4032E_OFFSET UNITYSDK_OFFSET(0x3906A90)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39068A0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3906800)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3906390)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x3906B70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayLimitTipsDialog_TypeDefinitionIndex = 12293;

	class PayLimitTipsDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::PayLimitTipsDialog** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::PayLimitTipsDialog**)Il2CppClass::FromTypeDefinitionIndex(PayLimitTipsDialog_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* OnSubmit; // 0x60
		::System::Action* OnClose; // 0x68
		::System::Action_1<::System::Boolean>* OnToggle; // 0x70
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x78
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x80
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x88
		::UnityEngine::UI::Text* BE6C4A280382B3AB; // 0x90
		::UnityEngine::UI::Toggle* E48847784725360E; // 0x98
		::UnityEngine::UI::Text* F50E374504D14CE6; // 0xA0
		::UnityEngine::GameObject* A743417BBBE6EFF8; // 0xA8
		::UnityEngine::GameObject* E8A16A72E565D365; // 0xB0
		::System::Int32 B1BB4E571CFA3419; // 0xB8
		::System::Boolean AC83A1A35CFD6AF9; // 0xBC

		::System::Void A930D43740ED0E2D(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_A930D43740ED0E2D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::Int32 F3E779D3DD2E3559, ::System::Boolean A578BE7279338FD5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_BFA7961FF2AC380B_OFFSET))(F3E779D3DD2E3559, A578BE7279338FD5);
		}

		::System::Void E3D9249DD0E4032E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_E3D9249DD0E4032E_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_F27E545EDD4E2AF4_OFFSET))(this);
		}
	};
}
