#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfig; }
namespace RPG::GameCore { class LevelMinimapLayerSpriteConfigCollection; }

#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B2CB0)
#define RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B2BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMinimapLayerSpriteConfigCollection_TypeDefinitionIndex = 17221;

	class LevelMinimapLayerSpriteConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelMinimapLayerSpriteConfig*>* List; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelMinimapLayerSpriteConfigCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMINIMAPLAYERSPRITECONFIGCOLLECTION_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
