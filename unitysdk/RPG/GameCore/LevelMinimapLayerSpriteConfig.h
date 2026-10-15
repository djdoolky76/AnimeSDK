#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D785160)
#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D784FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapLayerSpriteConfig_TypeDefinitionIndex = 17220;

	class LevelMinimapLayerSpriteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FSVName; // 0x10
		::System::Int16 FSVValue; // 0x18
		::System::Byte _padding0[0x6];
		::System::String* SpritePath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelMinimapLayerSpriteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelMinimapLayerSpriteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
