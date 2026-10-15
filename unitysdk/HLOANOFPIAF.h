#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAttackSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define HLOANOFPIAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D736A0)
#define HLOANOFPIAF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D736D0)

	class HLOANOFPIAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + HLOANOFPIAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOANOFPIAF_EVALUATE_OFFSET))(this);
		}

	};
