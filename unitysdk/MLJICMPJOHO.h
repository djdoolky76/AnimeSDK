#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseAction; }

#define MLJICMPJOHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B18D0)
#define MLJICMPJOHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B18E0)
#define MLJICMPJOHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B1920)
#define MLJICMPJOHO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9B19C0)
#define MLJICMPJOHO_TICK_OFFSET UNITYSDK_OFFSET(0xB9B1A10)

inline static constexpr unsigned int MLJICMPJOHO_TypeDefinitionIndex = 58978;

	class MLJICMPJOHO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseAction*))((::PBYTE)hIl2Cpp + MLJICMPJOHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJICMPJOHO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJICMPJOHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJICMPJOHO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLJICMPJOHO_TICK_OFFSET))(this, a1);
		}

	};
