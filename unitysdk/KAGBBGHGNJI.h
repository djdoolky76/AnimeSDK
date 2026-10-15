#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KAGBBGHGNJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D6060)
#define KAGBBGHGNJI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2D6090)

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
