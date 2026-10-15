#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BOFJDFJMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0xC18E4E0)

inline static constexpr unsigned int BOFJDFJMKGA_TypeDefinitionIndex = 55554;

	class BOFJDFJMKGA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonsterWeaknessSpecialType KFEMJMKMGIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJDFJMKGA_CTOR_OFFSET))(this);
		}

	};
