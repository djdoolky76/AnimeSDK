#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define ANNILCKIKJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1589C120)
#define ANNILCKIKJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1589C150)

	class ANNILCKIKJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + ANNILCKIKJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNILCKIKJF_EVALUATE_OFFSET))(this);
		}

	};
