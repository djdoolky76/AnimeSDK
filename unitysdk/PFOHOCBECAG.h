#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRestartGatheredRegion; }
namespace RPG::GameCore { class TaskContext; }

#define PFOHOCBECAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC218C50)
#define PFOHOCBECAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC218C80)

	class PFOHOCBECAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + PFOHOCBECAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOHOCBECAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
