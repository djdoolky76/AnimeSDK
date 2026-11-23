#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_A5A7D061264AC576_OFFSET UNITYSDK_OFFSET(0x39D9330)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39D9410)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39D9490)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39D93C0)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39D8EF0)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_FDCC77C43506D720_OFFSET UNITYSDK_OFFSET(0x39D93A0)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaConfirmWithTitle_TypeDefinitionIndex = 12701;

	class OverseaConfirmWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaConfirmWithTitle** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaConfirmWithTitle**)Il2CppClass::FromTypeDefinitionIndex(OverseaConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* content; // 0x68
		::UnityEngine::UI::Button* cancelBtn; // 0x70
		::UnityEngine::UI::Button* confirmBtn; // 0x78
		::UnityEngine::UI::Text* confirmBtnText; // 0x80
		::UnityEngine::UI::Text* cancelBtnText; // 0x88
		::System::Action* OnCancel; // 0x90
		::System::Action* OnConfirm; // 0x98
		::System::String* titleText; // 0xA0
		::System::String* contentText; // 0xA8
		::System::String* confirmTitle; // 0xB0
		::System::String* cancelTitle; // 0xB8

		static ::System::Void BFA7961FF2AC380B(::System::String* B383F0530E7FBDBD, ::System::String* E0C0689B1CEBE48C, ::System::String* E0B4391AC34FC359, ::System::String* A1340C81E2E9AD9F, ::System::Int32 E7B2D56979C20620)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_BFA7961FF2AC380B_OFFSET))(B383F0530E7FBDBD, E0C0689B1CEBE48C, E0B4391AC34FC359, A1340C81E2E9AD9F, E7B2D56979C20620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE__CTOR_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void FDCC77C43506D720()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_FDCC77C43506D720_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void A5A7D061264AC576()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_A5A7D061264AC576_OFFSET))(this);
		}
	};
}
