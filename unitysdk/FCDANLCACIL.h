#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/BasketTier.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EGCPHKDKNGP.h"

#define FCDANLCACIL_ALEMMPEEDEJ_OFFSET UNITYSDK_OFFSET(0x165CC030)
#define FCDANLCACIL_BAGMAIJOOIM_OFFSET UNITYSDK_OFFSET(0x165CBFD0)
#define FCDANLCACIL_IHOLEGDCFNO_OFFSET UNITYSDK_OFFSET(0x165CBEA0)
#define FCDANLCACIL_KNBHNPJDFHP_OFFSET UNITYSDK_OFFSET(0x165CBF10)
#define FCDANLCACIL_MIKHPDIALMA_OFFSET UNITYSDK_OFFSET(0x165CC080)
#define FCDANLCACIL_PEMMNHMMMAE_OFFSET UNITYSDK_OFFSET(0x165CBF80)

inline static constexpr unsigned int FCDANLCACIL_TypeDefinitionIndex = 79806;

	class FCDANLCACIL : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ComicDessert::BasketTier IHOLEGDCFNO(::System::Int32 a1, ::EGCPHKDKNGP a2)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::BasketTier(*)(::System::Int32, ::EGCPHKDKNGP))((::PBYTE)hIl2Cpp + FCDANLCACIL_IHOLEGDCFNO_OFFSET))(a1, a2);
		}

		static ::System::Int32 KNBHNPJDFHP(::RPG::Client::LittleGame::ComicDessert::BasketTier a1, ::EGCPHKDKNGP a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::LittleGame::ComicDessert::BasketTier, ::EGCPHKDKNGP, ::System::Int32))((::PBYTE)hIl2Cpp + FCDANLCACIL_KNBHNPJDFHP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PEMMNHMMMAE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCDANLCACIL_PEMMNHMMMAE_OFFSET))(a1, a2);
		}

		static ::System::Int32 BAGMAIJOOIM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCDANLCACIL_BAGMAIJOOIM_OFFSET))(a1, a2);
		}

		static ::System::Boolean ALEMMPEEDEJ(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + FCDANLCACIL_ALEMMPEEDEJ_OFFSET))(a1);
		}

		static ::System::Int32 MIKHPDIALMA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCDANLCACIL_MIKHPDIALMA_OFFSET))(a1, a2);
		}

	};
