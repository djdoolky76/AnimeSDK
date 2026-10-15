#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEnableTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JKHINHOHADB_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0xB21D260)
#define JKHINHOHADB_CTOR_OFFSET UNITYSDK_OFFSET(0xB21D230)
#define JKHINHOHADB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21D400)

inline static constexpr unsigned int JKHINHOHADB_TypeDefinitionIndex = 52356;

	class JKHINHOHADB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + JKHINHOHADB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CMMJFAELBKE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHINHOHADB_CMMJFAELBKE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHINHOHADB_ONTASKBEGIN_OFFSET))(this);
		}

	};
