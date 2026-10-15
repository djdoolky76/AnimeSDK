#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBranchByActivitySwordTrainingStoryLine; }

#define DGNMOLJMCCB_CTOR_OFFSET UNITYSDK_OFFSET(0xE8581D0)
#define DGNMOLJMCCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8581E0)
#define DGNMOLJMCCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE858220)
#define DGNMOLJMCCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE8583F0)
#define DGNMOLJMCCB_TICK_OFFSET UNITYSDK_OFFSET(0xE858440)

inline static constexpr unsigned int DGNMOLJMCCB_TypeDefinitionIndex = 58772;

	class DGNMOLJMCCB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
