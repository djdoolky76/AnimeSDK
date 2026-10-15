#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBossInfoBar; }
namespace RPG::GameCore { class TaskContext; }

#define DPINEFIMELG_CTOR_OFFSET UNITYSDK_OFFSET(0x12640C50)
#define DPINEFIMELG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12640C60)
#define DPINEFIMELG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12640CA0)
#define DPINEFIMELG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12640DA0)
#define DPINEFIMELG_TICK_OFFSET UNITYSDK_OFFSET(0x12640DF0)

inline static constexpr unsigned int DPINEFIMELG_TypeDefinitionIndex = 56451;

	class DPINEFIMELG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowBossInfoBar* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBossInfoBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBossInfoBar*))((::PBYTE)hIl2Cpp + DPINEFIMELG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPINEFIMELG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPINEFIMELG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPINEFIMELG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPINEFIMELG_TICK_OFFSET))(this, a1);
		}

	};
