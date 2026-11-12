#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDynamicSkillButtonInputSlot; }
namespace RPG::GameCore { class TaskContext; }

#define FLLJMACLEEL_CTOR_OFFSET UNITYSDK_OFFSET(0x167AECF0)
#define FLLJMACLEEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x167AED20)

inline static constexpr unsigned int FLLJMACLEEL_TypeDefinitionIndex = 56067;

	class FLLJMACLEEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + FLLJMACLEEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJMACLEEL_EVALUATE_OFFSET))(this);
		}

	};
