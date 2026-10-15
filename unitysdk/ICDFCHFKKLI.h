#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyGridMove; }

#define ICDFCHFKKLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E40150)
#define ICDFCHFKKLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E40160)
#define ICDFCHFKKLI_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x15E403C0)
#define ICDFCHFKKLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E40240)
#define ICDFCHFKKLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E40310)
#define ICDFCHFKKLI_TICK_OFFSET UNITYSDK_OFFSET(0x15E40360)

inline static constexpr unsigned int ICDFCHFKKLI_TypeDefinitionIndex = 53426;

	class ICDFCHFKKLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TrainPartyGridMove* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyGridMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyGridMove*))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_TICK_OFFSET))(this, a1);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDFCHFKKLI_DMJKBKMKKCG_OFFSET))(this);
		}

	};
