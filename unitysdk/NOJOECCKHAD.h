#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace RPG::GameCore { class TaskContext; }

#define NOJOECCKHAD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB710)
#define NOJOECCKHAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCEB740)

inline static constexpr unsigned int NOJOECCKHAD_TypeDefinitionIndex = 52578;

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
