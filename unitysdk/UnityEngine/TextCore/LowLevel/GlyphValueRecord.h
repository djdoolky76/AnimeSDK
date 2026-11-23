#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x41CCE40)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x41CCDE0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41CCEC0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x40E9E60)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x39CC090)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x4103AB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x39CC0F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x41CCF10)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x28992D0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x334DBE0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphValueRecord_TypeDefinitionIndex = 21188;

	struct alignas(4) GlyphValueRecord
	{
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Single get_yAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Single get_yPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(this);
		}

		::System::Single get_xAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::TextCore::LowLevel::GlyphValueRecord BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Void set_xPlacement(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_xPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET))(this);
		}

		::System::Void set_yPlacement(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET))(this, E937D4885DAA1AE8);
		}

		/*
		static ::UnityEngine::TextCore::LowLevel::GlyphValueRecord op_Addition(::UnityEngine::TextCore::LowLevel::GlyphValueRecord B35BBBE7E39341A2, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphValueRecord(*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/
	};
}
