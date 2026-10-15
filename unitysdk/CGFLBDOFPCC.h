#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTimeRewindEntityMinRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CGFLBDOFPCC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC88360)
#define CGFLBDOFPCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC88390)

	class CGFLBDOFPCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityMinRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityMinRatio*))((::PBYTE)hIl2Cpp + CGFLBDOFPCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLBDOFPCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
