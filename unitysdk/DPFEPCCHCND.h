#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertToastType.h"

#define DPFEPCCHCND_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define DPFEPCCHCND_GET_NEXTPHASE_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define DPFEPCCHCND_GET_TOASTTYPE_OFFSET UNITYSDK_OFFSET(0x7CED80)

inline static constexpr unsigned int DPFEPCCHCND_TypeDefinitionIndex = 79815;

	struct alignas(4) DPFEPCCHCND
	{
		::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType _ToastType_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase _NextPhase_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType, ::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + DPFEPCCHCND_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType get_ToastType()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertToastType(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFEPCCHCND_GET_TOASTTYPE_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase get_NextPhase()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFEPCCHCND_GET_NEXTPHASE_OFFSET))(this);
		}

	};
