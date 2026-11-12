#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define BKOIMIBEGIE_COLLECT_OFFSET UNITYSDK_OFFSET(0xC12BFF0)
#define BKOIMIBEGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC12BE90)
#define BKOIMIBEGIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC12BF70)
#define BKOIMIBEGIE_FLUSH_OFFSET UNITYSDK_OFFSET(0xC12C2D0)
#define BKOIMIBEGIE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC12C4B0)
#define BKOIMIBEGIE_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xC12BF10)
#define BKOIMIBEGIE_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xC12BFB0)
#define BKOIMIBEGIE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC12C470)
#define BKOIMIBEGIE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC12C430)
#define BKOIMIBEGIE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC12C4C0)

inline static constexpr unsigned int BKOIMIBEGIE_TypeDefinitionIndex = 73088;

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
