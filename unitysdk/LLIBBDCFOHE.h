#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LevelWaitSecond; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSecond; }

#define LLIBBDCFOHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB76F8A0)
#define LLIBBDCFOHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB76F8E0)
#define LLIBBDCFOHE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB76F930)
#define LLIBBDCFOHE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB76FFD0)
#define LLIBBDCFOHE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB76FF80)
#define LLIBBDCFOHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB76F940)
#define LLIBBDCFOHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB76FAB0)
#define LLIBBDCFOHE_TICK_OFFSET UNITYSDK_OFFSET(0xB76FBE0)

inline static constexpr unsigned int LLIBBDCFOHE_TypeDefinitionIndex = 58925;

	class LLIBBDCFOHE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitSecond* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::LevelWaitSecond* COEBDGBFIFJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Single BOBKAKEJPEI; // 0x30
		::System::Single DKOFFPPGEFI; // 0x34
		::System::UInt64 HCOLAKNHFPO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSecond* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSecond*))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLIBBDCFOHE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
