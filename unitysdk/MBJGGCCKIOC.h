#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ClickBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/DragBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PressBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/SourceStrategy.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/TargetStrategy.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"

#define MBJGGCCKIOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B821950)

inline static constexpr unsigned int MBJGGCCKIOC_TypeDefinitionIndex = 79830;

	class MBJGGCCKIOC : public ::System::Object
	{
	public:
		::System::UInt32 MIOBMOCCOHF; // 0x10
		::RPG::GameCore::IngredientKind HEJLKFKEOMA; // 0x14
		::RPG::Client::LittleGame::ComicDessert::ClickBehaviour OIHIKIEJCPO; // 0x18
		::RPG::Client::LittleGame::ComicDessert::DragBehaviour ADJDLIDAAKJ; // 0x1C
		::RPG::Client::LittleGame::ComicDessert::TargetStrategy HNOPPNPGGJJ; // 0x20
		::System::UInt32 MPEFKDIDBND; // 0x24
		::RPG::Client::LittleGame::ComicDessert::SourceStrategy MLKLAIHEHMN; // 0x28
		::System::UInt32 APAEBCHNPKO; // 0x2C
		::RPG::Client::LittleGame::ComicDessert::PressBehaviour HNLOFJNACOO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJGGCCKIOC_CTOR_OFFSET))(this);
		}

	};
