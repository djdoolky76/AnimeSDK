#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBBKBDGLLB.h"
#include "unitysdk/CNEKNGIFAPK.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIGEFGHOKPI_AJEMEFAKOHM_OFFSET UNITYSDK_OFFSET(0xCF70530)
#define CIGEFGHOKPI_COLLECT_OFFSET UNITYSDK_OFFSET(0xCF706C0)
#define CIGEFGHOKPI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF701E0)
#define CIGEFGHOKPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF704A0)
#define CIGEFGHOKPI_FLUSH_OFFSET UNITYSDK_OFFSET(0xCF70830)
#define CIGEFGHOKPI_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF70A70)
#define CIGEFGHOKPI_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xCF703E0)
#define CIGEFGHOKPI_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0xCF70440)
#define CIGEFGHOKPI_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xCF704F0)
#define CIGEFGHOKPI_NOJEHEGKIHN_OFFSET UNITYSDK_OFFSET(0xCF70640)
#define CIGEFGHOKPI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCF70A30)
#define CIGEFGHOKPI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCF709F0)
#define CIGEFGHOKPI_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF70A80)

	class CIGEFGHOKPI
	{
	public:
		::System::Collections::Generic::List_1<::CNEKNGIFAPK>* FCIENEOKGDA; // 0x50
		::System::Collections::Generic::List_1<::CEBBKBDGLLB>* LOCBAFAHGIL; // 0x58
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x60
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void AJEMEFAKOHM(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_AJEMEFAKOHM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOJEHEGKIHN(::System::Collections::Generic::List_1<::CNEKNGIFAPK>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CNEKNGIFAPK>*))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_NOJEHEGKIHN_OFFSET))(this, a1);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_ONDISABLE_OFFSET))(this);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_KEFGLLPDHLK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CIGEFGHOKPI_SET_CONFIG_OFFSET))(this, a1);
		}

	};
