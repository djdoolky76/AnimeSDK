#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define AHJMOEEKDKK_CTOR_OFFSET UNITYSDK_OFFSET(0xEB84610)
#define AHJMOEEKDKK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEB84640)

inline static constexpr unsigned int AHJMOEEKDKK_TypeDefinitionIndex = 54601;

	class AHJMOEEKDKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + AHJMOEEKDKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJMOEEKDKK_EVALUATE_OFFSET))(this);
		}

	};
