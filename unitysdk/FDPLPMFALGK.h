#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasStanceWeak; }
namespace RPG::GameCore { class TaskContext; }

#define FDPLPMFALGK_CTOR_OFFSET UNITYSDK_OFFSET(0x156E32A0)
#define FDPLPMFALGK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156E32D0)

inline static constexpr unsigned int FDPLPMFALGK_TypeDefinitionIndex = 54621;

	class FDPLPMFALGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + FDPLPMFALGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPLPMFALGK_EVALUATE_OFFSET))(this);
		}

	};
