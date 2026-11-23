#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Text/TextElement.h"

namespace System { class String; }

#define UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3929710)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x40A1D80)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteCharacter_TypeDefinitionIndex = 18713;

	class SpriteCharacter : public ::UnityEngine::TextCore::Text::TextElement
	{
	public:
		::System::String* m_Name; // 0x30

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER_GET_NAME_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITECHARACTER__CTOR_OFFSET))(this);
		}
	};
}
