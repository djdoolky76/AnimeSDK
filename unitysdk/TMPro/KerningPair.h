#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGPAIR_CCTOR_OFFSET UNITYSDK_OFFSET(0x20596D00)
#define TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET UNITYSDK_OFFSET(0x20596CF0)
#define TMPRO_KERNINGPAIR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20596CC0)
#define TMPRO_KERNINGPAIR_CTOR_2_OFFSET UNITYSDK_OFFSET(0x20596CD0)
#define TMPRO_KERNINGPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x20596CA0)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x20596C50)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x20596C30)
#define TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x20596C90)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x20596C80)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x20596C60)
#define TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x20596C40)
#define TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x20596C70)

namespace TMPro
{
	inline static constexpr unsigned int KerningPair_TypeDefinitionIndex = 45653;

	class KerningPair : public ::System::Object
	{
	public:
		::System::UInt32 m_FirstGlyph; // 0x10
		::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments; // 0x14
		::System::UInt32 m_SecondGlyph; // 0x24
		::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments; // 0x28
		::System::Single xOffset; // 0x38
		::System::Boolean m_IgnoreSpacingAdjustments; // 0x3C
		static ::TMPro::KerningPair** StaticGet_empty()
		{
			return (::TMPro::KerningPair**)UnitySDK::FromName("TMPro", "KerningPair")->GetStaticField(0x6A210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::TMPro::GlyphValueRecord_Legacy a2, ::System::UInt32 a3, ::TMPro::GlyphValueRecord_Legacy a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CCTOR_OFFSET))();
		}

		::System::UInt32 get_firstGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET))(this);
		}

		::System::Void set_firstGlyph(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET))(this, a1);
		}

		::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::UInt32 get_secondGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET))(this);
		}

		::System::Void set_secondGlyph(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET))(this, a1);
		}

		::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::Boolean get_ignoreSpacingAdjustments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET))(this);
		}

		::System::Void ConvertLegacyKerningData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET))(this);
		}

	};
}
