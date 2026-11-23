#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/TMP_GlyphValueRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.h"

#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1EAE1A0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BE110)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x2D63F10)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphAdjustmentRecord_TypeDefinitionIndex = 18266;

	struct alignas(4) TMP_GlyphAdjustmentRecord
	{
		::System::UInt32 m_GlyphIndex; // 0x10
		::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord; // 0x14

		::System::Void _ctor(::System::UInt32 BDA6A4455F220F84, ::TMPro::TMP_GlyphValueRecord E23D4108F9655A9D)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_OFFSET))(this, BDA6A4455F220F84, E23D4108F9655A9D);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord A538DBD38A251923)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD__CTOR_1_OFFSET))(this, A538DBD38A251923);
		}

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(this);
		}
	};
}
