#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopWindowStage; }
namespace RPG::GameCore { class TaskContext; }

#define GHFKHLHJPNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1B030)
#define GHFKHLHJPNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A1B060)

	class GHFKHLHJPNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopWindowStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopWindowStage*))((::PBYTE)hIl2Cpp + GHFKHLHJPNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFKHLHJPNA_ONTASKBEGIN_OFFSET))(this);
		}

	};
