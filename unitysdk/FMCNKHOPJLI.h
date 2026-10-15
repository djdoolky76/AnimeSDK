#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEnergyBarEffect; }

#define FMCNKHOPJLI_CTOR_OFFSET UNITYSDK_OFFSET(0x158425E0)
#define FMCNKHOPJLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158425F0)
#define FMCNKHOPJLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15842630)
#define FMCNKHOPJLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158427E0)
#define FMCNKHOPJLI_TICK_OFFSET UNITYSDK_OFFSET(0x15842830)

inline static constexpr unsigned int FMCNKHOPJLI_TypeDefinitionIndex = 55736;

	class FMCNKHOPJLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerEnergyBarEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + FMCNKHOPJLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCNKHOPJLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCNKHOPJLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCNKHOPJLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMCNKHOPJLI_TICK_OFFSET))(this, a1);
		}

	};
