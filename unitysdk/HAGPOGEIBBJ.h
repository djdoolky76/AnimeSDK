#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverStyle.h"
#include "unitysdk/System/Object.h"

#define HAGPOGEIBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79140)

inline static constexpr unsigned int HAGPOGEIBBJ_TypeDefinitionIndex = 44733;

	class HAGPOGEIBBJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::FeverStyle CFNAKPADAEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGPOGEIBBJ_CTOR_OFFSET))(this);
		}

	};
