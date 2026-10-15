#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CommonShipEngineController_LEHCLLKCJJG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class AirshipEngineBehaviorMode;

#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_AEIKNGACFMM_OFFSET UNITYSDK_OFFSET(0xF0F20)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xF0F30)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_JNPLKDGJJMC_OFFSET UNITYSDK_OFFSET(0xF1150)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0xF0F10)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MIHPEKOJEKF_OFFSET UNITYSDK_OFFSET(0xF0FF0)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0xF0F50)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xF10B0)
#define COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xF1220)

inline static constexpr unsigned int CommonShipEngineController_GALCAGLCDOA_TypeDefinitionIndex = 47087;

	struct alignas(8) CommonShipEngineController_GALCAGLCDOA
	{
		::CommonShipEngineController_LEHCLLKCJJG JPDBDLEEHGK; // 0x10
		::CommonShipEngineController_LEHCLLKCJJG OGPNODHENKN; // 0x34
		::System::Single MINCCILIJNN; // 0x58
		::System::Single BJBIBMDPCNP; // 0x5C
		::AirshipEngineBehaviorMode* AKBNFGFFLFL; // 0x60
		::System::Single MHHABONOGGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MHHABONOGGA_OFFSET))(this);
		}

		::System::Single AEIKNGACFMM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_AEIKNGACFMM_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_CECMCADBMDE_OFFSET))(this);
		}

		::System::Single MPIBNJBBOKM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MPIBNJBBOKM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion MIHPEKOJEKF(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_MIHPEKOJEKF_OFFSET))(this, a1, a2);
		}

		::System::Void OHCJOIANPFG(::CommonShipEngineController_LEHCLLKCJJG a1)
		{
			return ((::System::Void(*)(::PVOID, ::CommonShipEngineController_LEHCLLKCJJG))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_OHCJOIANPFG_OFFSET))(this, a1);
		}

		::System::Void JNPLKDGJJMC(::AirshipEngineBehaviorMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AirshipEngineBehaviorMode*))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_JNPLKDGJJMC_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_GALCAGLCDOA_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

	};
