#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPerformanceResult; }
namespace RPG::GameCore { class TaskContext; }

#define OJMHFDKFAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC78C0)
#define OJMHFDKFAKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEC78F0)

	class OJMHFDKFAKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPerformanceResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPerformanceResult*))((::PBYTE)hIl2Cpp + OJMHFDKFAKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMHFDKFAKN_ONTASKBEGIN_OFFSET))(this);
		}

	};
