#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define KBPKOPGHDEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB325F80)
#define KBPKOPGHDEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB325FB0)

	class KBPKOPGHDEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + KBPKOPGHDEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPGHDEG_ONTASKBEGIN_OFFSET))(this);
		}

	};
