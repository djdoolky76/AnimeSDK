#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareStageType; }
namespace RPG::GameCore { class TaskContext; }

#define FFPFIEJKEKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1574E5C0)
#define FFPFIEJKEKB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1574E5F0)

	class FFPFIEJKEKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + FFPFIEJKEKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFIEJKEKB_EVALUATE_OFFSET))(this);
		}

	};
