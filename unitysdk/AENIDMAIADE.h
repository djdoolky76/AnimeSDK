#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStance; }
namespace RPG::GameCore { class TaskContext; }

#define AENIDMAIADE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF03640)
#define AENIDMAIADE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF03670)

inline static constexpr unsigned int AENIDMAIADE_TypeDefinitionIndex = 54574;

	class AENIDMAIADE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + AENIDMAIADE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENIDMAIADE_EVALUATE_OFFSET))(this);
		}

	};
