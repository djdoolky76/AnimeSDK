#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStoryLineID; }
namespace RPG::GameCore { class TaskContext; }

#define PMOEMACJCEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC328F40)
#define PMOEMACJCEG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC328F70)

	class PMOEMACJCEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + PMOEMACJCEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOEMACJCEG_EVALUATE_OFFSET))(this);
		}

	};
