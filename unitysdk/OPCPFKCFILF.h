#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainOpInSkill; }
namespace RPG::GameCore { class TaskContext; }

#define OPCPFKCFILF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9DF00)
#define OPCPFKCFILF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF9DF30)

inline static constexpr unsigned int OPCPFKCFILF_TypeDefinitionIndex = 54593;

	class OPCPFKCFILF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + OPCPFKCFILF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCPFKCFILF_EVALUATE_OFFSET))(this);
		}

	};
