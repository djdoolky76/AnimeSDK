#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x41CCC10)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x41CCC90)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41CCCF0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2E84900)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2E79A30)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET UNITYSDK_OFFSET(0x30B1DA0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x41CCD80)
#define UNITYENGINE_TEXTCORE_GLYPHRECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x41CCD40)
#define UNITYENGINE_TEXTCORE_GLYPHRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x21F6330)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphRect_TypeDefinitionIndex = 21201;

	struct alignas(4) GlyphRect
	{
		static ::UnityEngine::TextCore::GlyphRect* StaticGet_s_ZeroGlyphRect()
		{
			return (::UnityEngine::TextCore::GlyphRect*)Il2CppClass::FromTypeDefinitionIndex(GlyphRect_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::TextCore::GlyphRect BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::GlyphRect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET))(this);
		}

		::System::Void _ctor(::System::Int32 BB8C609F76620E45, ::System::Int32 A0A0D02932F12CFD, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, F5EF7E29767E03BF, F0961C93719F7B0D);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::TextCore::GlyphRect get_zero()
		{
			return ((::UnityEngine::TextCore::GlyphRect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET))();
		}
		*/
	};
}
