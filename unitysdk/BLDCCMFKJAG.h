#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }

#define BLDCCMFKJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA682E0)
#define BLDCCMFKJAG_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBA68330)
#define BLDCCMFKJAG_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBA68700)

	class BLDCCMFKJAG : public ::EDLDHDMLJDH
	{
	public:
		::RPG::GameCore::LevelNPCNearbyEventConfig* IGHAHBNLIJA; // 0xA0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + BLDCCMFKJAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLDCCMFKJAG_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + BLDCCMFKJAG_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
