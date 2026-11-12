#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattlePostureType; }

#define OJJPFDJJBMC_CTOR_OFFSET UNITYSDK_OFFSET(0xC7B5080)
#define OJJPFDJJBMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7B5090)
#define OJJPFDJJBMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7B50D0)
#define OJJPFDJJBMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7B5190)
#define OJJPFDJJBMC_TICK_OFFSET UNITYSDK_OFFSET(0xC7B51E0)

inline static constexpr unsigned int OJJPFDJJBMC_TypeDefinitionIndex = 54605;

	class OJJPFDJJBMC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerBattlePostureType* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattlePostureType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattlePostureType*))((::PBYTE)hIl2Cpp + OJJPFDJJBMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJPFDJJBMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJPFDJJBMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJPFDJJBMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJJPFDJJBMC_TICK_OFFSET))(this, a1);
		}

	};
