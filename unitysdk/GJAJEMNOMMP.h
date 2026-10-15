#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::Client { class MonoEffectPerspectiveWallControl; }
namespace RPG::GameCore { class GameEntity; }

#define GJAJEMNOMMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A55740)
#define GJAJEMNOMMP_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15A557D0)
#define GJAJEMNOMMP_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15A55860)

	class GJAJEMNOMMP : public ::EDLDHDMLJDH
	{
	public:
		::RPG::GameCore::GameEntity* OGGMMGDJNBF; // 0xA0
		::RPG::Client::MonoEffectPerspectiveWallControl* CPIIOIPAAKK; // 0xA8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MonoEffectPerspectiveWallControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffectPerspectiveWallControl*))((::PBYTE)hIl2Cpp + GJAJEMNOMMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJAJEMNOMMP_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + GJAJEMNOMMP_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
