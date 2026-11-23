#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x422CB50)
#define UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0x21A2B90)
#define UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SpriteState_TypeDefinitionIndex = 18519;

	struct alignas(8) SpriteState
	{
		::UnityEngine::Sprite* m_HighlightedSprite; // 0x10
		::UnityEngine::Sprite* m_PressedSprite; // 0x18
		::UnityEngine::Sprite* m_SelectedSprite; // 0x20
		::UnityEngine::Sprite* m_DisabledSprite; // 0x28

		::UnityEngine::Sprite* get_highlightedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_pressedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_disabledSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::UI::SpriteState BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::UnityEngine::Sprite* get_selectedSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET))(this);
		}
	};
}
