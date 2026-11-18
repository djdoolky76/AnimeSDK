#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKIIFHLPFG.h"
#include "unitysdk/KHDGMKGKDBP.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGGKHJLILDC;
class AODIFLIBBJA;
class DCBJLLONIAL;
class LKIABNLCKMK;
namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace MoleMole::Config { class ConfigCameraBezierSurface; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HEFGGNNJNAL_ABEHJLLNFIA_OFFSET UNITYSDK_OFFSET(0x19E081E0)
#define HEFGGNNJNAL_BDONHOPHPJO_OFFSET UNITYSDK_OFFSET(0x19E098F0)
#define HEFGGNNJNAL_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x19E077C0)
#define HEFGGNNJNAL_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x19E07860)
#define HEFGGNNJNAL_DLHLFAAKDPP_OFFSET UNITYSDK_OFFSET(0x19E07EE0)
#define HEFGGNNJNAL_EJNFCBDJIFO_OFFSET UNITYSDK_OFFSET(0x19E08C60)
#define HEFGGNNJNAL_ELGFDMCLEIN_OFFSET UNITYSDK_OFFSET(0x19E09760)
#define HEFGGNNJNAL_FEFKEFJGDPI_OFFSET UNITYSDK_OFFSET(0x19E08870)
#define HEFGGNNJNAL_FFBNOPAPMEJ_OFFSET UNITYSDK_OFFSET(0x19E094B0)
#define HEFGGNNJNAL_FHJCCBLONEC_OFFSET UNITYSDK_OFFSET(0x19E08970)
#define HEFGGNNJNAL_FLLCHCKINDG_OFFSET UNITYSDK_OFFSET(0x19E097C0)
#define HEFGGNNJNAL_FNKLMHEFMHH_OFFSET UNITYSDK_OFFSET(0x19E07820)
#define HEFGGNNJNAL_GADBAJEIODC_OFFSET UNITYSDK_OFFSET(0x19E09960)
#define HEFGGNNJNAL_GJCHBIFLIKA_OFFSET UNITYSDK_OFFSET(0x19E08FB0)
#define HEFGGNNJNAL_HAPBBAJAPFI_OFFSET UNITYSDK_OFFSET(0x19E09980)
#define HEFGGNNJNAL_HGEDDFPAJMM_OFFSET UNITYSDK_OFFSET(0x19E07FC0)
#define HEFGGNNJNAL_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x19E071F0)
#define HEFGGNNJNAL_IEBFDMICLAO_OFFSET UNITYSDK_OFFSET(0x19E09530)
#define HEFGGNNJNAL_INCJLLOPCAC_OFFSET UNITYSDK_OFFSET(0x19E09070)
#define HEFGGNNJNAL_JCHEGPOHNJE_OFFSET UNITYSDK_OFFSET(0x19E070B0)
#define HEFGGNNJNAL_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x19E095B0)
#define HEFGGNNJNAL_KAOENJBEMLJ_OFFSET UNITYSDK_OFFSET(0x19E09890)
#define HEFGGNNJNAL_KBMLHMENLHM_OFFSET UNITYSDK_OFFSET(0x19E083F0)
#define HEFGGNNJNAL_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x19E07770)
#define HEFGGNNJNAL_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x19E075B0)
#define HEFGGNNJNAL_LOAIPPFMIKJ_OFFSET UNITYSDK_OFFSET(0x19E084B0)
#define HEFGGNNJNAL_LOIOCJBNHCI_OFFSET UNITYSDK_OFFSET(0x19E07E00)
#define HEFGGNNJNAL_MFALBGHENDE_OFFSET UNITYSDK_OFFSET(0x19E09820)
#define HEFGGNNJNAL_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x19E07050)
#define HEFGGNNJNAL_NAMCJIPBNLE_OFFSET UNITYSDK_OFFSET(0x19E08380)
#define HEFGGNNJNAL_NCALAECAHFI_OFFSET UNITYSDK_OFFSET(0x19E087F0)
#define HEFGGNNJNAL_NMDACHDFDKC_OFFSET UNITYSDK_OFFSET(0x19E07550)
#define HEFGGNNJNAL_NOFLHANFNGD_OFFSET UNITYSDK_OFFSET(0x19E08910)
#define HEFGGNNJNAL_NOPBIDFAILH_OFFSET UNITYSDK_OFFSET(0x19E08650)
#define HEFGGNNJNAL_OKLJGIEGMFM_OFFSET UNITYSDK_OFFSET(0x19E09010)
#define HEFGGNNJNAL_ONCKHECIBHP_OFFSET UNITYSDK_OFFSET(0x19E07390)
#define HEFGGNNJNAL_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19E08020)
#define HEFGGNNJNAL_PKMEPCKCMCL_OFFSET UNITYSDK_OFFSET(0x19E08E10)
#define HEFGGNNJNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E083E0)

inline static constexpr unsigned int HEFGGNNJNAL_TypeDefinitionIndex = 59710;

class HEFGGNNJNAL : public ::KHDGMKGKDBP
{
public:
	::DCBJLLONIAL* GJGKALMHCGJ; // 0x20
	::MoleMole::Cameras::BezierSurfaceCameraConfig* KEPKCPLPCFF; // 0x28
	::LKIABNLCKMK* DEGMIJJADNP; // 0x30
	::AGGKHJLILDC* AOFPDBAEMDH; // 0x38
	::MoleMole::Config::ConfigCameraBezierSurface* LJECNHNPNJI; // 0x40
	::System::Int32 OHPOHLBHFCO; // 0x48
	::APKIIFHLPFG EONPLBHINBK; // 0x4C
	::System::Boolean BEBJNGHINOO; // 0x50
	::System::Boolean BOMNGDMJNEE; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNKLMHEFMHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_FNKLMHEFMHH_OFFSET))(this);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_ONDRAG_OFFSET))(this, DIHNFECKHMD, NHODGOCLALJ);
	}

	::System::Void NAMCJIPBNLE(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Single HKICGJDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_NAMCJIPBNLE_OFFSET))(this, DIHNFECKHMD, HKICGJDBPDP);
	}

	::System::Boolean DLHLFAAKDPP(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_DLHLFAAKDPP_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single LOAIPPFMIKJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_LOAIPPFMIKJ_OFFSET))(this);
	}

	::System::Single ABEHJLLNFIA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_ABEHJLLNFIA_OFFSET))(this);
	}

	::System::Single NOPBIDFAILH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_NOPBIDFAILH_OFFSET))(this);
	}

	::Foundation::Clamped_1<::System::Single> NCALAECAHFI()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_NCALAECAHFI_OFFSET))(this);
	}

	::System::Boolean HGEDDFPAJMM(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_HGEDDFPAJMM_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void NOFLHANFNGD(::System::Single& JMMDKACOKOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_NOFLHANFNGD_OFFSET))(this, JMMDKACOKOP);
	}

	::System::Void FHJCCBLONEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_FHJCCBLONEC_OFFSET))(this);
	}

	::System::Void EJNFCBDJIFO(::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_EJNFCBDJIFO_OFFSET))(this, ECMOEENIHME);
	}

	::System::Void JCHEGPOHNJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_JCHEGPOHNJE_OFFSET))(this);
	}

	::System::Single PKMEPCKCMCL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_PKMEPCKCMCL_OFFSET))(this);
	}

	::System::Single GJCHBIFLIKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_GJCHBIFLIKA_OFFSET))(this);
	}

	::System::Single OKLJGIEGMFM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_OKLJGIEGMFM_OFFSET))(this);
	}

	::System::Void INCJLLOPCAC(::System::Single IHHJJEBMJLI, ::System::Single LEPLKKJOMJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_INCJLLOPCAC_OFFSET))(this, IHHJJEBMJLI, LEPLKKJOMJA);
	}

	::Foundation::Clamped_1<::System::Single> FFBNOPAPMEJ()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_FFBNOPAPMEJ_OFFSET))(this);
	}

	::System::Void KBMLHMENLHM(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_KBMLHMENLHM_OFFSET))(this, GOBICEJCOAG);
	}

	::Foundation::Clamped_1<::System::Single> IEBFDMICLAO()
	{
		return ((::Foundation::Clamped_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_IEBFDMICLAO_OFFSET))(this);
	}

	::System::Void NMDACHDFDKC(::LKIABNLCKMK* ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::LKIABNLCKMK*))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_NMDACHDFDKC_OFFSET))(this, ECMOEENIHME);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Void FEFKEFJGDPI(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_FEFKEFJGDPI_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single ELGFDMCLEIN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_ELGFDMCLEIN_OFFSET))(this);
	}

	::System::Single FLLCHCKINDG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_FLLCHCKINDG_OFFSET))(this);
	}

	::System::Void MFALBGHENDE(::System::Single& JCPNDFAEOLI, ::System::Single& HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_MFALBGHENDE_OFFSET))(this, JCPNDFAEOLI, HFMHOELKCAJ);
	}

	::System::Single KAOENJBEMLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_KAOENJBEMLJ_OFFSET))(this);
	}

	::System::Boolean LOIOCJBNHCI(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_LOIOCJBNHCI_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void BDONHOPHPJO(::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_BDONHOPHPJO_OFFSET))(this, ECMOEENIHME);
	}

	::System::Boolean GADBAJEIODC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_GADBAJEIODC_OFFSET))(this);
	}

	::System::Void ONCKHECIBHP(::Foundation::AssetPath PJNJFACFJHP)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_ONCKHECIBHP_OFFSET))(this, PJNJFACFJHP);
	}

	::System::Single HAPBBAJAPFI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFGGNNJNAL_HAPBBAJAPFI_OFFSET))(this);
	}
};
