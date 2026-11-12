#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class BlockEnvExportData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPNFPHJPOMM_LKPMAAJCLGH_CEEJODBABKI_OFFSET UNITYSDK_OFFSET(0xBE1DE50)
#define KPNFPHJPOMM_LKPMAAJCLGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE1E030)
#define KPNFPHJPOMM_LKPMAAJCLGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE1C680)
#define KPNFPHJPOMM_LKPMAAJCLGH_DMIAKCFEDKH_OFFSET UNITYSDK_OFFSET(0xBE22360)
#define KPNFPHJPOMM_LKPMAAJCLGH_GFPDJBDCIBB_OFFSET UNITYSDK_OFFSET(0xBE1E6D0)
#define KPNFPHJPOMM_LKPMAAJCLGH_IKAAKPCOKIC_OFFSET UNITYSDK_OFFSET(0xBE1DCA0)
#define KPNFPHJPOMM_LKPMAAJCLGH_JKCCLCNKDON_OFFSET UNITYSDK_OFFSET(0xBE22300)
#define KPNFPHJPOMM_LKPMAAJCLGH_KDKAKDDHHPO_OFFSET UNITYSDK_OFFSET(0xBE22430)
#define KPNFPHJPOMM_LKPMAAJCLGH_MIFAOKMDILB_OFFSET UNITYSDK_OFFSET(0xBE22420)

inline static constexpr unsigned int KPNFPHJPOMM_LKPMAAJCLGH_TypeDefinitionIndex = 50256;

	class KPNFPHJPOMM_LKPMAAJCLGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ScenenLightManager::BaseSceneLightExportData*>* EEMOBGOMLGI; // 0x10
		::ScenenLightManager::BlockEnvExportData* HABAHHIJIAL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GLNOJJCNGHP; // 0x20
		::System::Boolean MCLOONOEHNE; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 GEMJKKCDGID; // 0x2C
		::System::Void _ctor(::ScenenLightManager::BlockEnvExportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_CTOR_OFFSET))(this, a1);
		}

		::System::Void JKCCLCNKDON(::ScenenLightManager::BlockEnvExportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_JKCCLCNKDON_OFFSET))(this, a1);
		}

		::ScenenLightManager::BaseSceneLightExportData* GFPDJBDCIBB(::System::Int32 a1)
		{
			return ((::ScenenLightManager::BaseSceneLightExportData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_GFPDJBDCIBB_OFFSET))(this, a1);
		}

		::System::Int32 IKAAKPCOKIC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_IKAAKPCOKIC_OFFSET))(this, a1);
		}

		::System::Void CEEJODBABKI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_CEEJODBABKI_OFFSET))(this, a1);
		}

		::System::Double DMIAKCFEDKH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_DMIAKCFEDKH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_DISPOSE_OFFSET))(this);
		}

		::System::Int32 MIFAOKMDILB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_MIFAOKMDILB_OFFSET))(this);
		}

		::System::Boolean KDKAKDDHHPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_LKPMAAJCLGH_KDKAKDDHHPO_OFFSET))(this);
		}

	};
