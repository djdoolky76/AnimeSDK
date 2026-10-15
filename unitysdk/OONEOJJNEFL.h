#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPreUseSkillLevelGraphOPApplyTiming; }
namespace RPG::GameCore { class TaskContext; }

#define OONEOJJNEFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF90110)
#define OONEOJJNEFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF90140)

	class OONEOJJNEFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPreUseSkillLevelGraphOPApplyTiming*))((::PBYTE)hIl2Cpp + OONEOJJNEFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONEOJJNEFL_ONTASKBEGIN_OFFSET))(this);
		}

	};
