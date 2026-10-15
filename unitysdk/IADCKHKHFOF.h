#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionEnterPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define IADCKHKHFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E019E0)
#define IADCKHKHFOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E01A10)

	class IADCKHKHFOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionEnterPerformance*))((::PBYTE)hIl2Cpp + IADCKHKHFOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCKHKHFOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
