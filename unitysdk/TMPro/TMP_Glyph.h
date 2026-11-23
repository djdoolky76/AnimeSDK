#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement_Legacy.h"

#define TMPRO_TMP_GLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Glyph_TypeDefinitionIndex = 18225;

	class TMP_Glyph : public ::TMPro::TMP_TextElement_Legacy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPH__CTOR_OFFSET))(this);
		}
	};
}
