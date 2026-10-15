#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetNpcExists; }
namespace RPG::GameCore { class TaskContext; }

#define JNJBFLONKFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2861A0)
#define JNJBFLONKFB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2861D0)

inline static constexpr unsigned int JNJBFLONKFB_TypeDefinitionIndex = 54726;

	class JNJBFLONKFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + JNJBFLONKFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJBFLONKFB_EVALUATE_OFFSET))(this);
		}

	};
