#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCarryMazebuff; }
namespace RPG::GameCore { class TaskContext; }

#define AMCHAIJDCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x15576540)
#define AMCHAIJDCHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15576570)

inline static constexpr unsigned int AMCHAIJDCHA_TypeDefinitionIndex = 54517;

	class AMCHAIJDCHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + AMCHAIJDCHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCHAIJDCHA_EVALUATE_OFFSET))(this);
		}

	};
