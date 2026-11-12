#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
#include "unitysdk/System/Object.h"

#define PMMOPDECJAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBC940)

inline static constexpr unsigned int PMMOPDECJAJ_TypeDefinitionIndex = 44738;

	class PMMOPDECJAJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::HoverKind KAPIKEEGEPA; // 0x10
		::System::UInt32 KHNINHBIKLE; // 0x14
		::System::Boolean BHEPDKPEPNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOPDECJAJ_CTOR_OFFSET))(this);
		}

	};
