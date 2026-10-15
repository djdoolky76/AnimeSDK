#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGroupState; }
namespace RPG::GameCore { class TaskContext; }

#define CPLFIMCFJDL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD9D10)
#define CPLFIMCFJDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDCD9D40)

	class CPLFIMCFJDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + CPLFIMCFJDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLFIMCFJDL_EVALUATE_OFFSET))(this);
		}

	};
