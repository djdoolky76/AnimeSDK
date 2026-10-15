#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckFarmElementActive; }
namespace RPG::GameCore { class TaskContext; }

#define FHLNNGIBOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x157896F0)
#define FHLNNGIBOMA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15789720)

	class FHLNNGIBOMA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + FHLNNGIBOMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLNNGIBOMA_EVALUATE_OFFSET))(this);
		}

	};
