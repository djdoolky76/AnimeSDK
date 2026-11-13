#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"

#define OHLKPMNELAE_JIDDKEFMPMH_OFFSET UNITYSDK_OFFSET(0x1E0741E0)
#define OHLKPMNELAE_PAABFBELEAO_OFFSET UNITYSDK_OFFSET(0x1E074220)

inline static constexpr unsigned int OHLKPMNELAE_TypeDefinitionIndex = 44689;

	class OHLKPMNELAE : public ::System::Object
	{
	public:
		static ::System::Boolean JIDDKEFMPMH(::RPG::Client::LittleGame::ComicDessert::AnchorType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + OHLKPMNELAE_JIDDKEFMPMH_OFFSET))(a1);
		}

		static ::System::Boolean PAABFBELEAO(::RPG::GameCore::IngredientKind a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IngredientKind, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + OHLKPMNELAE_PAABFBELEAO_OFFSET))(a1, a2);
		}

	};
