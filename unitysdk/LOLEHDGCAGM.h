#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleTriggerCharacterCamera; }
namespace RPG::GameCore { class TaskContext; }

#define LOLEHDGCAGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB80B670)
#define LOLEHDGCAGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80B6A0)

	class LOLEHDGCAGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*))((::PBYTE)hIl2Cpp + LOLEHDGCAGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLEHDGCAGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
