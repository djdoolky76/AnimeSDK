#pragma once
#include "unitysdk/unitysdk.h"
class GHMHPIANEIG;
namespace RPG::GameCore { class TaskContext; }

#define JFKLFCCLJNC_CTOR_OFFSET UNITYSDK_OFFSET(0x16650480)
#define JFKLFCCLJNC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x166504B0)

	class JFKLFCCLJNC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + JFKLFCCLJNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKLFCCLJNC_EVALUATE_OFFSET))(this);
		}

	};
