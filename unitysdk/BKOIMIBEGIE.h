#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define BKOIMIBEGIE_COLLECT_OFFSET UNITYSDK_OFFSET(0xBA622C0)
#define BKOIMIBEGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA62160)
#define BKOIMIBEGIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA62240)
#define BKOIMIBEGIE_FLUSH_OFFSET UNITYSDK_OFFSET(0xBA625A0)
#define BKOIMIBEGIE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA62780)
#define BKOIMIBEGIE_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xBA621E0)
#define BKOIMIBEGIE_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xBA62280)
#define BKOIMIBEGIE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBA62740)
#define BKOIMIBEGIE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBA62700)
#define BKOIMIBEGIE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBA62790)

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
