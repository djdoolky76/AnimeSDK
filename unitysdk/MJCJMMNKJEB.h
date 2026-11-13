#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/CustomerState.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/CustomerTrigger.h"
#include "unitysdk/System/Object.h"

#define MJCJMMNKJEB_LABNOBJEDBD_OFFSET UNITYSDK_OFFSET(0x1A3A36D0)

inline static constexpr unsigned int MJCJMMNKJEB_TypeDefinitionIndex = 79842;

	class MJCJMMNKJEB : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ComicDessert::CustomerState LABNOBJEDBD(::RPG::Client::LittleGame::ComicDessert::CustomerState a1, ::RPG::Client::LittleGame::ComicDessert::CustomerTrigger a2)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::CustomerState(*)(::RPG::Client::LittleGame::ComicDessert::CustomerState, ::RPG::Client::LittleGame::ComicDessert::CustomerTrigger))((::PBYTE)hIl2Cpp + MJCJMMNKJEB_LABNOBJEDBD_OFFSET))(a1, a2);
		}

	};
