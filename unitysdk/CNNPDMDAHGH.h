#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/BasketTier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EGCPHKDKNGP.h"

#define CNNPDMDAHGH_CAEEECDFOFG_OFFSET UNITYSDK_OFFSET(0x19152C00)
#define CNNPDMDAHGH_GALPOIMHFHC_OFFSET UNITYSDK_OFFSET(0x19152C90)
#define CNNPDMDAHGH_HMPBHEKPACI_OFFSET UNITYSDK_OFFSET(0x19152C40)
#define CNNPDMDAHGH_LGNCMHADIJK_OFFSET UNITYSDK_OFFSET(0x19152CF0)

inline static constexpr unsigned int CNNPDMDAHGH_TypeDefinitionIndex = 79865;

	class CNNPDMDAHGH : public ::System::Object
	{
	public:
		static ::System::Boolean CAEEECDFOFG(::RPG::Client::LittleGame::ComicDessert::BasketTier a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::BasketTier))((::PBYTE)hIl2Cpp + CNNPDMDAHGH_CAEEECDFOFG_OFFSET))(a1);
		}

		static ::System::Int32 HMPBHEKPACI(::RPG::Client::LittleGame::ComicDessert::BasketTier a1)
		{
			return ((::System::Int32(*)(::RPG::Client::LittleGame::ComicDessert::BasketTier))((::PBYTE)hIl2Cpp + CNNPDMDAHGH_HMPBHEKPACI_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::ComicDessert::BasketTier GALPOIMHFHC(::RPG::Client::LittleGame::ComicDessert::BasketTier a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::BasketTier(*)(::RPG::Client::LittleGame::ComicDessert::BasketTier, ::System::Int32))((::PBYTE)hIl2Cpp + CNNPDMDAHGH_GALPOIMHFHC_OFFSET))(a1, a2);
		}

		static ::System::Int32 LGNCMHADIJK(::System::Int32 a1, ::EGCPHKDKNGP a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::EGCPHKDKNGP, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CNNPDMDAHGH_LGNCMHADIJK_OFFSET))(a1, a2, a3, a4);
		}

	};
