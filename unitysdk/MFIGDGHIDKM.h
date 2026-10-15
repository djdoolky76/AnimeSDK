#pragma once
#include "unitysdk/unitysdk.h"
class IANEMJNCHDN;
namespace RPG::GameCore { class TaskContext; }

#define MFIGDGHIDKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF0F0)
#define MFIGDGHIDKM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8FF120)

	class MFIGDGHIDKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + MFIGDGHIDKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIGDGHIDKM_EVALUATE_OFFSET))(this);
		}

	};
