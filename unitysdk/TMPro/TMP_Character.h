#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_CHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BD8E0)
#define TMPRO_TMP_CHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x40BD880)
#define TMPRO_TMP_CHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x40BD850)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Character_TypeDefinitionIndex = 18229;

	class TMP_Character : public ::TMPro::TMP_TextElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 A8F53A76737F9A9C, ::TMPro::TMP_FontAsset* A04B97A6BA51CC83, ::UnityEngine::TextCore::Glyph* EE5806B81CBB2541)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_1_OFFSET))(this, A8F53A76737F9A9C, A04B97A6BA51CC83, EE5806B81CBB2541);
		}

		::System::Void _ctor_2(::System::UInt32 A8F53A76737F9A9C, ::System::UInt32 BDA6A4455F220F84)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_2_OFFSET))(this, A8F53A76737F9A9C, BDA6A4455F220F84);
		}
	};
}
