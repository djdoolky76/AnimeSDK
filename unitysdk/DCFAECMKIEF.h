#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class LJONMOGLMIB;
namespace RPG::GameCore { class ThreadTaskConfig; }

#define DCFAECMKIEF_COLLECT_OFFSET UNITYSDK_OFFSET(0x1B167970)
#define DCFAECMKIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B167720)
#define DCFAECMKIEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1678F0)
#define DCFAECMKIEF_FEBHPNNPELD_OFFSET UNITYSDK_OFFSET(0x1B1677F0)
#define DCFAECMKIEF_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B1679B0)
#define DCFAECMKIEF_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B167B00)
#define DCFAECMKIEF_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x1B167790)
#define DCFAECMKIEF_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x1B167930)
#define DCFAECMKIEF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B167AC0)
#define DCFAECMKIEF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B167A80)
#define DCFAECMKIEF_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B167B10)

inline static constexpr unsigned int DCFAECMKIEF_TypeDefinitionIndex = 73081;

	class DCFAECMKIEF
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_CTOR_OFFSET))(this);
		}

		::System::Void FEBHPNNPELD(::LJONMOGLMIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJONMOGLMIB*))((::PBYTE)hIl2Cpp + DCFAECMKIEF_FEBHPNNPELD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_ONDISABLE_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFAECMKIEF_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + DCFAECMKIEF_SET_CONFIG_OFFSET))(this, a1);
		}

	};
