#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class BJPKCHPDJBO;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define BCKLNJEBKLK_COLLECT_OFFSET UNITYSDK_OFFSET(0x162E2310)
#define BCKLNJEBKLK_CTOR_OFFSET UNITYSDK_OFFSET(0x162E1F30)
#define BCKLNJEBKLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162E2200)
#define BCKLNJEBKLK_FLUSH_OFFSET UNITYSDK_OFFSET(0x162E23B0)
#define BCKLNJEBKLK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x162E2590)
#define BCKLNJEBKLK_GFGONBPODFK_OFFSET UNITYSDK_OFFSET(0x162E2580)
#define BCKLNJEBKLK_GNDIAAIKIIN_OFFSET UNITYSDK_OFFSET(0x162E20D0)
#define BCKLNJEBKLK_IACLEPIECDI_OFFSET UNITYSDK_OFFSET(0x162E24B0)
#define BCKLNJEBKLK_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x162E2070)
#define BCKLNJEBKLK_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0x162E2000)
#define BCKLNJEBKLK_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x162E22D0)
#define BCKLNJEBKLK_OBJLILINFGN_OFFSET UNITYSDK_OFFSET(0x162E2160)
#define BCKLNJEBKLK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162E2290)
#define BCKLNJEBKLK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162E2250)
#define BCKLNJEBKLK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x162E25A0)

	class BCKLNJEBKLK
	{
	public:
		::RPG::GameCore::AdventureCharacterController* LDHAGDIDMKB; // 0x28
		::BJPKCHPDJBO* COKDGBEABHP; // 0x30
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_CTOR_OFFSET))(this);
		}

		::System::Void GNDIAAIKIIN(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_GNDIAAIKIIN_OFFSET))(this, a1);
		}

		::System::Void OBJLILINFGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_OBJLILINFGN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_FLUSH_OFFSET))(this);
		}

		::System::Void IACLEPIECDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_IACLEPIECDI_OFFSET))(this);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_KEFGLLPDHLK_OFFSET))(this);
		}

		::BJPKCHPDJBO* GFGONBPODFK()
		{
			return ((::BJPKCHPDJBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_GFGONBPODFK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + BCKLNJEBKLK_SET_CONFIG_OFFSET))(this, a1);
		}

	};
