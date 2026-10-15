#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierPhase1Perform; }

#define GKOCGBKMJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9C250)
#define GKOCGBKMJIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A9C260)
#define GKOCGBKMJIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A9C2A0)
#define GKOCGBKMJIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A9C390)
#define GKOCGBKMJIF_TICK_OFFSET UNITYSDK_OFFSET(0x15A9C3E0)

inline static constexpr unsigned int GKOCGBKMJIF_TypeDefinitionIndex = 55752;

	class GKOCGBKMJIF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerModifierPhase1Perform* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierPhase1Perform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierPhase1Perform*))((::PBYTE)hIl2Cpp + GKOCGBKMJIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOCGBKMJIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOCGBKMJIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOCGBKMJIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKOCGBKMJIF_TICK_OFFSET))(this, a1);
		}

	};
