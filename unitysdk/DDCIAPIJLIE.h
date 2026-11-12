#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::Client { class Effect_FallingAnimatorBehavior; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define DDCIAPIJLIE_COLLECT_OFFSET UNITYSDK_OFFSET(0xEE18D90)
#define DDCIAPIJLIE_CTOR_OFFSET UNITYSDK_OFFSET(0xEE18B20)
#define DDCIAPIJLIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE18CF0)
#define DDCIAPIJLIE_EMPLLOGIDLL_OFFSET UNITYSDK_OFFSET(0xEE18CA0)
#define DDCIAPIJLIE_FLUSH_OFFSET UNITYSDK_OFFSET(0xEE18E20)
#define DDCIAPIJLIE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEE18F00)
#define DDCIAPIJLIE_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xEE18C30)
#define DDCIAPIJLIE_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0xEE18BE0)
#define DDCIAPIJLIE_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xEE18D50)
#define DDCIAPIJLIE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEE18EC0)
#define DDCIAPIJLIE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEE18E80)
#define DDCIAPIJLIE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xEE18F10)

inline static constexpr unsigned int DDCIAPIJLIE_TypeDefinitionIndex = 73058;

	class DDCIAPIJLIE
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x118
		::RPG::Client::Effect_FallingAnimatorBehavior* CFKHNPGEAJA; // 0x120
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x128
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_CTOR_OFFSET))(this);
		}

		::System::Void EMPLLOGIDLL(::RPG::Client::Effect_FallingAnimatorBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_FallingAnimatorBehavior*))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_EMPLLOGIDLL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_ONDISABLE_OFFSET))(this);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_KEFGLLPDHLK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + DDCIAPIJLIE_SET_CONFIG_OFFSET))(this, a1);
		}

	};
