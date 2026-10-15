#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int BOGJNAAODFM_TypeDefinitionIndex = 55836;

	struct alignas(8) BOGJNAAODFM
	{
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x18
		::RPG::GameCore::SkillPropertyType ACHILGIPGKL; // 0x20
		::RPG::GameCore::SkillPropertyModifyType KFAPHPGFEMK; // 0x24
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
	};
