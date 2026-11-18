#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHDGMKGKDBP.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueTuple_2.h"

class AODIFLIBBJA;
class FDLKOJKNKCB;
class LKIABNLCKMK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define KNBHPCGCBEF_ABEHJLLNFIA_OFFSET UNITYSDK_OFFSET(0x15BA4C10)
#define KNBHPCGCBEF_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0x15BA5150)
#define KNBHPCGCBEF_BMLIGFCEFDC_OFFSET UNITYSDK_OFFSET(0x15BA2B50)
#define KNBHPCGCBEF_BPIJLJFKDLM_OFFSET UNITYSDK_OFFSET(0x15BA2990)
#define KNBHPCGCBEF_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x15BA4EE0)
#define KNBHPCGCBEF_CIHIPDJJAFL_OFFSET UNITYSDK_OFFSET(0x15BA32C0)
#define KNBHPCGCBEF_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x15BA3610)
#define KNBHPCGCBEF_DCEMGDKIONF_OFFSET UNITYSDK_OFFSET(0x15BA4E70)
#define KNBHPCGCBEF_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x15BA3760)
#define KNBHPCGCBEF_EGHJAFNPFIF_OFFSET UNITYSDK_OFFSET(0x15BA3EF0)
#define KNBHPCGCBEF_EJNFCBDJIFO_OFFSET UNITYSDK_OFFSET(0x15BA50F0)
#define KNBHPCGCBEF_FHJCCBLONEC_OFFSET UNITYSDK_OFFSET(0x15BA4690)
#define KNBHPCGCBEF_FLLCHCKINDG_OFFSET UNITYSDK_OFFSET(0x15BA5090)
#define KNBHPCGCBEF_FLMBCNMFOGF_OFFSET UNITYSDK_OFFSET(0x15BA2F40)
#define KNBHPCGCBEF_FNKLMHEFMHH_OFFSET UNITYSDK_OFFSET(0x15BA36F0)
#define KNBHPCGCBEF_GJCHBIFLIKA_OFFSET UNITYSDK_OFFSET(0x15BA4DA0)
#define KNBHPCGCBEF_ICGLKNOHEJD_OFFSET UNITYSDK_OFFSET(0x15BA5210)
#define KNBHPCGCBEF_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x15BA2F90)
#define KNBHPCGCBEF_JCHEGPOHNJE_OFFSET UNITYSDK_OFFSET(0x15BA2E70)
#define KNBHPCGCBEF_KAOENJBEMLJ_OFFSET UNITYSDK_OFFSET(0x15BA5280)
#define KNBHPCGCBEF_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x15BA35A0)
#define KNBHPCGCBEF_KHJLHJCCEKG_OFFSET UNITYSDK_OFFSET(0x15BA4160)
#define KNBHPCGCBEF_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x15BA33C0)
#define KNBHPCGCBEF_MCNNEJLEGPF_OFFSET UNITYSDK_OFFSET(0x15BA3270)
#define KNBHPCGCBEF_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x15BA28E0)
#define KNBHPCGCBEF_MOKLLLOOJEB_OFFSET UNITYSDK_OFFSET(0x15BA3310)
#define KNBHPCGCBEF_NAMCJIPBNLE_OFFSET UNITYSDK_OFFSET(0x15BA4C70)
#define KNBHPCGCBEF_NCDJKBPMMEJ_OFFSET UNITYSDK_OFFSET(0x15BA4FC0)
#define KNBHPCGCBEF_NMDACHDFDKC_OFFSET UNITYSDK_OFFSET(0x15BA3360)
#define KNBHPCGCBEF_NOPBIDFAILH_OFFSET UNITYSDK_OFFSET(0x15BA4E00)
#define KNBHPCGCBEF_OCMCJHBPENI_OFFSET UNITYSDK_OFFSET(0x15BA4040)
#define KNBHPCGCBEF_OHLACAGBJGB_OFFSET UNITYSDK_OFFSET(0x15BA4240)
#define KNBHPCGCBEF_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15BA4A00)
#define KNBHPCGCBEF_PEMLCDIODDD_OFFSET UNITYSDK_OFFSET(0x15BA4840)
#define KNBHPCGCBEF_PGONPMLNKAA_OFFSET UNITYSDK_OFFSET(0x15BA5020)
#define KNBHPCGCBEF_POMOLKCGEPF_OFFSET UNITYSDK_OFFSET(0x15BA4370)
#define KNBHPCGCBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA4320)

inline static constexpr unsigned int KNBHPCGCBEF_TypeDefinitionIndex = 90097;

