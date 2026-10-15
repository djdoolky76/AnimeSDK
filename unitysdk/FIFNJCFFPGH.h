#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainsRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define FIFNJCFFPGH_CTOR_OFFSET UNITYSDK_OFFSET(0x157A5810)
#define FIFNJCFFPGH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157A5840)

	class FIFNJCFFPGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + FIFNJCFFPGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFNJCFFPGH_EVALUATE_OFFSET))(this);
		}

	};
