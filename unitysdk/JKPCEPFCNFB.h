#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTeamLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JKPCEPFCNFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB22E4B0)
#define JKPCEPFCNFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB22E4E0)

	class JKPCEPFCNFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamLockTarget*))((::PBYTE)hIl2Cpp + JKPCEPFCNFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPCEPFCNFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
