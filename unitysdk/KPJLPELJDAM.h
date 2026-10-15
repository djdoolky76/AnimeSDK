#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueCurrentSkillUseParam; }
namespace RPG::GameCore { class TaskContext; }

#define KPJLPELJDAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C0E20)
#define KPJLPELJDAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5C0F00)

	class KPJLPELJDAM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + KPJLPELJDAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJLPELJDAM_ONTASKBEGIN_OFFSET))(this);
		}

	};
