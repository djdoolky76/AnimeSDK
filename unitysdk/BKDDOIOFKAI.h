#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FateBattleShowArcherUI; }
namespace RPG::GameCore { class TaskContext; }

#define BKDDOIOFKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A9000)
#define BKDDOIOFKAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A9030)

inline static constexpr unsigned int BKDDOIOFKAI_TypeDefinitionIndex = 55030;

	class BKDDOIOFKAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FateBattleShowArcherUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FateBattleShowArcherUI*))((::PBYTE)hIl2Cpp + BKDDOIOFKAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDDOIOFKAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
