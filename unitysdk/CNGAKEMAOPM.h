#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddTimelineMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define CNGAKEMAOPM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4EF40)
#define CNGAKEMAOPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA4EF50)
#define CNGAKEMAOPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA4EF90)
#define CNGAKEMAOPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA4F190)
#define CNGAKEMAOPM_TICK_OFFSET UNITYSDK_OFFSET(0xDA4F1E0)

	class CNGAKEMAOPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AddTimelineMenuItem* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineMenuItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineMenuItem*))((::PBYTE)hIl2Cpp + CNGAKEMAOPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGAKEMAOPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGAKEMAOPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGAKEMAOPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNGAKEMAOPM_TICK_OFFSET))(this, a1);
		}

	};
