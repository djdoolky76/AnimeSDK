#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define NGKDIJMICHI_KIDECEDNBND_CTOR_OFFSET UNITYSDK_OFFSET(0xBBABC10)

	class NGKDIJMICHI_KIDECEDNBND : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::TurnBasedGameMode* HKEACDBJCOD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_KIDECEDNBND_CTOR_OFFSET))(this);
		}

	};
