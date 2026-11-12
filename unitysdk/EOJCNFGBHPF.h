#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMarbleAfterStreamingAction; }

#define EOJCNFGBHPF_CTOR_OFFSET UNITYSDK_OFFSET(0x164D6340)
#define EOJCNFGBHPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D6370)

inline static constexpr unsigned int EOJCNFGBHPF_TypeDefinitionIndex = 53416;

	class EOJCNFGBHPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*))((::PBYTE)hIl2Cpp + EOJCNFGBHPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJCNFGBHPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
