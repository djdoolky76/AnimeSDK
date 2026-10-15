#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerStanceCountDown; }

#define HOHKNLLBLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB7270)
#define HOHKNLLBLGP_GAAPHGOIMOD_OFFSET UNITYSDK_OFFSET(0x15DB7440)
#define HOHKNLLBLGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB72A0)

	class HOHKNLLBLGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + HOHKNLLBLGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHKNLLBLGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GAAPHGOIMOD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HOHKNLLBLGP_GAAPHGOIMOD_OFFSET))(this, a1, a2);
		}

	};
