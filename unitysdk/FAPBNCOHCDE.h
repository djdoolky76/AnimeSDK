#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAnyNpcMonsterInRange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define FAPBNCOHCDE_CPFPAPPKMKD_OFFSET UNITYSDK_OFFSET(0x1568A120)
#define FAPBNCOHCDE_CTOR_OFFSET UNITYSDK_OFFSET(0x15689CC0)
#define FAPBNCOHCDE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1568A4C0)
#define FAPBNCOHCDE_HPKIEHJHGLC_OFFSET UNITYSDK_OFFSET(0x15689E50)
#define FAPBNCOHCDE_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0x15689CF0)

	class FAPBNCOHCDE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + FAPBNCOHCDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean MPLPCDODCKA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAPBNCOHCDE_MPLPCDODCKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPKIEHJHGLC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAPBNCOHCDE_HPKIEHJHGLC_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPFPAPPKMKD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAPBNCOHCDE_CPFPAPPKMKD_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPBNCOHCDE_EVALUATE_OFFSET))(this);
		}

	};
