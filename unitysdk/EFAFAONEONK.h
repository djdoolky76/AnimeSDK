#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCurrentSkillUseParam; }
namespace RPG::GameCore { class TaskContext; }

#define EFAFAONEONK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A43470)
#define EFAFAONEONK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A434A0)

inline static constexpr unsigned int EFAFAONEONK_TypeDefinitionIndex = 54528;

	class EFAFAONEONK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + EFAFAONEONK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFAONEONK_EVALUATE_OFFSET))(this);
		}

	};
