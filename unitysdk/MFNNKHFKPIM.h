#pragma once
#include "unitysdk/unitysdk.h"
class OOOHHEMKMFJ;
namespace RPG::GameCore { class TaskContext; }

#define MFNNKHFKPIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB90D5F0)
#define MFNNKHFKPIM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB90D620)

	class MFNNKHFKPIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + MFNNKHFKPIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNNKHFKPIM_EVALUATE_OFFSET))(this);
		}

	};
