#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CAJDFCLGGNG_CAJEHLHAPLK_OFFSET UNITYSDK_OFFSET(0xC47BD90)
#define CAJDFCLGGNG_CTOR_OFFSET UNITYSDK_OFFSET(0xC47B630)
#define CAJDFCLGGNG_FMIBPJNANFH_OFFSET UNITYSDK_OFFSET(0xC47BC60)
#define CAJDFCLGGNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC47B660)

inline static constexpr unsigned int CAJDFCLGGNG_TypeDefinitionIndex = 55650;

	class CAJDFCLGGNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackShield*))((::PBYTE)hIl2Cpp + CAJDFCLGGNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJDFCLGGNG_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint FMIBPJNANFH(::RPG::GameCore::ShieldModifyFormulaType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ShieldModifyFormulaType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CAJDFCLGGNG_FMIBPJNANFH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CAJEHLHAPLK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CAJDFCLGGNG_CAJEHLHAPLK_OFFSET))(this, a1, a2);
		}

	};
