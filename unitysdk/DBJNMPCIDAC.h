#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadLevelGroup; }

#define DBJNMPCIDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xE228680)
#define DBJNMPCIDAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE228690)
#define DBJNMPCIDAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2286D0)
#define DBJNMPCIDAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE228820)
#define DBJNMPCIDAC_TICK_OFFSET UNITYSDK_OFFSET(0xE228870)

inline static constexpr unsigned int DBJNMPCIDAC_TypeDefinitionIndex = 53461;

	class DBJNMPCIDAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::UnloadLevelGroup* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadLevelGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadLevelGroup*))((::PBYTE)hIl2Cpp + DBJNMPCIDAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJNMPCIDAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJNMPCIDAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJNMPCIDAC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBJNMPCIDAC_TICK_OFFSET))(this, a1);
		}

	};
