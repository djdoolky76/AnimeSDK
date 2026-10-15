#pragma once
#include "unitysdk/unitysdk.h"
class KKGGBIEDPKJ;
namespace RPG::GameCore { class TaskContext; }

#define OOMOCIDLCDM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8FD70)
#define OOMOCIDLCDM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF8FDA0)

	class OOMOCIDLCDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + OOMOCIDLCDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMOCIDLCDM_EVALUATE_OFFSET))(this);
		}

	};
