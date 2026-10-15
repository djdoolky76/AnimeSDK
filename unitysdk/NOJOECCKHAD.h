#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace RPG::GameCore { class TaskContext; }

#define NOJOECCKHAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF28F0)
#define NOJOECCKHAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCF2920)

	class NOJOECCKHAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + NOJOECCKHAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJOECCKHAD_EVALUATE_OFFSET))(this);
		}

	};
