#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_A5A7D061264AC576_OFFSET UNITYSDK_OFFSET(0x394E270)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x39C5F20)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39C5DD0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39C5D80)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39C5730)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_FDCC77C43506D720_OFFSET UNITYSDK_OFFSET(0x39C5D30)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountListConfirm_TypeDefinitionIndex = 12589;

	class OverseaAccountListConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountListConfirm** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountListConfirm**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Text* F27EBC01D665CE33; // 0x60
		::UnityEngine::UI::Text* E7EE5DB2C99506FE; // 0x68
		::UnityEngine::UI::Text* F117041AB4B8142C; // 0x70
		::UnityEngine::UI::Text* B56411EAC2126433; // 0x78
		::UnityEngine::UI::Text* AA0A1998E52F9B8C; // 0x80
		::UnityEngine::UI::Toggle* B0346D157BDE6A41; // 0x88
		::UnityEngine::UI::Toggle* BEEAE371D8A5E6CB; // 0x90
		::UnityEngine::UI::Button* F2C15E19E5303682; // 0x98
		::UnityEngine::UI::Text* F2870650190B26BE; // 0xA0
		::UnityEngine::UI::Button* BACF3CAC37936CA3; // 0xA8
		::UnityEngine::UI::Text* A128C4790A44D882; // 0xB0
		::System::Action* OnCancel; // 0xB8
		::System::Action_1<::System::Boolean>* OnConfirm; // 0xC0

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void A5A7D061264AC576()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_A5A7D061264AC576_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void FDCC77C43506D720()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_FDCC77C43506D720_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_A7B9D97A8EACDFF4_OFFSET))(this);
		}
	};
}
