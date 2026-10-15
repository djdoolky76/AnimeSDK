#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackCrazyAIBehavior; }
namespace RPG::GameCore { class TaskContext; }

#define KFFPNOBMODN_CTOR_OFFSET UNITYSDK_OFFSET(0xB392AD0)
#define KFFPNOBMODN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB392B00)

inline static constexpr unsigned int KFFPNOBMODN_TypeDefinitionIndex = 55639;

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
