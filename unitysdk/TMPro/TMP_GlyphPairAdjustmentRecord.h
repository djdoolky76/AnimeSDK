#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B311069BAD7789F5/A3A9766A3D4662E9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TMP_GlyphAdjustmentRecord.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphPairAdjustmentRecord.h"

#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x354E750)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0x409F720)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x409F650)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x409F600)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphPairAdjustmentRecord_TypeDefinitionIndex = 18205;

	class TMP_GlyphPairAdjustmentRecord : public ::System::Object
	{
	public:
		::TMPro::TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x10
		::TMPro::TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x24
		::B311069BAD7789F5::A3A9766A3D4662E9 m_FeatureLookupFlags; // 0x38

		::System::Void _ctor(::TMPro::TMP_GlyphAdjustmentRecord AABAFE1D434A8135, ::TMPro::TMP_GlyphAdjustmentRecord F24D29246B76CA52)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_GlyphAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_OFFSET))(this, AABAFE1D434A8135, F24D29246B76CA52);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord ED96FE17B00737D5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD__CTOR_1_OFFSET))(this, ED96FE17B00737D5);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(this);
		}

		::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord()
		{
			return ((::TMPro::TMP_GlyphAdjustmentRecord(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(this);
		}
	};
}
