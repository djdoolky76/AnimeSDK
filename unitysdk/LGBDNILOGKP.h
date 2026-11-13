#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define LGBDNILOGKP_CTOR_OFFSET UNITYSDK_OFFSET(0x18C6B780)
#define LGBDNILOGKP_DOONENTER_OFFSET UNITYSDK_OFFSET(0x18C6B7D0)
#define LGBDNILOGKP_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x18C6B970)

inline static constexpr unsigned int LGBDNILOGKP_TypeDefinitionIndex = 58743;

	class LGBDNILOGKP : public ::EDLDHDMLJDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGBDNILOGKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LGBDNILOGKP_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + LGBDNILOGKP_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
