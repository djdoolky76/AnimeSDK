#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCurrentModifierAlive; }
namespace RPG::GameCore { class TaskContext; }

#define CPLCGJFELDH_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD9C70)
#define CPLCGJFELDH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDCD9CA0)

	class CPLCGJFELDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + CPLCGJFELDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLCGJFELDH_EVALUATE_OFFSET))(this);
		}

	};
