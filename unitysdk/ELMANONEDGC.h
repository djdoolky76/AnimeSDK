#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ElfShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define ELMANONEDGC_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0x155279F0)
#define ELMANONEDGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15527760)
#define ELMANONEDGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15527770)
#define ELMANONEDGC_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x15527E60)
#define ELMANONEDGC_LCMKBCAGAJO_OFFSET UNITYSDK_OFFSET(0x15527C20)
#define ELMANONEDGC_LICKEBHBMDO_OFFSET UNITYSDK_OFFSET(0x15527CF0)
#define ELMANONEDGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15527850)
#define ELMANONEDGC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15527FF0)
#define ELMANONEDGC_TICK_OFFSET UNITYSDK_OFFSET(0x15528040)
#define ELMANONEDGC___ONUIEXIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x15528130)
#define ELMANONEDGC___SHOWUI_B__3_0_OFFSET UNITYSDK_OFFSET(0x155280A0)

	class ELMANONEDGC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x20
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x28
		::RPG::GameCore::ElfShowUI* OFKGLJOAMLD; // 0x30
		// static const ::System::String* KJBMODOOOPC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfShowUI*))((::PBYTE)hIl2Cpp + ELMANONEDGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void LCMKBCAGAJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELMANONEDGC_LCMKBCAGAJO_OFFSET))(this, a1);
		}

		::System::Boolean LICKEBHBMDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_LICKEBHBMDO_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELMANONEDGC_TICK_OFFSET))(this, a1);
		}

		::System::Void __ShowUI_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC___SHOWUI_B__3_0_OFFSET))(this);
		}

		::System::Void __OnUIExit_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMANONEDGC___ONUIEXIT_B__6_0_OFFSET))(this);
		}

	};
