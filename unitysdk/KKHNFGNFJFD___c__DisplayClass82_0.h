#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
class KKHNFGNFJFD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define KKHNFGNFJFD___C__DISPLAYCLASS82_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1734EA10)
#define KKHNFGNFJFD___C__DISPLAYCLASS82_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x17351D50)

inline static constexpr unsigned int KKHNFGNFJFD___c__DisplayClass82_0_TypeDefinitionIndex = 73282;

	class KKHNFGNFJFD___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pCaster; // 0x10
		::KKHNFGNFJFD* __4__this; // 0x18
		::RPG::GameCore::GameEntity* curActionEntity; // 0x20
		::GEDMHFPPBHN* curBarItem; // 0x28
		::System::Int32 priority; // 0x30
		::RPG::GameCore::SkillType skillType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCasterModifierPreviewAffectTargets_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_0__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__0_OFFSET))(this, a1);
		}

	};
