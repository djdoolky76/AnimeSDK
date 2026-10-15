#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterIdleShowShapeConfig; }
namespace RPG::GameCore { class ColliderConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399C80)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterIdleShowShapeConfig_TypeDefinitionIndex = 17437;

	class AdventureCharacterIdleShowShapeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterCollisionType ShapeType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ColliderConfig* ShapeConfig; // 0x18
		::RPG::MVector3 ShapeOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterIdleShowShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterIdleShowShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWSHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
