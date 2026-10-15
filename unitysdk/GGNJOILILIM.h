#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleSetCameraFocusTarget; }
namespace RPG::GameCore { class TaskContext; }

#define GGNJOILILIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A11460)
#define GGNJOILILIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A11490)

	class GGNJOILILIM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*))((::PBYTE)hIl2Cpp + GGNJOILILIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNJOILILIM_ONTASKBEGIN_OFFSET))(this);
		}

	};
