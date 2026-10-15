#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseMove; }

#define AJMKGLAFBGE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC2CE0)
#define AJMKGLAFBGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC2CF0)
#define AJMKGLAFBGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC2D30)
#define AJMKGLAFBGE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CC2DD0)
#define AJMKGLAFBGE_TICK_OFFSET UNITYSDK_OFFSET(0x12CC2EA0)

inline static constexpr unsigned int AJMKGLAFBGE_TypeDefinitionIndex = 58980;

	class AJMKGLAFBGE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseMove*))((::PBYTE)hIl2Cpp + AJMKGLAFBGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGLAFBGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGLAFBGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGLAFBGE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJMKGLAFBGE_TICK_OFFSET))(this, a1);
		}

	};
