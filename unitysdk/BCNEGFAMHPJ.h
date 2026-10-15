#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetIsStanceWeak; }
namespace RPG::GameCore { class TaskContext; }

#define BCNEGFAMHPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x162E5AF0)
#define BCNEGFAMHPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162E5B20)

	class BCNEGFAMHPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + BCNEGFAMHPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNEGFAMHPJ_EVALUATE_OFFSET))(this);
		}

	};
