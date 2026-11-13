#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define MGGFEDHFKPC_COLLECT_OFFSET UNITYSDK_OFFSET(0x1B33CB80)
#define MGGFEDHFKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B33C980)
#define MGGFEDHFKPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B33CAF0)
#define MGGFEDHFKPC_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B33CC00)
#define MGGFEDHFKPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B33CCE0)
#define MGGFEDHFKPC_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x1B33CA90)
#define MGGFEDHFKPC_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0x1B33CA30)
#define MGGFEDHFKPC_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x1B33CB40)
#define MGGFEDHFKPC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B33CCA0)
#define MGGFEDHFKPC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B33CC60)
#define MGGFEDHFKPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1B33CCF0)

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
