#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_ETHEREYESOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFACDD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesOutlineConfig_TypeDefinitionIndex = 71196;

	class EtherEyesOutlineConfig : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* outlineTexture; // 0x10
		::System::Boolean occludedByDepth; // 0x18
		::System::Boolean occludedByCharacters; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 outlineThickness; // 0x1C
		::UnityEngine::Vector2 outlineTextureOffset; // 0x20
		::System::Single outlineBreathFrequency; // 0x28
		::UnityEngine::Vector2 outlineTextureScale; // 0x2C
		::UnityEngine::Color outlineColor; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOUTLINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
