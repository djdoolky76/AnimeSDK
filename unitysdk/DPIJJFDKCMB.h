#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveLockTargetInCamera; }
namespace RPG::GameCore { class TaskContext; }

#define DPIJJFDKCMB_CTOR_OFFSET UNITYSDK_OFFSET(0x12640B20)
#define DPIJJFDKCMB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12640B50)

inline static constexpr unsigned int DPIJJFDKCMB_TypeDefinitionIndex = 54627;

	class DPIJJFDKCMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + DPIJJFDKCMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIJJFDKCMB_EVALUATE_OFFSET))(this);
		}

	};
