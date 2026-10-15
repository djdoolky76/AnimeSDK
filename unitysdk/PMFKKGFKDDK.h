#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }

#define PMFKKGFKDDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC31B200)
#define PMFKKGFKDDK_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC31B250)
#define PMFKKGFKDDK_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC31B620)

	class PMFKKGFKDDK : public ::EDLDHDMLJDH
	{
	public:
		::RPG::GameCore::LevelNPCNearbyAnimConfig* IGHAHBNLIJA; // 0xA0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + PMFKKGFKDDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMFKKGFKDDK_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + PMFKKGFKDDK_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
