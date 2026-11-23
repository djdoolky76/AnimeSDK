#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"

#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x2461640)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1F5F370)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x16B0640)
#define TMPRO_KERNINGPAIR__CCTOR_OFFSET UNITYSDK_OFFSET(0x40BB680)
#define TMPRO_KERNINGPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BB760)
#define TMPRO_KERNINGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x40BB700)

namespace TMPro
{
	inline static constexpr unsigned int KerningPair_TypeDefinitionIndex = 18262;

	class KerningPair : public ::System::Object
	{
	public:
		static ::TMPro::KerningPair** StaticGet_empty()
		{
			return (::TMPro::KerningPair**)Il2CppClass::FromTypeDefinitionIndex(KerningPair_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::UInt32 m_FirstGlyph; // 0x10
		::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments; // 0x14
		::System::UInt32 m_SecondGlyph; // 0x24
		::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments; // 0x28
		::System::Single xOffset; // 0x38
		::System::Boolean m_IgnoreSpacingAdjustments; // 0x3C

		::System::Void _ctor(::System::UInt32 BDDA31DE6DCC6942, ::TMPro::GlyphValueRecord_Legacy B068F3B78C6F403B, ::System::UInt32 AB8B56EE5CF24B49, ::TMPro::GlyphValueRecord_Legacy B88AB4C7871DF33D)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_OFFSET))(this, BDDA31DE6DCC6942, B068F3B78C6F403B, AB8B56EE5CF24B49, B88AB4C7871DF33D);
		}

		::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_1_OFFSET))(this);
		}

		::System::UInt32 get_firstGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET))(this);
		}

		::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::UInt32 get_secondGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET))(this);
		}
	};
}
