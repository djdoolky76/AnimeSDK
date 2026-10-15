#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define BKOIMIBEGIE_COLLECT_OFFSET UNITYSDK_OFFSET(0xBA5ED30)
#define BKOIMIBEGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5EBD0)
#define BKOIMIBEGIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA5ECB0)
#define BKOIMIBEGIE_FLUSH_OFFSET UNITYSDK_OFFSET(0xBA5F010)
#define BKOIMIBEGIE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA5F1F0)
#define BKOIMIBEGIE_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xBA5EC50)
#define BKOIMIBEGIE_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xBA5ECF0)
#define BKOIMIBEGIE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBA5F1B0)
#define BKOIMIBEGIE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBA5F170)
#define BKOIMIBEGIE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA5F200)

inline static constexpr unsigned int BKOIMIBEGIE_TypeDefinitionIndex = 71105;

	class BKOIMIBEGIE
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_ONDISABLE_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + BKOIMIBEGIE_SET_CONFIG_OFFSET))(this, a1);
		}

	};