class KNBHPCGCBEF : public ::KHDGMKGKDBP
{
public:
	// static const ::System::String* FONDNCKABNG; // 0x0
	::FDLKOJKNKCB* AOFPDBAEMDH; // 0x20
	::MoleMole::Config::UIConfigPhotoCamera* KKJEMADHBIB; // 0x28
	::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* ACOOMPOFAID; // 0x30
	::MoleMole::Cameras::FirstPersonCameraConfig* LBPDEJDDJPE; // 0x38
	::LKIABNLCKMK* DEGMIJJADNP; // 0x40
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x48
	::System::Boolean IOGINMLELPI; // 0x50
	::System::Byte _padding0[0x3];
	::System::Single EAMBLFBJMCG; // 0x54
	::System::Single ACGLJIJBKJN; // 0x58
	::UnityEngine::Vector2 PDFLMMNEBBL; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNKLMHEFMHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_FNKLMHEFMHH_OFFSET))(this);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void KIJAJIHPBDL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_KIJAJIHPBDL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_ONDRAG_OFFSET))(this, DIHNFECKHMD, NHODGOCLALJ);
	}

	::System::Void NAMCJIPBNLE(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Single HKICGJDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_NAMCJIPBNLE_OFFSET))(this, DIHNFECKHMD, HKICGJDBPDP);
	}

	::System::Single GJCHBIFLIKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_GJCHBIFLIKA_OFFSET))(this);
	}

	::System::Void FHJCCBLONEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_FHJCCBLONEC_OFFSET))(this);
	}

	::System::Void BMLIGFCEFDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_BMLIGFCEFDC_OFFSET))(this);
	}

	::System::Single NOPBIDFAILH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_NOPBIDFAILH_OFFSET))(this);
	}

	::System::Void BPIJLJFKDLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_BPIJLJFKDLM_OFFSET))(this);
	}

	::System::Void POMOLKCGEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_POMOLKCGEPF_OFFSET))(this);
	}

	::System::Void KHJLHJCCEKG(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_KHJLHJCCEKG_OFFSET))(this, GOBICEJCOAG);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> DCEMGDKIONF()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_DCEMGDKIONF_OFFSET))(this);
	}

	::System::Void EGHJAFNPFIF(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_EGHJAFNPFIF_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void JCHEGPOHNJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_JCHEGPOHNJE_OFFSET))(this);
	}

	::System::Single NCDJKBPMMEJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_NCDJKBPMMEJ_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> PGONPMLNKAA()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_PGONPMLNKAA_OFFSET))(this);
	}

	::System::Single FLLCHCKINDG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_FLLCHCKINDG_OFFSET))(this);
	}

	::System::Void EJNFCBDJIFO(::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_EJNFCBDJIFO_OFFSET))(this, ECMOEENIHME);
	}

	::System::Void MOKLLLOOJEB(::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* AKOHBBBCPIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_MOKLLLOOJEB_OFFSET))(this, AKOHBBBCPIF);
	}

	::System::Void NMDACHDFDKC(::LKIABNLCKMK* ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::LKIABNLCKMK*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_NMDACHDFDKC_OFFSET))(this, ECMOEENIHME);
	}

	::System::Single ICGLKNOHEJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_ICGLKNOHEJD_OFFSET))(this);
	}

	::System::Void MCNNEJLEGPF(::MoleMole::Config::UIConfigPhotoCamera* LNHPHIJFMNO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIConfigPhotoCamera*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_MCNNEJLEGPF_OFFSET))(this, LNHPHIJFMNO);
	}

	::System::Void OHLACAGBJGB(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_OHLACAGBJGB_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void CDPPOKOGPKB(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_CDPPOKOGPKB_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}

	::System::Void BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Single ABEHJLLNFIA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_ABEHJLLNFIA_OFFSET))(this);
	}

	::System::Void PEMLCDIODDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_PEMLCDIODDD_OFFSET))(this);
	}

	::System::Boolean OCMCJHBPENI(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_OCMCJHBPENI_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single KAOENJBEMLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_KAOENJBEMLJ_OFFSET))(this);
	}

	::System::Void FLMBCNMFOGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_FLMBCNMFOGF_OFFSET))(this);
	}

	::System::Void CIHIPDJJAFL(::MoleMole::Cameras::FirstPersonCameraConfig* EJJNGFCGNAK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FirstPersonCameraConfig*))((::PBYTE)hIl2Cpp + KNBHPCGCBEF_CIHIPDJJAFL_OFFSET))(this, EJJNGFCGNAK);
	}
};
