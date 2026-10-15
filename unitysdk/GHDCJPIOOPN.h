#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class FinishHitStateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define GHDCJPIOOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A09F30)
#define GHDCJPIOOPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A09F40)
#define GHDCJPIOOPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A09F80)
#define GHDCJPIOOPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A0A160)
#define GHDCJPIOOPN_TICK_OFFSET UNITYSDK_OFFSET(0x15A0A1B0)

inline static constexpr unsigned int GHDCJPIOOPN_TypeDefinitionIndex = 55064;

	class GHDCJPIOOPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* HFOFIODMFGB; // 0x20
		::RPG::GameCore::FinishHitStateImmediately* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + GHDCJPIOOPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDCJPIOOPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDCJPIOOPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDCJPIOOPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHDCJPIOOPN_TICK_OFFSET))(this, a1);
		}

	};
