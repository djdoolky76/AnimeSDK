#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleSkillPreShow; }

#define KGIJIJGDHMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3ED910)
#define KGIJIJGDHMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3ED940)

	class KGIJIJGDHMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleSkillPreShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleSkillPreShow*))((::PBYTE)hIl2Cpp + KGIJIJGDHMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIJIJGDHMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
