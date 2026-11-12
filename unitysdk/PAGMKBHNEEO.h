#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/System/Object.h"

#define PAGMKBHNEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB66B20)

inline static constexpr unsigned int PAGMKBHNEEO_TypeDefinitionIndex = 43214;

	class PAGMKBHNEEO : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Match3::MatchThreeGameMode HKEACDBJCOD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGMKBHNEEO_CTOR_OFFSET))(this);
		}

	};
