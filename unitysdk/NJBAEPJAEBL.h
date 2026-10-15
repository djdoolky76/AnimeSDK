#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySimulateSpeedUp; }
namespace RPG::GameCore { class TaskContext; }

#define NJBAEPJAEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC08FA0)
#define NJBAEPJAEBL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC08FD0)

	class NJBAEPJAEBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + NJBAEPJAEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBAEPJAEBL_EVALUATE_OFFSET))(this);
		}

	};
