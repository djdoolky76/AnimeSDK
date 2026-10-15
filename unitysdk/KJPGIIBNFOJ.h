#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentSkill; }
namespace RPG::GameCore { class TaskContext; }

#define KJPGIIBNFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB458AA0)
#define KJPGIIBNFOJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB458AD0)

inline static constexpr unsigned int KJPGIIBNFOJ_TypeDefinitionIndex = 54722;

	class KJPGIIBNFOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + KJPGIIBNFOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPGIIBNFOJ_EVALUATE_OFFSET))(this);
		}

	};
