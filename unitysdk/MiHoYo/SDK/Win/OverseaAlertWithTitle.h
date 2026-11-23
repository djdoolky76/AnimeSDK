#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3B09890)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3B098E0)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3B09840)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3B09510)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_FDCC77C43506D720_OFFSET UNITYSDK_OFFSET(0x3B097E0)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAlertWithTitle_TypeDefinitionIndex = 12243;

	class OverseaAlertWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAlertWithTitle** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaAlertWithTitle**)Il2CppClass::FromTypeDefinitionIndex(OverseaAlertWithTitle_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaAlertWithTitle_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::UI::Text* F27EBC01D665CE33; // 0x60
		::UnityEngine::UI::Text* EE0CF1819B5E48CC; // 0x68
		::UnityEngine::UI::Button* A1E7346A6F0415D0; // 0x70
		::UnityEngine::UI::Text* F22BD190B605279F; // 0x78
		::System::Action* OnConfirm; // 0x80
		::System::String* titleText; // 0x88
		::System::String* contentText; // 0x90
		::System::String* confirmTitle; // 0x98
		::System::String* cancelTitle; // 0xA0

		static ::System::Void BFA7961FF2AC380B(::System::String* B383F0530E7FBDBD, ::System::String* E0C0689B1CEBE48C, ::System::String* E0B4391AC34FC359, ::System::Int32 E7B2D56979C20620)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_BFA7961FF2AC380B_OFFSET))(B383F0530E7FBDBD, E0C0689B1CEBE48C, E0B4391AC34FC359, E7B2D56979C20620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDCC77C43506D720()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_FDCC77C43506D720_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
