#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
class MEIGMBOLDOF;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class BillboardController_SceneLightExportData; }
namespace ScenenLightManager { class CharacterLineLightGroup_SceneLightExportData; }
namespace ScenenLightManager { class EasyFog_SceneLightExportData; }
namespace ScenenLightManager { class EngineLight_SceneLightExportData; }
namespace ScenenLightManager { class EngineReflectionProbe_SceneLightExportData; }
namespace ScenenLightManager { class IrradianceCache_SceneLightExportData; }
namespace ScenenLightManager { class LightWeightPrefab_SceneLightExportData; }
namespace ScenenLightManager { class LineGlow_SceneLightExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_SceneLightExportData; }
namespace ScenenLightManager { class LocalFogSphereInstance_SceneLightExportData; }
namespace ScenenLightManager { class VolumetricLightBeam_SceneLightExportData; }
namespace System { class Object; }
namespace System { class Type; }

#define ALGCEMGMJNE_ANMNJHLFIHJ_OFFSET UNITYSDK_OFFSET(0x15567C60)
#define ALGCEMGMJNE_BEJCFPLLNOH_OFFSET UNITYSDK_OFFSET(0x155681B0)
#define ALGCEMGMJNE_DGIOGNBHAMJ_OFFSET UNITYSDK_OFFSET(0x15568290)
#define ALGCEMGMJNE_DPKFEEEBEIH_OFFSET UNITYSDK_OFFSET(0x15568450)
#define ALGCEMGMJNE_EAPCKKLLHHP_OFFSET UNITYSDK_OFFSET(0x155684C0)
#define ALGCEMGMJNE_IKFGEBCGAOK_OFFSET UNITYSDK_OFFSET(0x15568300)
#define ALGCEMGMJNE_JGAOOBJLEME_OFFSET UNITYSDK_OFFSET(0x15568610)
#define ALGCEMGMJNE_LCJIMNLOEIJ_OFFSET UNITYSDK_OFFSET(0x15568530)
#define ALGCEMGMJNE_LEMKJMBEPEB_OFFSET UNITYSDK_OFFSET(0x155685A0)
#define ALGCEMGMJNE_LGIPMNHMOAM_OFFSET UNITYSDK_OFFSET(0x15568370)
#define ALGCEMGMJNE_MHOIECALMGP_OFFSET UNITYSDK_OFFSET(0x155683E0)
#define ALGCEMGMJNE_MNEAPDIBLNK_OFFSET UNITYSDK_OFFSET(0x15568680)
#define ALGCEMGMJNE_PFBOBLJJMBK_OFFSET UNITYSDK_OFFSET(0x15568220)
#define ALGCEMGMJNE_PNIKHAEHAHF_OFFSET UNITYSDK_OFFSET(0x155687D0)

	class ALGCEMGMJNE : public ::System::Object
	{
	public:
		static ::System::Void ANMNJHLFIHJ(::ScenenLightManager::LightTypeID a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::ScenenLightManager::LightTypeID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ALGCEMGMJNE_ANMNJHLFIHJ_OFFSET))(a1, a2, a3);
		}

		static ::ScenenLightManager::BillboardController_SceneLightExportData* BEJCFPLLNOH()
		{
			return ((::ScenenLightManager::BillboardController_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_BEJCFPLLNOH_OFFSET))();
		}

		static ::ScenenLightManager::VolumetricLightBeam_SceneLightExportData* PFBOBLJJMBK()
		{
			return ((::ScenenLightManager::VolumetricLightBeam_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_PFBOBLJJMBK_OFFSET))();
		}

		static ::ScenenLightManager::LocalAmbientVolume_SceneLightExportData* DGIOGNBHAMJ()
		{
			return ((::ScenenLightManager::LocalAmbientVolume_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_DGIOGNBHAMJ_OFFSET))();
		}

		static ::ScenenLightManager::EngineLight_SceneLightExportData* IKFGEBCGAOK()
		{
			return ((::ScenenLightManager::EngineLight_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_IKFGEBCGAOK_OFFSET))();
		}

		static ::ScenenLightManager::EngineReflectionProbe_SceneLightExportData* LGIPMNHMOAM()
		{
			return ((::ScenenLightManager::EngineReflectionProbe_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_LGIPMNHMOAM_OFFSET))();
		}

		static ::ScenenLightManager::CharacterLineLightGroup_SceneLightExportData* MHOIECALMGP()
		{
			return ((::ScenenLightManager::CharacterLineLightGroup_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_MHOIECALMGP_OFFSET))();
		}

		static ::ScenenLightManager::LocalFogSphereInstance_SceneLightExportData* DPKFEEEBEIH()
		{
			return ((::ScenenLightManager::LocalFogSphereInstance_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_DPKFEEEBEIH_OFFSET))();
		}

		static ::ScenenLightManager::LightWeightPrefab_SceneLightExportData* EAPCKKLLHHP()
		{
			return ((::ScenenLightManager::LightWeightPrefab_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_EAPCKKLLHHP_OFFSET))();
		}

		static ::ScenenLightManager::LineGlow_SceneLightExportData* LCJIMNLOEIJ()
		{
			return ((::ScenenLightManager::LineGlow_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_LCJIMNLOEIJ_OFFSET))();
		}

		static ::ScenenLightManager::EasyFog_SceneLightExportData* LEMKJMBEPEB()
		{
			return ((::ScenenLightManager::EasyFog_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_LEMKJMBEPEB_OFFSET))();
		}

		static ::ScenenLightManager::IrradianceCache_SceneLightExportData* JGAOOBJLEME()
		{
			return ((::ScenenLightManager::IrradianceCache_SceneLightExportData*(*)())((::PBYTE)hIl2Cpp + ALGCEMGMJNE_JGAOOBJLEME_OFFSET))();
		}

		static ::System::Type* MNEAPDIBLNK(::ScenenLightManager::LightTypeID a1)
		{
			return ((::System::Type*(*)(::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + ALGCEMGMJNE_MNEAPDIBLNK_OFFSET))(a1);
		}

		static ::System::Void PNIKHAEHAHF(::ScenenLightManager::LightTypeID a1, ::MEIGMBOLDOF* a2, ::ScenenLightManager::BaseComponentExportData* a3)
		{
			return ((::System::Void(*)(::ScenenLightManager::LightTypeID, ::MEIGMBOLDOF*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + ALGCEMGMJNE_PNIKHAEHAHF_OFFSET))(a1, a2, a3);
		}

	};
