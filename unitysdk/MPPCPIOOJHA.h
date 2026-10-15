#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyUpdateInfoOnSwitchWorld; }
namespace RPG::GameCore { class TaskContext; }

#define MPPCPIOOJHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA44DF0)
#define MPPCPIOOJHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA45050)
#define MPPCPIOOJHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA44E00)
#define MPPCPIOOJHA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA45000)
#define MPPCPIOOJHA_TICK_OFFSET UNITYSDK_OFFSET(0xBA45090)

inline static constexpr unsigned int MPPCPIOOJHA_TypeDefinitionIndex = 58228;

	class MPPCPIOOJHA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + MPPCPIOOJHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCPIOOJHA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCPIOOJHA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCPIOOJHA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPPCPIOOJHA_TICK_OFFSET))(this, a1);
		}

	};
