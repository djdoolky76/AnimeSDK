#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierAffectedPreshowConfig; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define KKHNFGNFJFD___C__DISPLAYCLASS82_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C5660)
#define KKHNFGNFJFD___C__DISPLAYCLASS82_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET UNITYSDK_OFFSET(0xB4C5670)

inline static constexpr unsigned int KKHNFGNFJFD___c__DisplayClass82_1_TypeDefinitionIndex = 71306;

	template <typename T>
	class KKHNFGNFJFD___c__DisplayClass82_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::GameCore::ModifierAffectedPreshowConfig* pPreshowConfig; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* modifier; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnCasterModifierPreviewAffectTargets_b__1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKHNFGNFJFD___C__DISPLAYCLASS82_1__ONCASTERMODIFIERPREVIEWAFFECTTARGETS_B__1_OFFSET))(this, a1, a2);
		}

	};
