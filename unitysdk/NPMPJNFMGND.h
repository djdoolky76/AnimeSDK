#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropSwitchShowInfo; }
namespace RPG::GameCore { class TaskContext; }

#define NPMPJNFMGND_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0xBD10B90)
#define NPMPJNFMGND_CTOR_OFFSET UNITYSDK_OFFSET(0xBD107F0)
#define NPMPJNFMGND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD10820)

	class NPMPJNFMGND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSwitchShowInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSwitchShowInfo*))((::PBYTE)hIl2Cpp + NPMPJNFMGND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMPJNFMGND_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMPJNFMGND_BOLJDDJDNII_OFFSET))(this);
		}

	};
