#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentSkillTargetType; }
namespace RPG::GameCore { class TaskContext; }

#define JBJFMELIHKN_CTOR_OFFSET UNITYSDK_OFFSET(0x16571350)
#define JBJFMELIHKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16571380)

inline static constexpr unsigned int JBJFMELIHKN_TypeDefinitionIndex = 54599;

	class JBJFMELIHKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + JBJFMELIHKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJFMELIHKN_EVALUATE_OFFSET))(this);
		}

	};
