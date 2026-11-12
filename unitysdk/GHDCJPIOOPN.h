#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class FinishHitStateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define GHDCJPIOOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1694FEC0)
#define GHDCJPIOOPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1694FED0)
#define GHDCJPIOOPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1694FF10)
#define GHDCJPIOOPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169500F0)
#define GHDCJPIOOPN_TICK_OFFSET UNITYSDK_OFFSET(0x16950140)

inline static constexpr unsigned int GHDCJPIOOPN_TypeDefinitionIndex = 56240;

	class GHDCJPIOOPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::FinishHitStateImmediately* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* HFOFIODMFGB; // 0x28
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
