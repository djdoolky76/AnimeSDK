#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDeadHandler; }

#define IPPINLIEHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x16527340)
#define IPPINLIEHJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16527370)

	class IPPINLIEHJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDeadHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDeadHandler*))((::PBYTE)hIl2Cpp + IPPINLIEHJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPINLIEHJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
