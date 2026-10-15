#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTimeRewindTargetMotionPause; }
namespace RPG::GameCore { class TaskContext; }

#define JFCNGHMMNOC_CTOR_OFFSET UNITYSDK_OFFSET(0x166464E0)
#define JFCNGHMMNOC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16646510)

inline static constexpr unsigned int JFCNGHMMNOC_TypeDefinitionIndex = 53369;

	class JFCNGHMMNOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + JFCNGHMMNOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCNGHMMNOC_EVALUATE_OFFSET))(this);
		}

	};
