#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
class KKHNFGNFJFD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define KKHNFGNFJFD___C__DISPLAYCLASS82_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C8B10)
#define KKHNFGNFJFD___C__DISPLAYCLASS82_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET UNITYSDK_OFFSET(0xB4CC2A0)

	class KKHNFGNFJFD___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::GEDMHFPPBHN* curBarItem; // 0x10
		::KKHNFGNFJFD* __4__this; // 0x18
		::RPG::GameCore::GameEntity* curActionEntity; // 0x20
		::RPG::GameCore::GameEntity* pCaster; // 0x28
		::RPG::GameCore::SkillType skillType; // 0x30
		::System::Int32 priority; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCasterModifierPreviewAffectTargets_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET))(this, a1);
		}

	};
