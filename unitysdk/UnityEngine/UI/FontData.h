#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A2D20FF4C6458514.h"
#include "unitysdk/UnityEngine/A4B9F3BBF3832CE4.h"
#include "unitysdk/UnityEngine/B7D5DFCD470A6488.h"
#include "unitysdk/UnityEngine/ED891C52113A48F2.h"

namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x191BCC0)
#define UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET UNITYSDK_OFFSET(0x43B2AF0)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1962C90)
#define UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x2264C00)
#define UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x18E4420)
#define UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x16B0640)
#define UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x2343E60)
#define UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x167AE20)
#define UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1AFB130)
#define UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x17D6410)
#define UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1AFB140)
#define UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x2354850)
#define UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1983150)
#define UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x17D6430)
#define UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x2343E70)
#define UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x181E4F0)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x43B2AA0)
#define UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_UI_FONTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontData_TypeDefinitionIndex = 18632;

	class FontData : public ::System::Object
	{
	public:
		::UnityEngine::Font* m_Font; // 0x10
		::System::Int32 m_FontSize; // 0x18
		::UnityEngine::A2D20FF4C6458514 m_FontStyle; // 0x1C
		::System::Boolean m_BestFit; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 m_MinSize; // 0x24
		::System::Int32 m_MaxSize; // 0x28
		::UnityEngine::B7D5DFCD470A6488 m_Alignment; // 0x2C
		::System::Boolean m_AlignByGeometry; // 0x30
		::System::Boolean m_RichText; // 0x31
		::System::Byte _padding1[0x2];
		::UnityEngine::A4B9F3BBF3832CE4 m_HorizontalOverflow; // 0x34
		::UnityEngine::ED891C52113A48F2 m_VerticalOverflow; // 0x38
		::System::Single m_LineSpacing; // 0x3C

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSIZE_OFFSET))(this);
		}

		::UnityEngine::A4B9F3BBF3832CE4 get_horizontalOverflow()
		{
			return ((::UnityEngine::A4B9F3BBF3832CE4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Int32 get_minSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MINSIZE_OFFSET))(this);
		}

		::System::Boolean get_bestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_BESTFIT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::ED891C52113A48F2 get_verticalOverflow()
		{
			return ((::UnityEngine::ED891C52113A48F2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_minSize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MINSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_fontStyle(::UnityEngine::A2D20FF4C6458514 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::A2D20FF4C6458514))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSTYLE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Boolean get_richText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_LINESPACING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_alignByGeometry(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNBYGEOMETRY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONT_OFFSET))(this);
		}

		::System::Int32 get_maxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_verticalOverflow(::UnityEngine::ED891C52113A48F2 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ED891C52113A48F2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_VERTICALOVERFLOW_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_alignment(::UnityEngine::B7D5DFCD470A6488 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B7D5DFCD470A6488))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_ALIGNMENT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_maxSize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_MAXSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::A4B9F3BBF3832CE4 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::A4B9F3BBF3832CE4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_HORIZONTALOVERFLOW_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::B7D5DFCD470A6488 get_alignment()
		{
			return ((::UnityEngine::B7D5DFCD470A6488(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_richText(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_RICHTEXT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_fontSize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_FONTSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void set_bestFit(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_SET_BESTFIT_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::UI::FontData* get_defaultFontData()
		{
			return ((::UnityEngine::UI::FontData*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_DEFAULTFONTDATA_OFFSET))();
		}

		::UnityEngine::A2D20FF4C6458514 get_fontStyle()
		{
			return ((::UnityEngine::A2D20FF4C6458514(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTDATA_GET_FONTSTYLE_OFFSET))(this);
		}
	};
}
