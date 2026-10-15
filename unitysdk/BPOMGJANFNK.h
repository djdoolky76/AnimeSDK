#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadBattleEvent; }
namespace RPG::GameCore { class TaskContext; }

#define BPOMGJANFNK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1ADB80)
#define BPOMGJANFNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1ADBB0)

	class BPOMGJANFNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattleEvent*))((::PBYTE)hIl2Cpp + BPOMGJANFNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMGJANFNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
