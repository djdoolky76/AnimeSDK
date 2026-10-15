#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowOfferingClockieUpgradeHint; }
namespace RPG::GameCore { class TaskContext; }

#define FPCKJIKGKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1590F810)
#define FPCKJIKGKLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1590F820)
#define FPCKJIKGKLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1590F860)
#define FPCKJIKGKLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1590FAA0)
#define FPCKJIKGKLC_TICK_OFFSET UNITYSDK_OFFSET(0x1590FAF0)

inline static constexpr unsigned int FPCKJIKGKLC_TypeDefinitionIndex = 53281;

	class FPCKJIKGKLC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowOfferingClockieUpgradeHint* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowOfferingClockieUpgradeHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowOfferingClockieUpgradeHint*))((::PBYTE)hIl2Cpp + FPCKJIKGKLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCKJIKGKLC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCKJIKGKLC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCKJIKGKLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPCKJIKGKLC_TICK_OFFSET))(this, a1);
		}

	};
