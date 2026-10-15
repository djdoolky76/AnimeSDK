#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSelectSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define GDDMEFKNGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1598B910)
#define GDDMEFKNGBB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1598B940)

inline static constexpr unsigned int GDDMEFKNGBB_TypeDefinitionIndex = 54564;

	class GDDMEFKNGBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + GDDMEFKNGBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMEFKNGBB_EVALUATE_OFFSET))(this);
		}

	};
