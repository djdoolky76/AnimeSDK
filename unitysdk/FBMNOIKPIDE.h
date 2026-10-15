#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsAllowUseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define FBMNOIKPIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x156A8280)
#define FBMNOIKPIDE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156A82B0)

inline static constexpr unsigned int FBMNOIKPIDE_TypeDefinitionIndex = 54905;

	class FBMNOIKPIDE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + FBMNOIKPIDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMNOIKPIDE_EVALUATE_OFFSET))(this);
		}

	};
