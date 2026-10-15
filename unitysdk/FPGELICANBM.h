#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsSubTargetOfHpSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define FPGELICANBM_CTOR_OFFSET UNITYSDK_OFFSET(0x15917F90)
#define FPGELICANBM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15917FC0)

	class FPGELICANBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + FPGELICANBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGELICANBM_EVALUATE_OFFSET))(this);
		}

	};
