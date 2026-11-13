#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class BCKLNJEBKLK;
class OKIPLLDOPCA;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define DJDBDBIIBNM_COLLECT_OFFSET UNITYSDK_OFFSET(0x18BE10F0)
#define DJDBDBIIBNM_CTOR_OFFSET UNITYSDK_OFFSET(0x18BE0CE0)
#define DJDBDBIIBNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BE1060)
#define DJDBDBIIBNM_EMPLLOGIDLL_OFFSET UNITYSDK_OFFSET(0x18BE0DC0)
#define DJDBDBIIBNM_FLUSH_OFFSET UNITYSDK_OFFSET(0x18BE1180)
#define DJDBDBIIBNM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18BE1270)
#define DJDBDBIIBNM_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x18BE0D60)
#define DJDBDBIIBNM_KGGEGKEHAJB_OFFSET UNITYSDK_OFFSET(0x18BE0E20)
#define DJDBDBIIBNM_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x18BE10B0)
#define DJDBDBIIBNM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18BE1230)
#define DJDBDBIIBNM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18BE11F0)
#define DJDBDBIIBNM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18BE1280)

inline static constexpr unsigned int DJDBDBIIBNM_TypeDefinitionIndex = 73071;

	class DJDBDBIIBNM
	{
	public:
		::BCKLNJEBKLK* CLGLOGJNKOI; // 0x30
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::UnityChan::SpringManager* MMGDBGOIJEC; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EEBHGENEICK; // 0x48
		::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* DFGJNFPLKGG; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* MCCFHEPLEGM; // 0x58
		::OKIPLLDOPCA* DNOOKOOHLIA; // 0x60
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_CTOR_OFFSET))(this);
		}

		::System::Void EMPLLOGIDLL(::UnityChan::SpringManager* a1, ::BCKLNJEBKLK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::BCKLNJEBKLK*))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_EMPLLOGIDLL_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_ONDISABLE_OFFSET))(this);
		}

		::System::Void KGGEGKEHAJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_KGGEGKEHAJB_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + DJDBDBIIBNM_SET_CONFIG_OFFSET))(this, a1);
		}

	};
