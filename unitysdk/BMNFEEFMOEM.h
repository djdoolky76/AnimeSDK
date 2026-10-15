#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartBattleLevelGraphOperation; }
namespace RPG::GameCore { class TaskContext; }

#define BMNFEEFMOEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBF120)
#define BMNFEEFMOEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDBF150)

	class BMNFEEFMOEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleLevelGraphOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleLevelGraphOperation*))((::PBYTE)hIl2Cpp + BMNFEEFMOEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNFEEFMOEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
