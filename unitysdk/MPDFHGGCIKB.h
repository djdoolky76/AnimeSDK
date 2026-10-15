#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace RPG::GameCore { class TaskContext; }

#define MPDFHGGCIKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3A340)
#define MPDFHGGCIKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA3A370)

	class MPDFHGGCIKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBossHeadEffType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + MPDFHGGCIKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDFHGGCIKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
