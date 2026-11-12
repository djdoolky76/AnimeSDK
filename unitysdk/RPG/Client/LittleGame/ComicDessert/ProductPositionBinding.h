#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
namespace UnityEngine { class GameObject; }

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ProductPositionBinding_TypeDefinitionIndex = 80093;

	struct alignas(8) ProductPositionBinding
	{
		::System::UInt32 PositionID; // 0x10
		::RPG::GameCore::IngredientKind Ingredient; // 0x14
		::System::UInt32 OwnerDishID; // 0x18
		::System::Int32 RecipeStep; // 0x1C
		::UnityEngine::GameObject* Target; // 0x20
	};
}
