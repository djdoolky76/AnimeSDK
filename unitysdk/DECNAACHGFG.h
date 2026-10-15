#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggeBattleLoadFinishPerformance; }

#define DECNAACHGFG_CTOR_OFFSET UNITYSDK_OFFSET(0xE502340)
#define DECNAACHGFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE502350)
#define DECNAACHGFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE502500)
#define DECNAACHGFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE502420)
#define DECNAACHGFG_TICK_OFFSET UNITYSDK_OFFSET(0xE502A50)

inline static constexpr unsigned int DECNAACHGFG_TypeDefinitionIndex = 55710;

	class DECNAACHGFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggeBattleLoadFinishPerformance* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* ECAHDDPJIAE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + DECNAACHGFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNAACHGFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNAACHGFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECNAACHGFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DECNAACHGFG_TICK_OFFSET))(this, a1);
		}

	};
