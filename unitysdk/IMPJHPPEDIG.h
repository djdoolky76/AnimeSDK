#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAbility; }
namespace RPG::GameCore { class TurnInsertAbilityCondition; }
namespace RPG::GameCore { class TurnInsertAbilityConditionBase; }
namespace RPG::GameCore { class TurnInsertAbilityConditionGroup; }
namespace System { class String; }

#define IMPJHPPEDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x164D62F0)
#define IMPJHPPEDIG_FABKIHFNAHG_OFFSET UNITYSDK_OFFSET(0x164D71C0)
#define IMPJHPPEDIG_HPHIHMIOJGC_OFFSET UNITYSDK_OFFSET(0x164D72C0)
#define IMPJHPPEDIG_MEMPHCDHLGK_OFFSET UNITYSDK_OFFSET(0x164D76C0)
#define IMPJHPPEDIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D6320)

inline static constexpr unsigned int IMPJHPPEDIG_TypeDefinitionIndex = 55776;

	class IMPJHPPEDIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAbility*))((::PBYTE)hIl2Cpp + IMPJHPPEDIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPJHPPEDIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean FABKIHFNAHG(::RPG::GameCore::TurnInsertAbilityConditionBase* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityConditionBase*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IMPJHPPEDIG_FABKIHFNAHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MEMPHCDHLGK(::RPG::GameCore::TurnInsertAbilityConditionGroup* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityConditionGroup*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IMPJHPPEDIG_MEMPHCDHLGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HPHIHMIOJGC(::RPG::GameCore::TurnInsertAbilityCondition* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnInsertAbilityCondition*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IMPJHPPEDIG_HPHIHMIOJGC_OFFSET))(this, a1, a2, a3);
		}

	};
