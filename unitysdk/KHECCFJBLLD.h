#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderBubbleServeAreaQuery; }

#define KHECCFJBLLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC96470)
#define KHECCFJBLLD_NNMAKLEDAIP_OFFSET UNITYSDK_OFFSET(0xBC96480)

inline static constexpr unsigned int KHECCFJBLLD_TypeDefinitionIndex = 79923;

	class KHECCFJBLLD : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery* BJGGFKFAJMA; // 0x10
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleServeAreaQuery*))((::PBYTE)hIl2Cpp + KHECCFJBLLD_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 NNMAKLEDAIP(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KHECCFJBLLD_NNMAKLEDAIP_OFFSET))(this, a1);
		}

	};
