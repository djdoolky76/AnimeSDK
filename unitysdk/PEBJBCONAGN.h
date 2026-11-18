#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NNJAEJDDNIE;
class PIENEHNOECD;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEBJBCONAGN_ABDILGNFIMC_OFFSET UNITYSDK_OFFSET(0x178BF6E0)
#define PEBJBCONAGN_ACCBHMHDJON_OFFSET UNITYSDK_OFFSET(0x178BF5D0)
#define PEBJBCONAGN_AEPKDOHKGFG_OFFSET UNITYSDK_OFFSET(0x178BF860)
#define PEBJBCONAGN_ALHNDLPABHI_OFFSET UNITYSDK_OFFSET(0x178C0960)
#define PEBJBCONAGN_ANGIKDOOEIO_OFFSET UNITYSDK_OFFSET(0x178C0E20)
#define PEBJBCONAGN_BCIJGNNIGBP_OFFSET UNITYSDK_OFFSET(0x178BF560)
#define PEBJBCONAGN_BEEJPNJFNEO_OFFSET UNITYSDK_OFFSET(0x178C0340)
#define PEBJBCONAGN_BHEIFMDIKEP_OFFSET UNITYSDK_OFFSET(0x178BFBB0)
#define PEBJBCONAGN_CMAOLMLPNLK_OFFSET UNITYSDK_OFFSET(0x178C0BD0)
#define PEBJBCONAGN_DAJPHNFIDCO_OFFSET UNITYSDK_OFFSET(0x178BF7F0)
#define PEBJBCONAGN_DEEFBMAJPMA_OFFSET UNITYSDK_OFFSET(0x178C09F0)
#define PEBJBCONAGN_DHFDIDKPGKB_OFFSET UNITYSDK_OFFSET(0x178C04F0)
#define PEBJBCONAGN_DHLMEMPGBNJ_OFFSET UNITYSDK_OFFSET(0x178C0450)
#define PEBJBCONAGN_DILIGDDIIAF_OFFSET UNITYSDK_OFFSET(0x178BF640)
#define PEBJBCONAGN_FPBOPHGMPBB_OFFSET UNITYSDK_OFFSET(0x178C08F0)
#define PEBJBCONAGN_GOMJIMEBMCC_OFFSET UNITYSDK_OFFSET(0x178C09D0)
#define PEBJBCONAGN_IBNGDLBIJKA_OFFSET UNITYSDK_OFFSET(0x178BFA10)
#define PEBJBCONAGN_JEDMEOJBMND_OFFSET UNITYSDK_OFFSET(0x178C0020)
#define PEBJBCONAGN_JHEPEHDMKEA_OFFSET UNITYSDK_OFFSET(0x178C0590)
#define PEBJBCONAGN_JPLGKGAJFIE_OFFSET UNITYSDK_OFFSET(0x178BFBD0)
#define PEBJBCONAGN_KCKPMNJKECA_OFFSET UNITYSDK_OFFSET(0x178BFC60)
#define PEBJBCONAGN_KGGEIPKFMDI_OFFSET UNITYSDK_OFFSET(0x178C0200)
#define PEBJBCONAGN_KGMGDNIOHEG_OFFSET UNITYSDK_OFFSET(0x178C0B10)
#define PEBJBCONAGN_KKPCGMGCJAC_OFFSET UNITYSDK_OFFSET(0x178BFBC0)
#define PEBJBCONAGN_KLDAEJFEPPD_OFFSET UNITYSDK_OFFSET(0x178BFF70)
#define PEBJBCONAGN_LEOHOLODOBE_OFFSET UNITYSDK_OFFSET(0x178BFBF0)
#define PEBJBCONAGN_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x178BF760)
#define PEBJBCONAGN_LPPHBPKDIBJ_OFFSET UNITYSDK_OFFSET(0x178C02B0)
#define PEBJBCONAGN_MKPOBLLCGIP_OFFSET UNITYSDK_OFFSET(0x178C0B60)
#define PEBJBCONAGN_MNLEJDGGEJF_OFFSET UNITYSDK_OFFSET(0x178C0160)
#define PEBJBCONAGN_MODNMBFIKJB_OFFSET UNITYSDK_OFFSET(0x178C00C0)
#define PEBJBCONAGN_MPJELMKMMIA_OFFSET UNITYSDK_OFFSET(0x178BFD10)
#define PEBJBCONAGN_NDNAKHKMAON_1_OFFSET UNITYSDK_OFFSET(0x178C0A10)
#define PEBJBCONAGN_NDNAKHKMAON_OFFSET UNITYSDK_OFFSET(0x178C0610)
#define PEBJBCONAGN_NHFCLACOLPD_1_OFFSET UNITYSDK_OFFSET(0x178BF500)
#define PEBJBCONAGN_NHFCLACOLPD_OFFSET UNITYSDK_OFFSET(0x178BF4A0)
#define PEBJBCONAGN_NHLDDFLNLCO_OFFSET UNITYSDK_OFFSET(0x178BFDC0)
#define PEBJBCONAGN_ODHJNDDHALP_OFFSET UNITYSDK_OFFSET(0x178BFBE0)
#define PEBJBCONAGN_OEAKEBPPEBI_1_OFFSET UNITYSDK_OFFSET(0x178C0EA0)
#define PEBJBCONAGN_OEAKEBPPEBI_OFFSET UNITYSDK_OFFSET(0x178C0C50)
#define PEBJBCONAGN_OOIANPPDPCM_OFFSET UNITYSDK_OFFSET(0x178C03B0)
#define PEBJBCONAGN__CTOR_OFFSET UNITYSDK_OFFSET(0x178BF420)

inline static constexpr unsigned int PEBJBCONAGN_TypeDefinitionIndex = 75921;

