#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace System { class String; }

#define TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x40A1DA0)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x40A1D80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteCharacter_TypeDefinitionIndex = 18214;

	class TMP_SpriteCharacter : public ::TMPro::TMP_TextElement
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_HashCode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void set_name(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET))(this);
		}
	};
}
