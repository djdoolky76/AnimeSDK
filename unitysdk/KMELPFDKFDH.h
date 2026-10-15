#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareEvolveBuildGearLevel; }
namespace RPG::GameCore { class TaskContext; }

#define KMELPFDKFDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB546630)
#define KMELPFDKFDH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB546660)

	class KMELPFDKFDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + KMELPFDKFDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMELPFDKFDH_EVALUATE_OFFSET))(this);
		}

	};
