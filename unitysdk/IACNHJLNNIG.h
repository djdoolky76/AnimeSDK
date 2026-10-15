#pragma once
#include "unitysdk/unitysdk.h"
class BDKIHEDECCJ;
namespace RPG::GameCore { class TaskContext; }

#define IACNHJLNNIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E01270)
#define IACNHJLNNIG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E012A0)

	class IACNHJLNNIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + IACNHJLNNIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IACNHJLNNIG_EVALUATE_OFFSET))(this);
		}

	};
