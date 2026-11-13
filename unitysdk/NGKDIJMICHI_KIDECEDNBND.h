#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define NGKDIJMICHI_KIDECEDNBND_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8F6D0)

inline static constexpr unsigned int NGKDIJMICHI_KIDECEDNBND_TypeDefinitionIndex = 73575;

	class NGKDIJMICHI_KIDECEDNBND : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* HKEACDBJCOD; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_KIDECEDNBND_CTOR_OFFSET))(this);
		}

	};
