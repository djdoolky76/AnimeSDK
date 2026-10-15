#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class TaskContext; }

#define LGIIHCDAPPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6994D0)
#define LGIIHCDAPPG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB699500)

	class LGIIHCDAPPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + LGIIHCDAPPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIIHCDAPPG_EVALUATE_OFFSET))(this);
		}

	};
