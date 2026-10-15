#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSpaceZooMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define JNDOIKECILI_CTOR_OFFSET UNITYSDK_OFFSET(0xB27B7B0)
#define JNDOIKECILI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB27B840)
#define JNDOIKECILI_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB27BDC0)
#define JNDOIKECILI_KHABMEMDHEP_OFFSET UNITYSDK_OFFSET(0xB27BC30)
#define JNDOIKECILI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB27B910)
#define JNDOIKECILI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB27BB80)
#define JNDOIKECILI_TICK_OFFSET UNITYSDK_OFFSET(0xB27BBD0)
#define JNDOIKECILI___ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0xB27BE10)

inline static constexpr unsigned int JNDOIKECILI_TypeDefinitionIndex = 58693;

	class JNDOIKECILI : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x18
		::RPG::GameCore::ShowSpaceZooMainPage* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSpaceZooMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSpaceZooMainPage*))((::PBYTE)hIl2Cpp + JNDOIKECILI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDOIKECILI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDOIKECILI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDOIKECILI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNDOIKECILI_TICK_OFFSET))(this, a1);
		}

		::System::Void KHABMEMDHEP(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + JNDOIKECILI_KHABMEMDHEP_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDOIKECILI_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void __OnUIOpen_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDOIKECILI___ONUIOPEN_B__5_0_OFFSET))(this);
		}

	};
