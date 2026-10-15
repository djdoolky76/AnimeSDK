#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RoguePropOpenPage; }
namespace RPG::GameCore { class TaskContext; }

#define JMGCMMBNAJN_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xB25D430)
#define JMGCMMBNAJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB25D280)
#define JMGCMMBNAJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB25D310)
#define JMGCMMBNAJN_EEIFGNNLPKG_OFFSET UNITYSDK_OFFSET(0xB25D8D0)
#define JMGCMMBNAJN_JJHHCHEBBFO_OFFSET UNITYSDK_OFFSET(0xB25D730)
#define JMGCMMBNAJN_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB25D980)
#define JMGCMMBNAJN_KKBFMJIKHIF_OFFSET UNITYSDK_OFFSET(0xB25D7F0)
#define JMGCMMBNAJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB25D3E0)
#define JMGCMMBNAJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB25D680)
#define JMGCMMBNAJN_TICK_OFFSET UNITYSDK_OFFSET(0xB25D6D0)
#define JMGCMMBNAJN___SHOWUI_B__5_0_OFFSET UNITYSDK_OFFSET(0xB25D9D0)

inline static constexpr unsigned int JMGCMMBNAJN_TypeDefinitionIndex = 58471;

	class JMGCMMBNAJN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RoguePropOpenPage* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RoguePropOpenPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RoguePropOpenPage*))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_TICK_OFFSET))(this, a1);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void JJHHCHEBBFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_JJHHCHEBBFO_OFFSET))(this);
		}

		::System::Void KKBFMJIKHIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_KKBFMJIKHIF_OFFSET))(this);
		}

		::System::Void EEIFGNNLPKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_EEIFGNNLPKG_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void __ShowUI_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGCMMBNAJN___SHOWUI_B__5_0_OFFSET))(this);
		}

	};