class PEBJBCONAGN : public ::System::Object
{
public:
	::PIENEHNOECD* HOPDENFBMOC; // 0x10
	::NNJAEJDDNIE* KJNGEGGAKOP; // 0x18
	::System::Action_1<::MoleMole::UIBaseController*>* _FHILLAEGHNP_k__BackingField; // 0x20
	::System::Action_1<::MoleMole::UIBaseController*>* _DLMPJIPDADD_k__BackingField; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void NHFCLACOLPD(::MoleMole::UIWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_NHFCLACOLPD_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void NHFCLACOLPD_1(::MoleMole::UIWindowController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_NHFCLACOLPD_1_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void BCIJGNNIGBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_BCIJGNNIGBP_OFFSET))(this);
	}

	::System::Void ACCBHMHDJON(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEBJBCONAGN_ACCBHMHDJON_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void DILIGDDIIAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_DILIGDDIIAF_OFFSET))(this);
	}

	::System::Void ABDILGNFIMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_ABDILGNFIMC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void DAJPHNFIDCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_DAJPHNFIDCO_OFFSET))(this);
	}

	::MoleMole::UIBaseController* AEPKDOHKGFG(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PEBJBCONAGN_AEPKDOHKGFG_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::UIBaseController* IBNGDLBIJKA(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_IBNGDLBIJKA_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* BHEIFMDIKEP()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_BHEIFMDIKEP_OFFSET))(this);
	}

	::System::Void KKPCGMGCJAC(::System::Action_1<::MoleMole::UIBaseController*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_KKPCGMGCJAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* JPLGKGAJFIE()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_JPLGKGAJFIE_OFFSET))(this);
	}

	::System::Void ODHJNDDHALP(::System::Action_1<::MoleMole::UIBaseController*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_ODHJNDDHALP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LEOHOLODOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_LEOHOLODOBE_OFFSET))(this);
	}

	::System::Void KCKPMNJKECA(::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_KCKPMNJKECA_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void MPJELMKMMIA(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_MPJELMKMMIA_OFFSET))(this, IGAAKDOIPNN);
	}

	::MoleMole::MonoGamepadModule* NHLDDFLNLCO(::System::String* JFMECFLEHFI)
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_NHLDDFLNLCO_OFFSET))(this, JFMECFLEHFI);
	}

	::System::Void KLDAEJFEPPD(::System::UInt32& DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + PEBJBCONAGN_KLDAEJFEPPD_OFFSET))(this, DKOFFFNEFJC);
	}

	::System::Void JEDMEOJBMND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_JEDMEOJBMND_OFFSET))(this);
	}

	::System::Void MODNMBFIKJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_MODNMBFIKJB_OFFSET))(this);
	}

	::System::Void MNLEJDGGEJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_MNLEJDGGEJF_OFFSET))(this);
	}

	::System::Void KGGEIPKFMDI(::MoleMole::EUILayoutPlatform DIJLKOPNCGC, ::MoleMole::EUILayoutPlatform MJDMJGPODAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + PEBJBCONAGN_KGGEIPKFMDI_OFFSET))(this, DIJLKOPNCGC, MJDMJGPODAO);
	}

	::System::Void LPPHBPKDIBJ(::MoleMole::EUILayoutPlatform DIJLKOPNCGC, ::MoleMole::EUILayoutPlatform MJDMJGPODAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + PEBJBCONAGN_LPPHBPKDIBJ_OFFSET))(this, DIJLKOPNCGC, MJDMJGPODAO);
	}

	::System::Void BEEJPNJFNEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_BEEJPNJFNEO_OFFSET))(this);
	}

	::System::Void OOIANPPDPCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_OOIANPPDPCM_OFFSET))(this);
	}

	::System::Void DHLMEMPGBNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_DHLMEMPGBNJ_OFFSET))(this);
	}

	::System::Void DHFDIDKPGKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_DHFDIDKPGKB_OFFSET))(this);
	}

	::System::Boolean JHEPEHDMKEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_JHEPEHDMKEA_OFFSET))(this);
	}

	::System::Void NDNAKHKMAON(::MoleMole::UIWidgetController* PFJJKINKMMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_NDNAKHKMAON_OFFSET))(this, PFJJKINKMMP);
	}

	::System::Void FPBOPHGMPBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_FPBOPHGMPBB_OFFSET))(this);
	}

	::System::Void ALHNDLPABHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_ALHNDLPABHI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* GOMJIMEBMCC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_GOMJIMEBMCC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* DEEFBMAJPMA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_DEEFBMAJPMA_OFFSET))(this);
	}

	::System::Void NDNAKHKMAON_1(::MoleMole::UIWindowController* PFJJKINKMMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_NDNAKHKMAON_1_OFFSET))(this, PFJJKINKMMP);
	}

	::System::Void KGMGDNIOHEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_KGMGDNIOHEG_OFFSET))(this);
	}

	::System::Void MKPOBLLCGIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_MKPOBLLCGIP_OFFSET))(this);
	}

	::System::Boolean CMAOLMLPNLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBCONAGN_CMAOLMLPNLK_OFFSET))(this);
	}

	::System::Void OEAKEBPPEBI(::MoleMole::UIWindowController* PFJJKINKMMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_OEAKEBPPEBI_OFFSET))(this, PFJJKINKMMP);
	}

	::System::Void ANGIKDOOEIO(::UnityEngine::Vector3 LHBLECJEJEL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PEBJBCONAGN_ANGIKDOOEIO_OFFSET))(this, LHBLECJEJEL);
	}

	::System::Void OEAKEBPPEBI_1(::MoleMole::UIWidgetController* PFJJKINKMMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + PEBJBCONAGN_OEAKEBPPEBI_1_OFFSET))(this, PFJJKINKMMP);
	}
};
