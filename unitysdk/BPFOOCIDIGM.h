#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceSyncActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define BPFOOCIDIGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3490)
#define BPFOOCIDIGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A34C0)

inline static constexpr unsigned int BPFOOCIDIGM_TypeDefinitionIndex = 55075;

	class BPFOOCIDIGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceSyncActionDelayLink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceSyncActionDelayLink*))((::PBYTE)hIl2Cpp + BPFOOCIDIGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFOOCIDIGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
