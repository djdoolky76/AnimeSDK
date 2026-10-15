#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySkillPointActivated; }
namespace RPG::GameCore { class TaskContext; }

#define KKCGLJNIANG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B5D00)
#define KKCGLJNIANG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4B5D30)

inline static constexpr unsigned int KKCGLJNIANG_TypeDefinitionIndex = 54714;

	class KKCGLJNIANG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + KKCGLJNIANG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCGLJNIANG_EVALUATE_OFFSET))(this);
		}

	};
