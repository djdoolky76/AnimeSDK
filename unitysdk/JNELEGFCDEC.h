#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHDGMKGKDBP.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AODIFLIBBJA;
class DBHEAKNHENH;
class LKIABNLCKMK;
namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define JNELEGFCDEC_ABEHJLLNFIA_OFFSET UNITYSDK_OFFSET(0x17B52A50)
#define JNELEGFCDEC_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x17B52DD0)
#define JNELEGFCDEC_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x17B51F80)
#define JNELEGFCDEC_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x17B52200)
#define JNELEGFCDEC_DLHLFAAKDPP_OFFSET UNITYSDK_OFFSET(0x17B52730)
#define JNELEGFCDEC_EGHJAFNPFIF_OFFSET UNITYSDK_OFFSET(0x17B52D50)
#define JNELEGFCDEC_EJNFCBDJIFO_OFFSET UNITYSDK_OFFSET(0x17B53360)
#define JNELEGFCDEC_FHJCCBLONEC_OFFSET UNITYSDK_OFFSET(0x17B531B0)
#define JNELEGFCDEC_FLLCHCKINDG_OFFSET UNITYSDK_OFFSET(0x17B52B10)
#define JNELEGFCDEC_FLMBCNMFOGF_OFFSET UNITYSDK_OFFSET(0x17B516D0)
#define JNELEGFCDEC_FNKLMHEFMHH_OFFSET UNITYSDK_OFFSET(0x17B51FE0)
#define JNELEGFCDEC_GJCHBIFLIKA_OFFSET UNITYSDK_OFFSET(0x17B53580)
#define JNELEGFCDEC_HGEDDFPAJMM_OFFSET UNITYSDK_OFFSET(0x17B527E0)
#define JNELEGFCDEC_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x17B519C0)
#define JNELEGFCDEC_JCHEGPOHNJE_OFFSET UNITYSDK_OFFSET(0x17B518F0)
#define JNELEGFCDEC_KAOENJBEMLJ_OFFSET UNITYSDK_OFFSET(0x17B52B70)
#define JNELEGFCDEC_KDOMMHJCDMF_OFFSET UNITYSDK_OFFSET(0x17B52BD0)
#define JNELEGFCDEC_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x17B51F30)
#define JNELEGFCDEC_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x17B51C80)
#define JNELEGFCDEC_LOAIPPFMIKJ_OFFSET UNITYSDK_OFFSET(0x17B53520)
#define JNELEGFCDEC_LOIOCJBNHCI_OFFSET UNITYSDK_OFFSET(0x17B52680)
#define JNELEGFCDEC_MCNNEJLEGPF_OFFSET UNITYSDK_OFFSET(0x17B51BC0)
#define JNELEGFCDEC_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x17B51710)
#define JNELEGFCDEC_NAMCJIPBNLE_OFFSET UNITYSDK_OFFSET(0x17B52AB0)
#define JNELEGFCDEC_NMDACHDFDKC_OFFSET UNITYSDK_OFFSET(0x17B51C20)
#define JNELEGFCDEC_NOPBIDFAILH_OFFSET UNITYSDK_OFFSET(0x17B52CF0)
#define JNELEGFCDEC_ONDRAG_OFFSET UNITYSDK_OFFSET(0x17B52840)
#define JNELEGFCDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x17B51690)

inline static constexpr unsigned int JNELEGFCDEC_TypeDefinitionIndex = 88674;

class JNELEGFCDEC : public ::KHDGMKGKDBP
{
public:
	::LKIABNLCKMK* DEGMIJJADNP; // 0x20
	::MoleMole::ConfigCameraTelescope* DEIFAAKLEBO; // 0x28
	::MoleMole::Cameras::TelescopeCameraConfig* LBPDEJDDJPE; // 0x30
	::DBHEAKNHENH* AOFPDBAEMDH; // 0x38
	::System::Nullable_1<::System::Single> MHGJLCLMBDH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + JNELEGFCDEC_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + JNELEGFCDEC_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNELEGFCDEC_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNKLMHEFMHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_FNKLMHEFMHH_OFFSET))(this);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + JNELEGFCDEC_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_ONDRAG_OFFSET))(this, DIHNFECKHMD, NHODGOCLALJ);
	}

	::System::Void NAMCJIPBNLE(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Single HKICGJDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + JNELEGFCDEC_NAMCJIPBNLE_OFFSET))(this, DIHNFECKHMD, HKICGJDBPDP);
	}

	::System::Single FLLCHCKINDG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_FLLCHCKINDG_OFFSET))(this);
	}

	::System::Void FLMBCNMFOGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_FLMBCNMFOGF_OFFSET))(this);
	}

	::System::Single KAOENJBEMLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_KAOENJBEMLJ_OFFSET))(this);
	}

	::System::Void KDOMMHJCDMF(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_KDOMMHJCDMF_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void NMDACHDFDKC(::LKIABNLCKMK* ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::LKIABNLCKMK*))((::PBYTE)hIl2Cpp + JNELEGFCDEC_NMDACHDFDKC_OFFSET))(this, ECMOEENIHME);
	}

	::System::Void EGHJAFNPFIF(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_EGHJAFNPFIF_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single NOPBIDFAILH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_NOPBIDFAILH_OFFSET))(this);
	}

	::System::Boolean HGEDDFPAJMM(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_HGEDDFPAJMM_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void KIJAJIHPBDL(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single HKHIMAKFCGD, ::System::Single BKCDMONKCHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JNELEGFCDEC_KIJAJIHPBDL_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, HKHIMAKFCGD, BKCDMONKCHF);
	}

	::System::Boolean DLHLFAAKDPP(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_DLHLFAAKDPP_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void JCHEGPOHNJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_JCHEGPOHNJE_OFFSET))(this);
	}

	::System::Void EJNFCBDJIFO(::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNELEGFCDEC_EJNFCBDJIFO_OFFSET))(this, ECMOEENIHME);
	}

	::System::Single LOAIPPFMIKJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_LOAIPPFMIKJ_OFFSET))(this);
	}

	::System::Boolean LOIOCJBNHCI(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNELEGFCDEC_LOIOCJBNHCI_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void FHJCCBLONEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_FHJCCBLONEC_OFFSET))(this);
	}

	::System::Single GJCHBIFLIKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_GJCHBIFLIKA_OFFSET))(this);
	}

	::System::Void MCNNEJLEGPF(::MoleMole::ConfigCameraTelescope* LHPGHBICPMK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCameraTelescope*))((::PBYTE)hIl2Cpp + JNELEGFCDEC_MCNNEJLEGPF_OFFSET))(this, LHPGHBICPMK);
	}

	::System::Void CDPPOKOGPKB(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JNELEGFCDEC_CDPPOKOGPKB_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}

	::System::Single ABEHJLLNFIA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNELEGFCDEC_ABEHJLLNFIA_OFFSET))(this);
	}
};
