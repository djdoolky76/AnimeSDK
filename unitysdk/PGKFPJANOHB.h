#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyPerformanceCharacterTriggerFreeStyle; }

#define PGKFPJANOHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC223850)
#define PGKFPJANOHB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC223860)
#define PGKFPJANOHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2238B0)
#define PGKFPJANOHB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC223DA0)
#define PGKFPJANOHB_TICK_OFFSET UNITYSDK_OFFSET(0xC223DF0)

inline static constexpr unsigned int PGKFPJANOHB_TypeDefinitionIndex = 53427;

	class PGKFPJANOHB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::System::UInt32 EBJLPAFFKOM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + PGKFPJANOHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKFPJANOHB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKFPJANOHB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKFPJANOHB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGKFPJANOHB_TICK_OFFSET))(this, a1);
		}

	};
