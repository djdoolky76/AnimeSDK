#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_ByCompareVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define NNEHHFBCIAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA1790)
#define NNEHHFBCIAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCA17C0)

	class NNEHHFBCIAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + NNEHHFBCIAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEHHFBCIAA_EVALUATE_OFFSET))(this);
		}

	};
