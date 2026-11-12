#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define HFCEOLMMNKJ___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16BB3C50)
#define HFCEOLMMNKJ___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0x16BB4680)

inline static constexpr unsigned int HFCEOLMMNKJ___c__DisplayClass35_0_TypeDefinitionIndex = 55612;

	class HFCEOLMMNKJ___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* removeInstance; // 0x10
		::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* DependencyRemoveInstanceList; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Void _RemoveDependencyModifiers_b__0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + HFCEOLMMNKJ___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET))(this, a1);
		}

	};
