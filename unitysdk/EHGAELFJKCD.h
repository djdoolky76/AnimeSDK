#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define EHGAELFJKCD_CTOR_OFFSET UNITYSDK_OFFSET(0x18BCA5D0)
#define EHGAELFJKCD_DOONENTER_OFFSET UNITYSDK_OFFSET(0x18BCA610)
#define EHGAELFJKCD_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x18BCA690)

inline static constexpr unsigned int EHGAELFJKCD_TypeDefinitionIndex = 58737;

	class EHGAELFJKCD : public ::EDLDHDMLJDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EHGAELFJKCD_CTOR_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EHGAELFJKCD_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + EHGAELFJKCD_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
