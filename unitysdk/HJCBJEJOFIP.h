#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertCoinFlyTargetQuery; }

#define HJCBJEJOFIP_COGDPNNDDAJ_OFFSET UNITYSDK_OFFSET(0x16C53440)
#define HJCBJEJOFIP_CTOR_OFFSET UNITYSDK_OFFSET(0x16C53430)

inline static constexpr unsigned int HJCBJEJOFIP_TypeDefinitionIndex = 79872;

	class HJCBJEJOFIP : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinFlyTargetQuery* NNCCGCJJLIO; // 0x10
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinFlyTargetQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinFlyTargetQuery*))((::PBYTE)hIl2Cpp + HJCBJEJOFIP_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 COGDPNNDDAJ()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCBJEJOFIP_COGDPNNDDAJ_OFFSET))(this);
		}

	};
