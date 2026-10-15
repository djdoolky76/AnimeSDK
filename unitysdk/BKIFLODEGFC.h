#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureResumeTeamDataRefresh; }
namespace RPG::GameCore { class TaskContext; }

#define BKIFLODEGFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA58820)
#define BKIFLODEGFC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBA58900)
#define BKIFLODEGFC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBA58910)
#define BKIFLODEGFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA58850)

	class BKIFLODEGFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*))((::PBYTE)hIl2Cpp + BKIFLODEGFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIFLODEGFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIFLODEGFC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIFLODEGFC_ONSKIP_OFFSET))(this);
		}

	};
