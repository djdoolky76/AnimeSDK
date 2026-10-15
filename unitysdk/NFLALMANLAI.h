#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InsertBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define NFLALMANLAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB93410)
#define NFLALMANLAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB93440)

inline static constexpr unsigned int NFLALMANLAI_TypeDefinitionIndex = 58177;

	class NFLALMANLAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InsertBattlePerform*))((::PBYTE)hIl2Cpp + NFLALMANLAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLALMANLAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
