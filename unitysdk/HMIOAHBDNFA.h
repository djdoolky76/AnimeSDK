#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtRemoveStageAbilityByName; }
namespace RPG::GameCore { class TaskContext; }

#define HMIOAHBDNFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D83290)
#define HMIOAHBDNFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D833D0)
#define HMIOAHBDNFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D832C0)

	class HMIOAHBDNFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtRemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtRemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + HMIOAHBDNFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIOAHBDNFA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIOAHBDNFA_DISPOSE_OFFSET))(this);
		}

	};
