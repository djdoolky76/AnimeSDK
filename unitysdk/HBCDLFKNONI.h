#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayCrossHairPreviewFadeIn; }
namespace RPG::GameCore { class TaskContext; }

#define HBCDLFKNONI_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE62F0)
#define HBCDLFKNONI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE6300)
#define HBCDLFKNONI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BE6340)
#define HBCDLFKNONI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BE6420)
#define HBCDLFKNONI_TICK_OFFSET UNITYSDK_OFFSET(0x15BE6470)

	class HBCDLFKNONI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayCrossHairPreviewFadeIn* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + HBCDLFKNONI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCDLFKNONI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCDLFKNONI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCDLFKNONI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBCDLFKNONI_TICK_OFFSET))(this, a1);
		}

	};
