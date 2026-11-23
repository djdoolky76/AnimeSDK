#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKER_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3B03FA0)
#define MIHOYO_SDK_WIN_DATEPICKER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3B03C50)
#define MIHOYO_SDK_WIN_DATEPICKER_B44D2FC407BCF433_OFFSET UNITYSDK_OFFSET(0x3B03CD0)
#define MIHOYO_SDK_WIN_DATEPICKER_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3B03D20)
#define MIHOYO_SDK_WIN_DATEPICKER_E1E7151802669EC6_1_OFFSET UNITYSDK_OFFSET(0x3B038C0)
#define MIHOYO_SDK_WIN_DATEPICKER_E1E7151802669EC6_OFFSET UNITYSDK_OFFSET(0x3B03970)
#define MIHOYO_SDK_WIN_DATEPICKER_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3B03BB0)
#define MIHOYO_SDK_WIN_DATEPICKER_EF1DD00D58614B5E_OFFSET UNITYSDK_OFFSET(0x3B03F20)
#define MIHOYO_SDK_WIN_DATEPICKER_FAA575311F2D781F_OFFSET UNITYSDK_OFFSET(0x3B03C00)
#define MIHOYO_SDK_WIN_DATEPICKER_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x3B03850)
#define MIHOYO_SDK_WIN_DATEPICKER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3B02FC0)
#define MIHOYO_SDK_WIN_DATEPICKER_FDCC77C43506D720_OFFSET UNITYSDK_OFFSET(0x3B03A30)
#define MIHOYO_SDK_WIN_DATEPICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker_TypeDefinitionIndex = 12250;

	class DatePicker : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::DatePicker** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::DatePicker**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_E368C73B8B30E25D()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* hint; // 0x68
		::UnityEngine::UI::Text* monthPickerText; // 0x70
		::UnityEngine::UI::Text* yearPickerText; // 0x78
		::UnityEngine::UI::Dropdown* monthPicker; // 0x80
		::UnityEngine::UI::InputField* yearPicker; // 0x88
		::UnityEngine::GameObject* AFF07D0383A85210; // 0x90
		::UnityEngine::GameObject* BF6387EDCEE5BBF0; // 0x98
		::UnityEngine::UI::Text* monthPickerPlaceHolderText; // 0xA0
		::UnityEngine::UI::Text* yearPickerInputText; // 0xA8
		::UnityEngine::UI::Text* yearPickerPlaceHolderText; // 0xB0
		::UnityEngine::UI::Button* backBtn; // 0xB8
		::UnityEngine::UI::Button* confirmBtn; // 0xC0
		::UnityEngine::UI::Text* confirmBtnText; // 0xC8
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Int64>* OnConfirm; // 0xD0
		::System::Action* OnBack; // 0xD8

		::System::Void EF1DD00D58614B5E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_EF1DD00D58614B5E_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER__CTOR_OFFSET))(this);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void FDCC77C43506D720()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_FDCC77C43506D720_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FAA575311F2D781F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_FAA575311F2D781F_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::System::Int32 E7B2D56979C20620)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_BFA7961FF2AC380B_OFFSET))(E7B2D56979C20620);
		}

		::System::Void E1E7151802669EC6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_E1E7151802669EC6_OFFSET))(this);
		}

		::System::Void B44D2FC407BCF433()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_B44D2FC407BCF433_OFFSET))(this);
		}

		::System::Void E1E7151802669EC6_1(::System::String* B9AEC57275825552)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_E1E7151802669EC6_1_OFFSET))(this, B9AEC57275825552);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
