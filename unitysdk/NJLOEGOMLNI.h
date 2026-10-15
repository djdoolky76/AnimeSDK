#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHipplenEnergy; }
namespace RPG::GameCore { class TaskContext; }

#define NJLOEGOMLNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1AEC0)
#define NJLOEGOMLNI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC1AEF0)

	class NJLOEGOMLNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + NJLOEGOMLNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLOEGOMLNI_EVALUATE_OFFSET))(this);
		}

	};
