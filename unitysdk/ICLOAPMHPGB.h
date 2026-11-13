#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IngredientType.h"
#include "unitysdk/System/Object.h"

#define ICLOAPMHPGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D957340)

inline static constexpr unsigned int ICLOAPMHPGB_TypeDefinitionIndex = 44745;

	class ICLOAPMHPGB : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::IngredientType GMPGDEINODK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLOAPMHPGB_CTOR_OFFSET))(this);
		}

	};
