#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KAGBBGHGNJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CF630)
#define KAGBBGHGNJI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2CF660)

inline static constexpr unsigned int KAGBBGHGNJI_TypeDefinitionIndex = 54597;

	class KAGBBGHGNJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + KAGBBGHGNJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAGBBGHGNJI_EVALUATE_OFFSET))(this);
		}

	};
