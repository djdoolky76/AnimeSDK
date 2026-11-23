#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A23AA0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A238E0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A23930)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_E3D9249DD0E4032E_OFFSET UNITYSDK_OFFSET(0x3A23A80)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A23890)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3A1F660)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A23550)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccount_TypeDefinitionIndex = 12842;

	class ReactivateAccount : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccount** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccount**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Text* EBDAAC6A711D7E55; // 0x68
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x70
		::UnityEngine::UI::Text* BE6C4A280382B3AB; // 0x78
		::System::Action* OnSubmit; // 0x80
		::System::Action* OnClose; // 0x88

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void E3D9249DD0E4032E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_E3D9249DD0E4032E_OFFSET))(this);
		}
	};
}
