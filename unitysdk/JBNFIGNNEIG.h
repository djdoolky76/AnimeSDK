#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCurrentSkillEffectIsDamaging; }
namespace RPG::GameCore { class TaskContext; }

#define JBNFIGNNEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x165761A0)
#define JBNFIGNNEIG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165761D0)

	class JBNFIGNNEIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + JBNFIGNNEIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNFIGNNEIG_EVALUATE_OFFSET))(this);
		}

	};
