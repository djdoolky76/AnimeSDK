#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/WindTriggerData.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroWindZoneProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x136A0740)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1369F4B0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1369F3A0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x136A01C0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x1369FE70)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_EEPIDFNPIPG_OFFSET UNITYSDK_OFFSET(0x1369FF10)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x1369FF90)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x1369FFE0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x1369F8D0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1369F5B0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroWindZoneProperty_TypeDefinitionIndex = 50704;

	class EnviroWindZoneProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::WindTriggerData>* WindTriggerDatas; // 0x50
		::System::Boolean m_EnbaleGpuWindZone; // 0x58
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroWindZoneProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroWindZoneProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EEPIDFNPIPG(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_EEPIDFNPIPG_OFFSET))(this, a1);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

	};
}
