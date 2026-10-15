#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define MEFABEACDHL_COLLECT_OFFSET UNITYSDK_OFFSET(0xB8BDC30)
#define MEFABEACDHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BDA90)
#define MEFABEACDHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8BDBB0)
#define MEFABEACDHL_FLUSH_OFFSET UNITYSDK_OFFSET(0xB8BDC70)
#define MEFABEACDHL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8BDD30)
#define MEFABEACDHL_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0xB8BDB60)
#define MEFABEACDHL_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB8BDB00)
#define MEFABEACDHL_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xB8BDBF0)
#define MEFABEACDHL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB8BDCF0)
#define MEFABEACDHL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB8BDCB0)
#define MEFABEACDHL_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8BDD40)

inline static constexpr unsigned int MEFABEACDHL_TypeDefinitionIndex = 71090;

	class MEFABEACDHL
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_CTOR_OFFSET))(this);
		}

		::System::Void HPDIGBHFMPG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEFABEACDHL_HPDIGBHFMPG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_ONDISABLE_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFABEACDHL_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + MEFABEACDHL_SET_CONFIG_OFFSET))(this, a1);
		}

	};
