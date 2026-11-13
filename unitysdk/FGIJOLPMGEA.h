#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseDone; }

#define FGIJOLPMGEA_CTOR_OFFSET UNITYSDK_OFFSET(0x18A8DF30)
#define FGIJOLPMGEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A8DF40)
#define FGIJOLPMGEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A8DF80)
#define FGIJOLPMGEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A8E050)
#define FGIJOLPMGEA_TICK_OFFSET UNITYSDK_OFFSET(0x18A8E0A0)

inline static constexpr unsigned int FGIJOLPMGEA_TypeDefinitionIndex = 60252;

	class FGIJOLPMGEA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseDone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseDone*))((::PBYTE)hIl2Cpp + FGIJOLPMGEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJOLPMGEA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJOLPMGEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJOLPMGEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGIJOLPMGEA_TICK_OFFSET))(this, a1);
		}

	};
