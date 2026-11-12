#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define MGGFEDHFKPC_COLLECT_OFFSET UNITYSDK_OFFSET(0xC1D0490)
#define MGGFEDHFKPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1D02A0)
#define MGGFEDHFKPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1D0400)
#define MGGFEDHFKPC_FLUSH_OFFSET UNITYSDK_OFFSET(0xC1D0510)
#define MGGFEDHFKPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC1D05F0)
#define MGGFEDHFKPC_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xC1D03A0)
#define MGGFEDHFKPC_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0xC1D0350)
#define MGGFEDHFKPC_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xC1D0450)
#define MGGFEDHFKPC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1D05B0)
#define MGGFEDHFKPC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1D0570)
#define MGGFEDHFKPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC1D0600)

inline static constexpr unsigned int MGGFEDHFKPC_TypeDefinitionIndex = 73061;

	class MGGFEDHFKPC
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_ONDISABLE_OFFSET))(this);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_KEFGLLPDHLK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + MGGFEDHFKPC_SET_CONFIG_OFFSET))(this, a1);
		}

	};
