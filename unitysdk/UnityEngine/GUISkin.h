#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GUISettings; }
namespace UnityEngine { class GUISkin_B34C43FBDA6E3EAD; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISKIN_APPLY_OFFSET UNITYSDK_OFFSET(0x4195A40)
#define UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET UNITYSDK_OFFSET(0x4195AB0)
#define UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0x4196FA0)
#define UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET UNITYSDK_OFFSET(0x4197020)
#define UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x41970B0)
#define UNITYENGINE_GUISKIN_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x4197170)
#define UNITYENGINE_GUISKIN_GET_BOX_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x4179B70)
#define UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0x4197640)
#define UNITYENGINE_GUISKIN_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x4197650)
#define UNITYENGINE_GUISKIN_GET_FONT_OFFSET UNITYSDK_OFFSET(0x3559240)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x4197760)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x4197770)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x4197780)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x4197790)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x41977A0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x41977B0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x3A60E50)
#define UNITYENGINE_GUISKIN_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x3929700)
#define UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x41977C0)
#define UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x41977D0)
#define UNITYENGINE_GUISKIN_GET_SLIDERMIXED_OFFSET UNITYSDK_OFFSET(0x41977E0)
#define UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0x3AE0840)
#define UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x3949FF0)
#define UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x3929710)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x41977F0)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x4197800)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0x4197810)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x4197820)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x4197830)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x4197840)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0x4197850)
#define UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET UNITYSDK_OFFSET(0x4197860)
#define UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x4197490)
#define UNITYENGINE_GUISKIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x4195A40)
#define UNITYENGINE_GUISKIN_SET_BOX_OFFSET UNITYSDK_OFFSET(0x4197870)
#define UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x41978F0)
#define UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0x4197970)
#define UNITYENGINE_GUISKIN_SET_FONT_OFFSET UNITYSDK_OFFSET(0x41979F0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x4197B20)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x4197BA0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x4197C20)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x4197CA0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x4197D20)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x4197DA0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0x4197E20)
#define UNITYENGINE_GUISKIN_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x4197EA0)
#define UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x4197F20)
#define UNITYENGINE_GUISKIN_SET_SLIDERMIXED_OFFSET UNITYSDK_OFFSET(0x4197FA0)
#define UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0x4198020)
#define UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0x41980A0)
#define UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0x4198120)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0x41981A0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0x4198220)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0x41982A0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x4198320)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0x41983A0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0x4198420)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0x41984A0)
#define UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET UNITYSDK_OFFSET(0x4198520)
#define UNITYENGINE_GUISKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x4197560)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISkin_TypeDefinitionIndex = 20128;

	class GUISkin : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::GUIStyle** StaticGet_ms_Error()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::GUISkin_B34C43FBDA6E3EAD** StaticGet_m_SkinChanged()
		{
			return (::UnityEngine::GUISkin_B34C43FBDA6E3EAD**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::UnityEngine::GUISkin** StaticGet_current()
		{
			return (::UnityEngine::GUISkin**)Il2CppClass::FromTypeDefinitionIndex(GUISkin_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::Font* m_Font; // 0x18
		::UnityEngine::GUIStyle* m_box; // 0x20
		::UnityEngine::GUIStyle* m_button; // 0x28
		::UnityEngine::GUIStyle* m_toggle; // 0x30
		::UnityEngine::GUIStyle* m_label; // 0x38
		::UnityEngine::GUIStyle* m_textField; // 0x40
		::UnityEngine::GUIStyle* m_textArea; // 0x48
		::UnityEngine::GUIStyle* m_window; // 0x50
		::UnityEngine::GUIStyle* m_horizontalSlider; // 0x58
		::UnityEngine::GUIStyle* m_horizontalSliderThumb; // 0x60
		::UnityEngine::GUIStyle* m_horizontalSliderThumbExtent; // 0x68
		::UnityEngine::GUIStyle* m_verticalSlider; // 0x70
		::UnityEngine::GUIStyle* m_verticalSliderThumb; // 0x78
		::UnityEngine::GUIStyle* m_verticalSliderThumbExtent; // 0x80
		::UnityEngine::GUIStyle* m_SliderMixed; // 0x88
		::UnityEngine::GUIStyle* m_horizontalScrollbar; // 0x90
		::UnityEngine::GUIStyle* m_horizontalScrollbarThumb; // 0x98
		::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton; // 0xA0
		::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton; // 0xA8
		::UnityEngine::GUIStyle* m_verticalScrollbar; // 0xB0
		::UnityEngine::GUIStyle* m_verticalScrollbarThumb; // 0xB8
		::UnityEngine::GUIStyle* m_verticalScrollbarUpButton; // 0xC0
		::UnityEngine::GUIStyle* m_verticalScrollbarDownButton; // 0xC8
		::UnityEngine::GUIStyle* m_ScrollView; // 0xD0
		::Il2CppArray<::UnityEngine::GUIStyle*>* m_CustomStyles; // 0xD8
		::UnityEngine::GUISettings* m_Settings; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GUIStyle*>* m_Styles; // 0xE8

		::UnityEngine::GUIStyle* get_toggle()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET))(this);
		}

		::System::Void set_button(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_font(::UnityEngine::Font* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_FONT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbar()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_window(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::GUIStyle* get_error()
		{
			return ((::UnityEngine::GUIStyle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_ERROR_OFFSET))();
		}

		::UnityEngine::GUIStyle* get_window()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(this);
		}

		::UnityEngine::GUISettings* get_settings()
		{
			return ((::UnityEngine::GUISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_horizontalSliderThumb(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_APPLY_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_textArea()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* FindStyle(::System::String* F89A4C1B7A38A7A5)
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET))(this, F89A4C1B7A38A7A5);
		}

		::System::Void set_verticalScrollbar(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::UnityEngine::GUIStyle*>* get_customStyles()
		{
			return ((::Il2CppArray<::UnityEngine::GUIStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET))(this);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_FONT_OFFSET))(this);
		}

		::System::Void set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* GetStyle(::System::String* F89A4C1B7A38A7A5)
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETSTYLE_OFFSET))(this, F89A4C1B7A38A7A5);
		}

		::System::Void set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_horizontalSlider()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_verticalScrollbarThumb(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BuildStyleCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN__CTOR_OFFSET))(this);
		}

		::System::Void set_customStyles(::Il2CppArray<::UnityEngine::GUIStyle*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIStyle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_sliderMixed()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SLIDERMIXED_OFFSET))(this);
		}

		::System::Void set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_textField()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET))(this);
		}

		::System::Void set_label(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_LABEL_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumbExtent()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(this);
		}

		::System::Void set_scrollView(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET))(this);
		}

		::System::Void set_box(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BOX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_scrollView()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbar()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET))(this);
		}

		::System::Void set_horizontalScrollbar(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_textArea(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_verticalSlider()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET))(this);
		}

		::System::Void set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_label()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_verticalSlider(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_sliderMixed(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_SLIDERMIXED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarUpButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumbExtent()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarThumb()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET))(this);
		}

		::System::Void set_horizontalSlider(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarDownButton()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_box()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BOX_OFFSET))(this);
		}

		::UnityEngine::GUIStyle* get_button()
		{
			return ((::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET))(this);
		}

		::System::Void set_toggle(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_textField(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void CleanupRoots()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET))();
		}

		::System::Void set_verticalSliderThumb(::UnityEngine::GUIStyle* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_ONENABLE_OFFSET))(this);
		}
	};
}
