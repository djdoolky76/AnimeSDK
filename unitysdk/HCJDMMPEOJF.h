#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define HCJDMMPEOJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1FE70)
#define HCJDMMPEOJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C1FEA0)

	class HCJDMMPEOJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + HCJDMMPEOJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJDMMPEOJF_EVALUATE_OFFSET))(this);
		}

	};
