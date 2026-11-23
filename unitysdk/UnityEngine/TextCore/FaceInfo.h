#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0x41CA730)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET UNITYSDK_OFFSET(0x41A9C20)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x41A9C10)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x40672F0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_FACEINDEX_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_FAMILYNAME_OFFSET UNITYSDK_OFFSET(0x3B60C90)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x4179B60)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x41A9BE0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0x2EEE5A0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x41A9BD0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0x41C4090)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_STYLENAME_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x41C4070)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x41C4080)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x40671A0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x41A9BC0)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0x41CA740)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x41C4060)
#define UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x41CA750)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET UNITYSDK_OFFSET(0x23255E0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET UNITYSDK_OFFSET(0x1F325F0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET UNITYSDK_OFFSET(0x1F32600)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET UNITYSDK_OFFSET(0x173A950)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET UNITYSDK_OFFSET(0x2064C00)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x181DF10)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET UNITYSDK_OFFSET(0x2347270)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x233F9E0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET UNITYSDK_OFFSET(0x2326C40)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET UNITYSDK_OFFSET(0x2326C50)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x2327990)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x2328CA0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET UNITYSDK_OFFSET(0x2354850)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET UNITYSDK_OFFSET(0x23279A0)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET UNITYSDK_OFFSET(0x1F7B100)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x2328C70)
#define UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1CE2540)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int FaceInfo_TypeDefinitionIndex = 21193;

	struct alignas(8) FaceInfo
	{
		::System::Int32 m_FaceIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* m_FamilyName; // 0x18
		::System::String* m_StyleName; // 0x20
		::System::Int32 m_PointSize; // 0x28
		::System::Single m_Scale; // 0x2C
		::System::Int32 m_UnitsPerEM; // 0x30
		::System::Single m_LineHeight; // 0x34
		::System::Single m_AscentLine; // 0x38
		::System::Single m_CapLine; // 0x3C
		::System::Single m_MeanLine; // 0x40
		::System::Single m_Baseline; // 0x44
		::System::Single m_DescentLine; // 0x48
		::System::Single m_SuperscriptOffset; // 0x4C
		::System::Single m_SuperscriptSize; // 0x50
		::System::Single m_SubscriptOffset; // 0x54
		::System::Single m_SubscriptSize; // 0x58
		::System::Single m_UnderlineOffset; // 0x5C
		::System::Single m_UnderlineThickness; // 0x60
		::System::Single m_StrikethroughOffset; // 0x64
		::System::Single m_StrikethroughThickness; // 0x68
		::System::Single m_TabWidth; // 0x6C

		::System::Single get_tabWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_TABWIDTH_OFFSET))(this);
		}

		::System::Void set_strikethroughOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_capLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_CAPLINE_OFFSET))(this);
		}

		::System::Void set_familyName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_FAMILYNAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_superscriptOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_meanLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_MEANLINE_OFFSET))(this);
		}

		::System::Single get_subscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Void set_strikethroughThickness(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STRIKETHROUGHTHICKNESS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_subscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUBSCRIPTSIZE_OFFSET))(this);
		}

		::System::Single get_descentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_DESCENTLINE_OFFSET))(this);
		}

		::System::Single get_baseline()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_BASELINE_OFFSET))(this);
		}

		::System::Void set_capLine(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_CAPLINE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SCALE_OFFSET))(this);
		}

		::System::Single get_ascentLine()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_ASCENTLINE_OFFSET))(this);
		}

		::System::Single get_underlineOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINEOFFSET_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SCALE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_underlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_UNDERLINETHICKNESS_OFFSET))(this);
		}

		::System::Void set_underlineOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINEOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_superscriptSize(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUPERSCRIPTSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_superscriptOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTOFFSET_OFFSET))(this);
		}

		::System::Int32 get_pointSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_POINTSIZE_OFFSET))(this);
		}

		::System::Void set_styleName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_STYLENAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_underlineThickness(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_UNDERLINETHICKNESS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_tabWidth(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_TABWIDTH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_familyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_FAMILYNAME_OFFSET))(this);
		}

		::System::Single get_superscriptSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_SUPERSCRIPTSIZE_OFFSET))(this);
		}

		::System::String* get_styleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_STYLENAME_OFFSET))(this);
		}

		::System::Void set_meanLine(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_MEANLINE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_pointSize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_POINTSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_LINEHEIGHT_OFFSET))(this);
		}

		::System::Void set_ascentLine(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_ASCENTLINE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_descentLine(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_DESCENTLINE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_subscriptSize(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_faceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_FACEINDEX_OFFSET))(this);
		}

		::System::Void set_lineHeight(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_LINEHEIGHT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_subscriptOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_SUBSCRIPTOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_strikethroughOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_GET_STRIKETHROUGHOFFSET_OFFSET))(this);
		}

		::System::Void set_baseline(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_FACEINFO_SET_BASELINE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
