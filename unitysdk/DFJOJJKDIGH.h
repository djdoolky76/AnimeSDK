#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define DFJOJJKDIGH_CTOR_OFFSET UNITYSDK_OFFSET(0xE825E00)

inline static constexpr unsigned int DFJOJJKDIGH_TypeDefinitionIndex = 80597;

	class DFJOJJKDIGH : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x10
		::System::Void _ctor(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + DFJOJJKDIGH_CTOR_OFFSET))(this, a1);
		}

	};
