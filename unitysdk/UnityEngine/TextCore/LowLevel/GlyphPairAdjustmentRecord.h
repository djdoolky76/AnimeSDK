#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC0F03344772DE8E/A3A9766A3D4662E9.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x41CCAB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x41CCA30)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41CCB70)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0x27C87C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x41CCBE0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x41CCBF0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphPairAdjustmentRecord_TypeDefinitionIndex = 21190;

	struct alignas(4) GlyphPairAdjustmentRecord
	{
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x24
		::AC0F03344772DE8E::A3A9766A3D4662E9 m_FeatureLookupFlags; // 0x38

		::AC0F03344772DE8E::A3A9766A3D4662E9 get_featureLookupFlags()
		{
			return ((::AC0F03344772DE8E::A3A9766A3D4662E9(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET))(this);
		}

		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord()
		{
			return ((::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(this);
		}
	};
}
