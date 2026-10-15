#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace UnityEngine { class Object; }

#define FNHHJAIOHGB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x158713B0)
#define FNHHJAIOHGB_COLLECT_OFFSET UNITYSDK_OFFSET(0x158714E0)
#define FNHHJAIOHGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15870F10)
#define FNHHJAIOHGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15871450)
#define FNHHJAIOHGB_FLUSH_OFFSET UNITYSDK_OFFSET(0x15871520)
#define FNHHJAIOHGB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x158715E0)
#define FNHHJAIOHGB_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x15871030)
#define FNHHJAIOHGB_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15871090)
#define FNHHJAIOHGB_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0x15870FD0)
#define FNHHJAIOHGB_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x158714A0)
#define FNHHJAIOHGB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x158715A0)
#define FNHHJAIOHGB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15871560)
#define FNHHJAIOHGB_PINOKCNDANM_OFFSET UNITYSDK_OFFSET(0x15871250)
#define FNHHJAIOHGB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x158715F0)

inline static constexpr unsigned int FNHHJAIOHGB_TypeDefinitionIndex = 71075;

	class FNHHJAIOHGB
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void PINOKCNDANM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_PINOKCNDANM_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::UnityEngine::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_BLILDBCEGFH_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_ONDISABLE_OFFSET))(this);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_KEFGLLPDHLK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + FNHHJAIOHGB_SET_CONFIG_OFFSET))(this, a1);
		}

	};
