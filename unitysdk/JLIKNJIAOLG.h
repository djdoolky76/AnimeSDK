#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByTargetToTeamCenterDistance; }
namespace RPG::GameCore { class TaskContext; }

#define JLIKNJIAOLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB24C030)
#define JLIKNJIAOLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24C110)

	class JLIKNJIAOLG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*))((::PBYTE)hIl2Cpp + JLIKNJIAOLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIKNJIAOLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
