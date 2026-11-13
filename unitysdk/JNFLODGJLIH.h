#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IngredientType.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"

#define JNFLODGJLIH_EFJNHEPHDJM_OFFSET UNITYSDK_OFFSET(0x1A0C6730)

inline static constexpr unsigned int JNFLODGJLIH_TypeDefinitionIndex = 79848;

	class JNFLODGJLIH : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ComicDessert::IngredientType EFJNHEPHDJM(::RPG::GameCore::IngredientKind a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::IngredientType(*)(::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + JNFLODGJLIH_EFJNHEPHDJM_OFFSET))(a1);
		}

	};
