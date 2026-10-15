#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareLastKillSkill; }
namespace RPG::GameCore { class TaskContext; }

#define KIFAHHALIJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB41D400)
#define KIFAHHALIJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB41D430)

	class KIFAHHALIJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + KIFAHHALIJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFAHHALIJE_EVALUATE_OFFSET))(this);
		}

	};
