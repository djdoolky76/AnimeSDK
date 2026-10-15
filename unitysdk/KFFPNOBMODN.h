#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackCrazyAIBehavior; }
namespace RPG::GameCore { class TaskContext; }

#define KFFPNOBMODN_CTOR_OFFSET UNITYSDK_OFFSET(0xB399C10)
#define KFFPNOBMODN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB399C40)

	class KFFPNOBMODN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackCrazyAIBehavior* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackCrazyAIBehavior*))((::PBYTE)hIl2Cpp + KFFPNOBMODN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFPNOBMODN_ONTASKBEGIN_OFFSET))(this);
		}

	};
