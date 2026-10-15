#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/System/Object.h"

#define IPALBGGLKDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C160)

inline static constexpr unsigned int IPALBGGLKDA_TypeDefinitionIndex = 42241;

	class IPALBGGLKDA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Match3::Match3GameState ADCPPJNMGJP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALBGGLKDA_CTOR_OFFSET))(this);
		}

	};
