#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCurrentSkillActive; }
namespace RPG::GameCore { class TaskContext; }

#define EKLDIMDGNBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15501210)
#define EKLDIMDGNBJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15501240)

inline static constexpr unsigned int EKLDIMDGNBJ_TypeDefinitionIndex = 54646;

	class EKLDIMDGNBJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + EKLDIMDGNBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLDIMDGNBJ_EVALUATE_OFFSET))(this);
		}

	};
