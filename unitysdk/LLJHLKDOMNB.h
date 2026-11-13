#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ClickBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/DragBehaviour.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PressBehaviour.h"
#include "unitysdk/System/Object.h"

#define LLJHLKDOMNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63C4F0)

inline static constexpr unsigned int LLJHLKDOMNB_TypeDefinitionIndex = 44698;

	class LLJHLKDOMNB : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::DragBehaviour ADJDLIDAAKJ; // 0x10
		::RPG::Client::LittleGame::ComicDessert::PressBehaviour HNLOFJNACOO; // 0x14
		::RPG::Client::LittleGame::ComicDessert::ClickBehaviour OIHIKIEJCPO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJHLKDOMNB_CTOR_OFFSET))(this);
		}

	};
