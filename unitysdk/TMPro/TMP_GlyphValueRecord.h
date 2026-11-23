#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextCore/LowLevel/GlyphValueRecord.h"

#define TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x2D64C70)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x28992C0)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x40BE240)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x28B8240)
#define TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x40BE250)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BE1E0)
#define TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x39CBF10)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphValueRecord_TypeDefinitionIndex = 18281;

	struct alignas(4) TMP_GlyphValueRecord
	{
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Single get_xAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single B4BF6821269E26F2, ::System::Single EB401F6794BD82AD, ::System::Single E83A6B147BF7C423, ::System::Single EF099AAF6AD73639)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_OFFSET))(this, B4BF6821269E26F2, EB401F6794BD82AD, E83A6B147BF7C423, EF099AAF6AD73639);
		}

		::System::Single get_xPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(this);
		}

		::System::Single get_yAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(this);
		}

		/*
		static ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord B35BBBE7E39341A2, ::TMPro::TMP_GlyphValueRecord AE40CAA6BBFEAD2C)
		{
			return ((::TMPro::TMP_GlyphValueRecord(*)(::TMPro::TMP_GlyphValueRecord, ::TMPro::TMP_GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		::System::Single get_yPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::TextCore::LowLevel::GlyphValueRecord EB4E936554A4AFD4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD__CTOR_1_OFFSET))(this, EB4E936554A4AFD4);
		}
	};
}
