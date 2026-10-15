#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define JNEONDAMJJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB27CE40)
#define JNEONDAMJJB_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB27CE80)
#define JNEONDAMJJB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB27CEF0)

inline static constexpr unsigned int JNEONDAMJJB_TypeDefinitionIndex = 57520;

	class JNEONDAMJJB : public ::EDLDHDMLJDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNEONDAMJJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNEONDAMJJB_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + JNEONDAMJJB_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
