#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define NHOFHEHJJJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x148B1A40)
#define NHOFHEHJJJE_COLLECT_OFFSET UNITYSDK_OFFSET(0x148B1810)
#define NHOFHEHJJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x148B16B0)
#define NHOFHEHJJJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148B1790)
#define NHOFHEHJJJE_FLUSH_OFFSET UNITYSDK_OFFSET(0x148B18E0)
#define NHOFHEHJJJE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x148B1A20)
#define NHOFHEHJJJE_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x148B1730)
#define NHOFHEHJJJE_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x148B17D0)
#define NHOFHEHJJJE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x148B19E0)
#define NHOFHEHJJJE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x148B19A0)
#define NHOFHEHJJJE_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x148B1A30)

inline static constexpr unsigned int NHOFHEHJJJE_TypeDefinitionIndex = 73084;

	class NHOFHEHJJJE
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x38
		static ::System::Int32* StaticGet_AMFPBLBICAP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NHOFHEHJJJE")->GetStaticField(0xC580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHOFHEHJJJE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_ONDISABLE_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + NHOFHEHJJJE_SET_CONFIG_OFFSET))(this, a1);
		}

	};
