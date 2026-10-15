#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTargetUseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define HPIIHMHKDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE1C0)
#define HPIIHMHKDIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DCE1F0)

	class HPIIHMHKDIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTargetUseSkill*))((::PBYTE)hIl2Cpp + HPIIHMHKDIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIIHMHKDIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
