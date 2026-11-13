#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBranchByActivitySwordTrainingStoryLine; }

#define DGNMOLJMCCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC22D0)
#define DGNMOLJMCCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADC22E0)
#define DGNMOLJMCCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1ADC2320)
#define DGNMOLJMCCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1ADC24F0)
#define DGNMOLJMCCB_TICK_OFFSET UNITYSDK_OFFSET(0x1ADC2540)

inline static constexpr unsigned int DGNMOLJMCCB_TypeDefinitionIndex = 60040;

	class DGNMOLJMCCB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*))((::PBYTE)hIl2Cpp + DGNMOLJMCCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNMOLJMCCB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNMOLJMCCB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNMOLJMCCB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGNMOLJMCCB_TICK_OFFSET))(this, a1);
		}

	};
