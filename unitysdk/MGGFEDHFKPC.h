#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define MGGFEDHFKPC_COLLECT_OFFSET UNITYSDK_OFFSET(0xB916C30)
#define MGGFEDHFKPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB916A40)
#define MGGFEDHFKPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB916BA0)
#define MGGFEDHFKPC_FLUSH_OFFSET UNITYSDK_OFFSET(0xB916CB0)
#define MGGFEDHFKPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB916D90)
#define MGGFEDHFKPC_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB916B40)
#define MGGFEDHFKPC_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0xB916AF0)
#define MGGFEDHFKPC_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xB916BF0)
#define MGGFEDHFKPC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB916D50)
#define MGGFEDHFKPC_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB916D10)
#define MGGFEDHFKPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB916DA0)

inline static constexpr unsigned int MGGFEDHFKPC_TypeDefinitionIndex = 71078;

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
