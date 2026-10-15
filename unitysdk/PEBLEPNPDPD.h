#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleUIInTimeline; }
namespace RPG::GameCore { class TaskContext; }

#define PEBLEPNPDPD_CTOR_OFFSET UNITYSDK_OFFSET(0xC033000)
#define PEBLEPNPDPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC033030)

	class PEBLEPNPDPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleUIInTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleUIInTimeline*))((::PBYTE)hIl2Cpp + PEBLEPNPDPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLEPNPDPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
