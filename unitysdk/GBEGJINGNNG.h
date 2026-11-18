#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MLHGEECHDEM.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/UIAdaptData_NPJEAJJMFAP.h"
#include "unitysdk/MoleMole/UIAspectRatioHandler_JHEBNFCFBLO.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_OFHBMCHLDDC.h"
#include "unitysdk/NDBHEMBELFF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/GBEGJINGNNG_CNOONKGFEMH.h"
#include "unitysdk/GBEGJINGNNG_NPHNONPGMHF.h"
#include "unitysdk/System/Nullable_1.h"

class DJDDGKFCNAJ;
class EJFCDLOKJEC;
class GBEGJINGNNG_HJCMFLADNDK;
class GBEGJINGNNG_NECBHCIJMIN;
class GBEGJINGNNG_PACFDBBMMLO;
namespace MoleMole { class UIAdaptData; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIBlackEdge; }
namespace MoleMole { class UIButtonPosDummyDialogPopWindowController; }
namespace MoleMole { class UIFormalVersionTipsPopWindowController; }
namespace MoleMole { class UIHorizontalBlackEdge; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::UI { class Image; }

#define GBEGJINGNNG_AAPPOLNGOIM_OFFSET UNITYSDK_OFFSET(0x156FD590)
#define GBEGJINGNNG_ABJKNLBFMLE_OFFSET UNITYSDK_OFFSET(0x156F56E0)
#define GBEGJINGNNG_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x156F1260)
#define GBEGJINGNNG_ACFFJEBOJIE_OFFSET UNITYSDK_OFFSET(0x156F9210)
#define GBEGJINGNNG_ACGLMGFAKMP_OFFSET UNITYSDK_OFFSET(0x156EC260)
#define GBEGJINGNNG_ACHKDJGOMNM_OFFSET UNITYSDK_OFFSET(0x156F36B0)
#define GBEGJINGNNG_AJHFKIOHHOD_OFFSET UNITYSDK_OFFSET(0x156F01E0)
#define GBEGJINGNNG_AKKEOCBKGNF_OFFSET UNITYSDK_OFFSET(0x156F83E0)
#define GBEGJINGNNG_AMGJKNBAMBD_OFFSET UNITYSDK_OFFSET(0x156F7870)
#define GBEGJINGNNG_ANEHKPFLMIO_OFFSET UNITYSDK_OFFSET(0x156F1ED0)
#define GBEGJINGNNG_ANNFHPNGBGF_OFFSET UNITYSDK_OFFSET(0x156F99B0)
#define GBEGJINGNNG_BANHFPKIDDJ_OFFSET UNITYSDK_OFFSET(0x156FB970)
#define GBEGJINGNNG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x156F6E60)
#define GBEGJINGNNG_BCKLPFJJHIH_OFFSET UNITYSDK_OFFSET(0x156F7FB0)
#define GBEGJINGNNG_BEDPOGGDAKM_OFFSET UNITYSDK_OFFSET(0x156F4970)
#define GBEGJINGNNG_BEJMBJCNEHI_OFFSET UNITYSDK_OFFSET(0x156F2C50)
#define GBEGJINGNNG_BFHGCNIOHFF_OFFSET UNITYSDK_OFFSET(0x156F3350)
#define GBEGJINGNNG_BFLDILFBAMD_OFFSET UNITYSDK_OFFSET(0x156F13F0)
#define GBEGJINGNNG_BGDDGLLLPJL_OFFSET UNITYSDK_OFFSET(0x156F34C0)
#define GBEGJINGNNG_BNOGMKOPNBG_OFFSET UNITYSDK_OFFSET(0x156F47D0)
#define GBEGJINGNNG_CBDMKIBDAFI_OFFSET UNITYSDK_OFFSET(0x156FE550)
#define GBEGJINGNNG_CBJFAGDHMEN_OFFSET UNITYSDK_OFFSET(0x156FE630)
#define GBEGJINGNNG_CDAOHLOILIC_OFFSET UNITYSDK_OFFSET(0x156F22C0)
#define GBEGJINGNNG_CDILMEKPKIF_OFFSET UNITYSDK_OFFSET(0x156F4770)
#define GBEGJINGNNG_CEIJAGEPPOL_OFFSET UNITYSDK_OFFSET(0x156F61C0)
#define GBEGJINGNNG_CGKJJIGBDHF_OFFSET UNITYSDK_OFFSET(0x156EC4C0)
#define GBEGJINGNNG_CKGGMDKKGBH_OFFSET UNITYSDK_OFFSET(0x156EF240)
#define GBEGJINGNNG_CKIADIFIKOI_OFFSET UNITYSDK_OFFSET(0x156F0500)
#define GBEGJINGNNG_CKLBHKJKHDE_OFFSET UNITYSDK_OFFSET(0x156F8770)
#define GBEGJINGNNG_CMKPIKMLDEN_OFFSET UNITYSDK_OFFSET(0x156F7F70)
#define GBEGJINGNNG_DAKANLLENNG_OFFSET UNITYSDK_OFFSET(0x156F7E00)
#define GBEGJINGNNG_DBAEAEODAOJ_OFFSET UNITYSDK_OFFSET(0x156F2370)
#define GBEGJINGNNG_DFEKPBJADJK_OFFSET UNITYSDK_OFFSET(0x156EF710)
#define GBEGJINGNNG_DKFFCPNANHN_OFFSET UNITYSDK_OFFSET(0x156EC2F0)
#define GBEGJINGNNG_DLAAIGNCJCI_OFFSET UNITYSDK_OFFSET(0x156FC240)
#define GBEGJINGNNG_DLABFIFHGPJ_OFFSET UNITYSDK_OFFSET(0x156EFFA0)
#define GBEGJINGNNG_DNAICIMCFHL_OFFSET UNITYSDK_OFFSET(0x156F4DC0)
#define GBEGJINGNNG_DOGLJGCEDIP_OFFSET UNITYSDK_OFFSET(0x156F00C0)
#define GBEGJINGNNG_DOJKKFILBLF_OFFSET UNITYSDK_OFFSET(0x156FCC70)
#define GBEGJINGNNG_DOOKNHBAMMB_OFFSET UNITYSDK_OFFSET(0x156F7DA0)
#define GBEGJINGNNG_EBODFPAOLMN_OFFSET UNITYSDK_OFFSET(0x156FD420)
#define GBEGJINGNNG_EDFJHGGDBNN_OFFSET UNITYSDK_OFFSET(0x156FCF40)
#define GBEGJINGNNG_EDMNFIBKELC_OFFSET UNITYSDK_OFFSET(0x156EDAD0)
#define GBEGJINGNNG_EFDGGAAPMIH_OFFSET UNITYSDK_OFFSET(0x156F8A50)
#define GBEGJINGNNG_EGKPKAAAKJG_OFFSET UNITYSDK_OFFSET(0x156F4320)
#define GBEGJINGNNG_EHAAAHFPFCP_OFFSET UNITYSDK_OFFSET(0x156F4B60)
#define GBEGJINGNNG_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x156FE960)
#define GBEGJINGNNG_EMHFJAELGBA_OFFSET UNITYSDK_OFFSET(0x156ED810)
#define GBEGJINGNNG_EMKOLEELBHE_OFFSET UNITYSDK_OFFSET(0x156FE6D0)
#define GBEGJINGNNG_EPPLDNFGGPP_OFFSET UNITYSDK_OFFSET(0x156EE700)
#define GBEGJINGNNG_FBDCDBDBKFD_OFFSET UNITYSDK_OFFSET(0x156EC020)
#define GBEGJINGNNG_FDPGFJLAHEO_OFFSET UNITYSDK_OFFSET(0x156F0580)
#define GBEGJINGNNG_FEILNCAOGGM_OFFSET UNITYSDK_OFFSET(0x156F6A30)
#define GBEGJINGNNG_FFECNEGGJEE_OFFSET UNITYSDK_OFFSET(0x156FE240)
#define GBEGJINGNNG_FHABBJGBOAI_OFFSET UNITYSDK_OFFSET(0x156F9670)
#define GBEGJINGNNG_FHBNENMCDFG_OFFSET UNITYSDK_OFFSET(0x156F59D0)
#define GBEGJINGNNG_FMKPDOBNNHA_OFFSET UNITYSDK_OFFSET(0x156ED960)
#define GBEGJINGNNG_FNDEIHOHBBP_OFFSET UNITYSDK_OFFSET(0x156F5450)
#define GBEGJINGNNG_FNEOFNJGOCB_OFFSET UNITYSDK_OFFSET(0x156F5C80)
#define GBEGJINGNNG_GBKPGFOPKCB_OFFSET UNITYSDK_OFFSET(0x156F6560)
#define GBEGJINGNNG_GCELNGGJLDF_OFFSET UNITYSDK_OFFSET(0x156F4BA0)
#define GBEGJINGNNG_GCJGMJGEGHN_OFFSET UNITYSDK_OFFSET(0x156F04A0)
#define GBEGJINGNNG_GEBIFDIOKIK_OFFSET UNITYSDK_OFFSET(0x156F1B10)
#define GBEGJINGNNG_GIEOJNEICLE_OFFSET UNITYSDK_OFFSET(0x156F5A10)
#define GBEGJINGNNG_GJKOMKBALAI_OFFSET UNITYSDK_OFFSET(0x156FD730)
#define GBEGJINGNNG_GKKLCJAFOHH_OFFSET UNITYSDK_OFFSET(0x156F0340)
#define GBEGJINGNNG_GPPLEGKBMDM_OFFSET UNITYSDK_OFFSET(0x156F49B0)
#define GBEGJINGNNG_HBBNFAHCKOH_OFFSET UNITYSDK_OFFSET(0x156F5530)
#define GBEGJINGNNG_HBMELMHANFA_OFFSET UNITYSDK_OFFSET(0x156F2CB0)
#define GBEGJINGNNG_HBPDJFPPGJE_OFFSET UNITYSDK_OFFSET(0x156F42D0)
#define GBEGJINGNNG_HEHLCMCFJNP_1_OFFSET UNITYSDK_OFFSET(0x156EBEC0)
#define GBEGJINGNNG_HEHLCMCFJNP_OFFSET UNITYSDK_OFFSET(0x156EBD40)
#define GBEGJINGNNG_HJJPGDLDELI_OFFSET UNITYSDK_OFFSET(0x156F17A0)
#define GBEGJINGNNG_HKIGPLFBBKJ_OFFSET UNITYSDK_OFFSET(0x156FB6C0)
#define GBEGJINGNNG_HMLJIHBOKNP_OFFSET UNITYSDK_OFFSET(0x156F2BF0)
#define GBEGJINGNNG_HNCELEAMMEK_OFFSET UNITYSDK_OFFSET(0x156FC500)
#define GBEGJINGNNG_HPLBHJMLMNH_OFFSET UNITYSDK_OFFSET(0x156F1650)
#define GBEGJINGNNG_HPLOFADNFPJ_OFFSET UNITYSDK_OFFSET(0x156F5B90)
#define GBEGJINGNNG_IBJLCAFJHCO_OFFSET UNITYSDK_OFFSET(0x156FDC10)
#define GBEGJINGNNG_IBPNFAJIDHE_OFFSET UNITYSDK_OFFSET(0x156EC3B0)
#define GBEGJINGNNG_IDMNEHIIFAP_OFFSET UNITYSDK_OFFSET(0x156FD4A0)
#define GBEGJINGNNG_IDPBLBNDIIL_OFFSET UNITYSDK_OFFSET(0x156F32C0)
#define GBEGJINGNNG_IEHPPJGBGML_OFFSET UNITYSDK_OFFSET(0x156EF8D0)
#define GBEGJINGNNG_IFCFEHGFBIC_OFFSET UNITYSDK_OFFSET(0x156F1D00)
#define GBEGJINGNNG_IHAMPCGHAPJ_OFFSET UNITYSDK_OFFSET(0x156EFB00)
#define GBEGJINGNNG_IKAMLKBLPAD_OFFSET UNITYSDK_OFFSET(0x156F28C0)
#define GBEGJINGNNG_IPPJFLDCONK_OFFSET UNITYSDK_OFFSET(0x156EF820)
#define GBEGJINGNNG_JBHFHDNLIAP_OFFSET UNITYSDK_OFFSET(0x156FC090)
#define GBEGJINGNNG_JECNMMJNFGO_OFFSET UNITYSDK_OFFSET(0x156ECB20)
#define GBEGJINGNNG_JEMHJKBKABM_OFFSET UNITYSDK_OFFSET(0x156EC100)
#define GBEGJINGNNG_JGJADJOFGEE_OFFSET UNITYSDK_OFFSET(0x156FFD50)
#define GBEGJINGNNG_JHGEJHLGLKJ_OFFSET UNITYSDK_OFFSET(0x156F9D20)
#define GBEGJINGNNG_JHIKDBDKCFG_OFFSET UNITYSDK_OFFSET(0x156FD500)
#define GBEGJINGNNG_JJCMHNOMLKM_OFFSET UNITYSDK_OFFSET(0x156ECFD0)
#define GBEGJINGNNG_JLKIHKMECLH_OFFSET UNITYSDK_OFFSET(0x156FD790)
#define GBEGJINGNNG_JLPIJKFGLOF_OFFSET UNITYSDK_OFFSET(0x156F4A10)
#define GBEGJINGNNG_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x156FC9A0)
#define GBEGJINGNNG_JMOMCHKKKHD_OFFSET UNITYSDK_OFFSET(0x156FE0B0)
#define GBEGJINGNNG_JNDACLNDEPO_OFFSET UNITYSDK_OFFSET(0x156F81D0)
#define GBEGJINGNNG_JPJJHMPGOEN_OFFSET UNITYSDK_OFFSET(0x156F7550)
#define GBEGJINGNNG_JPLNDKFLPFN_OFFSET UNITYSDK_OFFSET(0x156F0F30)
#define GBEGJINGNNG_KALNNDHOOLN_OFFSET UNITYSDK_OFFSET(0x156EF010)
#define GBEGJINGNNG_KANKMHIABGN_OFFSET UNITYSDK_OFFSET(0x156F9550)
#define GBEGJINGNNG_KCKHMMMPMCO_OFFSET UNITYSDK_OFFSET(0x156FE470)
#define GBEGJINGNNG_KDFKMNNHCNJ_OFFSET UNITYSDK_OFFSET(0x156F2660)
#define GBEGJINGNNG_KDIOJLPKLEH_OFFSET UNITYSDK_OFFSET(0x156F5620)
#define GBEGJINGNNG_KEMCGJFJNMD_OFFSET UNITYSDK_OFFSET(0x156F6D80)
#define GBEGJINGNNG_KFNKPJOHLMG_OFFSET UNITYSDK_OFFSET(0x156F7B30)
#define GBEGJINGNNG_KGIOKLDIAGP_OFFSET UNITYSDK_OFFSET(0x156F5AA0)
#define GBEGJINGNNG_KHEKBGMEOHK_OFFSET UNITYSDK_OFFSET(0x156F08B0)
#define GBEGJINGNNG_KIIHAGFCLGB_OFFSET UNITYSDK_OFFSET(0x156F4500)
#define GBEGJINGNNG_KNCMGJLEEOJ_OFFSET UNITYSDK_OFFSET(0x156F5FB0)
#define GBEGJINGNNG_KNMBIEDFJEL_OFFSET UNITYSDK_OFFSET(0x156FB450)
#define GBEGJINGNNG_KPENDFCOOLJ_OFFSET UNITYSDK_OFFSET(0x156FA380)
#define GBEGJINGNNG_KPMDAPHFFLO_OFFSET UNITYSDK_OFFSET(0x156F8FC0)
#define GBEGJINGNNG_LCCMCNIMION_OFFSET UNITYSDK_OFFSET(0x156F9AC0)
#define GBEGJINGNNG_LEOMEKBKKBI_OFFSET UNITYSDK_OFFSET(0x156FBFD0)
#define GBEGJINGNNG_LGAMLBDFFNI_OFFSET UNITYSDK_OFFSET(0x156F7CD0)
#define GBEGJINGNNG_LHIJHKMIEBO_OFFSET UNITYSDK_OFFSET(0x156FA1E0)
#define GBEGJINGNNG_LNMEGJFDFEL_OFFSET UNITYSDK_OFFSET(0x156EC770)
#define GBEGJINGNNG_LOLLHCJMHJD_OFFSET UNITYSDK_OFFSET(0x156FCB50)
#define GBEGJINGNNG_LPCKKCBOEFA_OFFSET UNITYSDK_OFFSET(0x156FCEC0)
#define GBEGJINGNNG_LPKKDNFPNCA_OFFSET UNITYSDK_OFFSET(0x156FA640)
#define GBEGJINGNNG_MBFLMHMPGHG_OFFSET UNITYSDK_OFFSET(0x156FC1C0)
#define GBEGJINGNNG_MBHEPNMIALA_OFFSET UNITYSDK_OFFSET(0x156F6B50)
#define GBEGJINGNNG_MFDGCJLHOKN_OFFSET UNITYSDK_OFFSET(0x156FFAF0)
#define GBEGJINGNNG_MKCKNIJOPPH_OFFSET UNITYSDK_OFFSET(0x156EE470)
#define GBEGJINGNNG_MKGMEBFEHBD_OFFSET UNITYSDK_OFFSET(0x156EF610)
#define GBEGJINGNNG_MLKLFDIGMNO_1_OFFSET UNITYSDK_OFFSET(0x156F3D30)
#define GBEGJINGNNG_MLKLFDIGMNO_OFFSET UNITYSDK_OFFSET(0x156F3BC0)
#define GBEGJINGNNG_MNBLHEDLLFM_OFFSET UNITYSDK_OFFSET(0x156F1E50)
#define GBEGJINGNNG_NACHPJFDJAL_OFFSET UNITYSDK_OFFSET(0x156F06F0)
#define GBEGJINGNNG_NACMMHEDLLO_OFFSET UNITYSDK_OFFSET(0x156EF070)
#define GBEGJINGNNG_NAFJLPLDNII_OFFSET UNITYSDK_OFFSET(0x156F6F80)
#define GBEGJINGNNG_NDAANDMDMHB_OFFSET UNITYSDK_OFFSET(0x156ED350)
#define GBEGJINGNNG_NJLFAJHNNGB_OFFSET UNITYSDK_OFFSET(0x156FD200)
#define GBEGJINGNNG_NLAGEOBGOGH_OFFSET UNITYSDK_OFFSET(0x156EEDB0)
#define GBEGJINGNNG_NLFIJAJHOAD_OFFSET UNITYSDK_OFFSET(0x156F0A30)
#define GBEGJINGNNG_NOBNCANEJFH_OFFSET UNITYSDK_OFFSET(0x156F2600)
#define GBEGJINGNNG_NOGEHKBOIIA_OFFSET UNITYSDK_OFFSET(0x156F53F0)
#define GBEGJINGNNG_NOJHFFLPAPI_OFFSET UNITYSDK_OFFSET(0x156F13B0)
#define GBEGJINGNNG_OABIGONMINJ_OFFSET UNITYSDK_OFFSET(0x156F52E0)
#define GBEGJINGNNG_ODEKLNLAEHG_1_OFFSET UNITYSDK_OFFSET(0x156F5170)
#define GBEGJINGNNG_ODEKLNLAEHG_OFFSET UNITYSDK_OFFSET(0x156F50F0)
#define GBEGJINGNNG_ODLOFCNPCJE_OFFSET UNITYSDK_OFFSET(0x156F5830)
#define GBEGJINGNNG_OIPMDKBBCON_OFFSET UNITYSDK_OFFSET(0x156FB880)
#define GBEGJINGNNG_OLJBCLPBIEB_OFFSET UNITYSDK_OFFSET(0x156F8940)
#define GBEGJINGNNG_OLPBFLIHMGP_OFFSET UNITYSDK_OFFSET(0x156F4010)
#define GBEGJINGNNG_OLPHLGKGILE_OFFSET UNITYSDK_OFFSET(0x156F9750)
#define GBEGJINGNNG_PBHLMHINOJB_OFFSET UNITYSDK_OFFSET(0x156F1370)
#define GBEGJINGNNG_PDEMKGOPNBL_OFFSET UNITYSDK_OFFSET(0x156F9A10)
#define GBEGJINGNNG_PFCEIPINBGL_OFFSET UNITYSDK_OFFSET(0x156F2200)
#define GBEGJINGNNG_PHKFODPMLMP_OFFSET UNITYSDK_OFFSET(0x156F8530)
#define GBEGJINGNNG_PICIALJHCDP_OFFSET UNITYSDK_OFFSET(0x156EF1C0)
#define GBEGJINGNNG_PJEMILIAPKB_OFFSET UNITYSDK_OFFSET(0x156EEA80)
#define GBEGJINGNNG_PKDFOCFFBOD_OFFSET UNITYSDK_OFFSET(0x156FFC10)
#define GBEGJINGNNG_PKIAMDJPDHA_OFFSET UNITYSDK_OFFSET(0x156EF2A0)
#define GBEGJINGNNG_PMCEGKOGLCC_OFFSET UNITYSDK_OFFSET(0x156F96D0)
#define GBEGJINGNNG_PNDECEOGMGN_OFFSET UNITYSDK_OFFSET(0x156F62E0)
#define GBEGJINGNNG_PPKEFCBFFKO_OFFSET UNITYSDK_OFFSET(0x156F1C50)
#define GBEGJINGNNG__CCTOR_OFFSET UNITYSDK_OFFSET(0x156EB360)
#define GBEGJINGNNG__CTOR_OFFSET UNITYSDK_OFFSET(0x156EB350)

inline static constexpr unsigned int GBEGJINGNNG_TypeDefinitionIndex = 59374;

class GBEGJINGNNG : public ::System::Object
{
public:
	static ::GBEGJINGNNG_NECBHCIJMIN** StaticGet__JPHFHAMAOLL_k__BackingField()
	{
		return (::GBEGJINGNNG_NECBHCIJMIN**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30CF0);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_EBJHDKGBCBO()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30CF8);
	}
	static ::MoleMole::UIButtonPosDummyDialogPopWindowController** StaticGet_IDKKCNMMCEI()
	{
		return (::MoleMole::UIButtonPosDummyDialogPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D18);
	}
	static ::System::String** StaticGet_NHLCNHLICAP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D20);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_DPAHHGCEFII()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D28);
	}
	static ::System::String** StaticGet_CKEKPGMPJOI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D30);
	}
	static ::UnityEngine::Camera** StaticGet_EHMDBGDPHPI()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D38);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_JKAHCGNPELD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D40);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_OGJODNCGHGJ()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D48);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_BONILMNABNI()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D50);
	}
	static ::UnityEngine::Material** StaticGet_GOFNLNBABBA()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D70);
	}
	static ::UnityEngine::Material** StaticGet_NAFIIGJOGIB()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D78);
	}
	static ::EJFCDLOKJEC** StaticGet_NLNAGJCEJCI()
	{
		return (::EJFCDLOKJEC**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D80);
	}
	static ::UnityEngine::EventSystems::EventSystem** StaticGet_HJJCOCAMIAC()
	{
		return (::UnityEngine::EventSystems::EventSystem**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D88);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_PHCILDPHAPK()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D90);
	}
	static ::DJDDGKFCNAJ** StaticGet__BJKGGHGOAAI_k__BackingField()
	{
		return (::DJDDGKFCNAJ**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30D98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_IOPIEJAFJGJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DA0);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_EMPNPODICBL()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DA8);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_EKCNFALGABO()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DB0);
	}
	static ::UnityEngine::GameObject** StaticGet_NNPFGKLHADP()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>** StaticGet_BPAGHGALAAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DD8);
	}
	static ::System::String** StaticGet_HILDGAJDNEL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::MLHGEECHDEM, ::System::Boolean>** StaticGet_NOPFLDMHOID()
	{
		return (::System::Collections::Generic::Dictionary_2<::MLHGEECHDEM, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DE8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_GBIPAACCLDO()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_DNGMNNKHFAM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30DF8);
	}
	static ::UnityEngine::Material** StaticGet_EAPMCLMHLNC()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E00);
	}
	static ::UnityEngine::Material** StaticGet_GHFPDHPNCOH()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E08);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>** StaticGet_ANOCAICKCKN()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Canvas*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E10);
	}
	static ::UnityEngine::Rendering::Volume** StaticGet_EDPGBJHCJHF()
	{
		return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E18);
	}
	static ::UnityEngine::Material** StaticGet_HLOPGNCBLDE()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E20);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_FEHAGJENOID()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E28);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_MFMHKGLPPJO()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E30);
	}
	static ::GBEGJINGNNG_HJCMFLADNDK** StaticGet_NBLFDIPKELD()
	{
		return (::GBEGJINGNNG_HJCMFLADNDK**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E38);
	}
	static ::System::Collections::Generic::Dictionary_2<::NDBHEMBELFF, ::System::Boolean>** StaticGet_FAPCKNKGACF()
	{
		return (::System::Collections::Generic::Dictionary_2<::NDBHEMBELFF, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E40);
	}
	static ::UnityEngine::Transform** StaticGet_GPONLFFPBOK()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E48);
	}
	static ::System::String** StaticGet_CCEIKAIGOKL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E50);
	}
	static ::MoleMole::UIFormalVersionTipsPopWindowController** StaticGet_MMOMJNBNBFG()
	{
		return (::MoleMole::UIFormalVersionTipsPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E58);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_DGGEAOKPMBF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E60);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_JBOEODHLHAG()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E68);
	}
	static ::UnityEngine::Camera** StaticGet_LIINIMMHOPM()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E88);
	}
	static ::UnityEngine::RectTransform** StaticGet_GKNDGBJGIND()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E90);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_IHFKENGJKHK()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30E98);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_MIGJBDHBGAD()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30EA0);
	}
	static ::UnityEngine::UI::Image** StaticGet__GPNGPKLCBNJ_k__BackingField()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30EA8);
	}
	static ::System::String** StaticGet_BBIJBEMODCI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0x30EB0);
	}
	static ::UnityEngine::Vector2* StaticGet_EAFOPLIBEMD()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA550);
	}
	static ::System::Single* StaticGet_DGBBKIKHHNO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA558);
	}
	static ::UnityEngine::Vector2* StaticGet_IEHAJKBIJBG()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA55C);
	}
	static ::System::Boolean* StaticGet_OCGPNMHEILL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA564);
	}
	static ::System::Boolean* StaticGet_OGAPJDCPPGP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA565);
	}
	static ::System::Boolean* StaticGet_NMJHAMGDEDM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA566);
	}
	static ::System::Boolean* StaticGet_CBFIEIJIFMJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA567);
	}
	static ::System::Boolean* StaticGet_KGCCLLLMKOD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA568);
	}
	static ::System::Boolean* StaticGet_CIGLOOHHPBE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA569);
	}
	static ::System::Boolean* StaticGet_GBKLLOAMGEA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA56A);
	}
	static ::System::Int32* StaticGet_BOCDJEKHMPL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA56C);
	}
	static ::System::Boolean* StaticGet_BLDMOKNNCCH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA570);
	}
	static ::System::Boolean* StaticGet_ENNMMMOKOOA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA571);
	}
	static ::System::Boolean* StaticGet_NGBFAJNALPA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA572);
	}
	static ::System::Boolean* StaticGet_BIJNAJICIHF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA573);
	}
	static ::MLIGDOAGEAI* StaticGet_LPBKMPNLPKI()
	{
		return (::MLIGDOAGEAI*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA574);
	}
	static ::System::Single* StaticGet_BLBBJBBGDDJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GBEGJINGNNG_TypeDefinitionIndex)->GetStaticField(0xA578);
	}
	// static const ::System::Int32 OFPDNONPEFI = 0x0; // 0x0
	// static const ::System::Int32 BBLLPMJPBBK = 0x1; // 0x0
	// static const ::System::Int32 HFPAJHKPBJO = 0x1E; // 0x0
	// static const ::System::Int32 PKNJKMJJNMB = 0x3C; // 0x0
	// static const ::System::Int32 GJNKMGPKPLE = 0x1; // 0x0
	// static const ::System::Int32 HBEGJIEKGPB = 0x64; // 0x0
	// static const ::System::Int32 PCPKBPEBCKO = 0x3E8; // 0x0
	// static const ::System::String* MEONDJAPFCA; // 0x0
	// static const ::System::String* GKLIEGMPJKG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG__CCTOR_OFFSET))();
	}

	static ::System::Void HEHLCMCFJNP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_HEHLCMCFJNP_OFFSET))();
	}

	static ::System::Void FBDCDBDBKFD(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FBDCDBDBKFD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JEMHJKBKABM(::MoleMole::EUILayoutPlatform EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JEMHJKBKABM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean ACGLMGFAKMP(::MoleMole::EUILayoutPlatform NCLPPLGFCMO)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ACGLMGFAKMP_OFFSET))(NCLPPLGFCMO);
	}

	static ::System::Void IBPNFAJIDHE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_IBPNFAJIDHE_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform LNMEGJFDFEL()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_LNMEGJFDFEL_OFFSET))();
	}

	static ::UnityEngine::RectTransform* JJCMHNOMLKM(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JJCMHNOMLKM_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void MKCKNIJOPPH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_MKCKNIJOPPH_OFFSET))();
	}

	static ::System::Nullable_1<::System::Int32> EPPLDNFGGPP(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EPPLDNFGGPP_OFFSET))(LNEEMAGIHLB);
	}

	static ::System::Void PJEMILIAPKB(::System::Int32 EEGBEFGJJBM, ::MoleMole::UIAdaptData_NPJEAJJMFAP GEJCKFFFKCL, ::System::String* JLGKFMOBIPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_NPJEAJJMFAP, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PJEMILIAPKB_OFFSET))(EEGBEFGJJBM, GEJCKFFFKCL, JLGKFMOBIPK);
	}

	static ::System::Void NLAGEOBGOGH(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NLAGEOBGOGH_OFFSET))(JKBLDFBGBPK);
	}

	static ::GBEGJINGNNG_NECBHCIJMIN* KALNNDHOOLN()
	{
		return ((::GBEGJINGNNG_NECBHCIJMIN*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KALNNDHOOLN_OFFSET))();
	}

	static ::System::Boolean NACMMHEDLLO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_NACMMHEDLLO_OFFSET))();
	}

	static ::UnityEngine::Camera* PICIALJHCDP()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_PICIALJHCDP_OFFSET))();
	}

	static ::System::Boolean CKGGMDKKGBH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_CKGGMDKKGBH_OFFSET))();
	}

	static ::System::Void PKIAMDJPDHA(::System::Int32 JHFKDGBCOBA, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PKIAMDJPDHA_OFFSET))(JHFKDGBCOBA, AELLPLBJELA);
	}

	static ::System::Void DFEKPBJADJK(::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_DFEKPBJADJK_OFFSET))(ELNJNJAIFGE);
	}

	static ::MoleMole::UIAspectRatioHandler_JHEBNFCFBLO EMHFJAELGBA(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::MoleMole::UIAspectRatioHandler_JHEBNFCFBLO(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EMHFJAELGBA_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void IEHPPJGBGML()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_IEHPPJGBGML_OFFSET))();
	}

	static ::System::Void IHAMPCGHAPJ(::MoleMole::EUILayoutPlatform NCLPPLGFCMO, ::System::Boolean GOOLDDLGLPK, ::MoleMole::EUILayoutPlatform OEIHMLHKBMP)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IHAMPCGHAPJ_OFFSET))(NCLPPLGFCMO, GOOLDDLGLPK, OEIHMLHKBMP);
	}

	static ::System::Void GCJGMJGEGHN(::System::Boolean FAPPGGNBIIO, ::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::String* BANLIECIPNI, ::System::Single IENOAGOAHMO)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GCJGMJGEGHN_OFFSET))(FAPPGGNBIIO, IHIMDLELPAG, BANLIECIPNI, IENOAGOAHMO);
	}

	static ::System::Void CKIADIFIKOI(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CKIADIFIKOI_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void NACHPJFDJAL(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NACHPJFDJAL_OFFSET))(FBILHHBPEHD);
	}

	static ::System::Void KHEKBGMEOHK(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KHEKBGMEOHK_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_ACBAKBHIMJC_OFFSET))();
	}

	static ::UnityEngine::Material* BFLDILFBAMD()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BFLDILFBAMD_OFFSET))();
	}

	static ::System::Void CGKJJIGBDHF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_CGKJJIGBDHF_OFFSET))();
	}

	static ::System::Void HPLBHJMLMNH(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HPLBHJMLMNH_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Int32 GEBIFDIOKIK(::System::String* AELLPLBJELA)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GEBIFDIOKIK_OFFSET))(AELLPLBJELA);
	}

	static ::System::Boolean PPKEFCBFFKO(::System::Int32 ENJGNHIOECH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PPKEFCBFFKO_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Void MNBLHEDLLFM(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MNBLHEDLLFM_OFFSET))(IAPKABMDJNF);
	}

	static ::System::Void ANEHKPFLMIO(::System::Boolean FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ANEHKPFLMIO_OFFSET))(FCPCLIJNDLA);
	}

	static ::UnityEngine::RectTransform* PFCEIPINBGL(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PFCEIPINBGL_OFFSET))(LNEEMAGIHLB);
	}

	static ::System::Void DBAEAEODAOJ(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_DBAEAEODAOJ_OFFSET))(FIPHFGHNNBE);
	}

	static ::System::Boolean NOBNCANEJFH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_NOBNCANEJFH_OFFSET))();
	}

	static ::UnityEngine::Material* KDFKMNNHCNJ()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KDFKMNNHCNJ_OFFSET))();
	}

	static ::System::Void IKAMLKBLPAD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_IKAMLKBLPAD_OFFSET))();
	}

	static ::System::Boolean HMLJIHBOKNP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_HMLJIHBOKNP_OFFSET))();
	}

	static ::UnityEngine::Camera* BEJMBJCNEHI()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BEJMBJCNEHI_OFFSET))();
	}

	static ::GBEGJINGNNG_CNOONKGFEMH EDMNFIBKELC(::UnityEngine::RectTransform* JNLBPMKIFNK, ::System::Nullable_1<::System::Int32> EEGBEFGJJBM)
	{
		return ((::GBEGJINGNNG_CNOONKGFEMH(*)(::UnityEngine::RectTransform*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EDMNFIBKELC_OFFSET))(JNLBPMKIFNK, EEGBEFGJJBM);
	}

	static ::System::Boolean IDPBLBNDIIL(::MoleMole::EUILayoutPlatform NCLPPLGFCMO)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IDPBLBNDIIL_OFFSET))(NCLPPLGFCMO);
	}

	static ::System::Void BFHGCNIOHFF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BFHGCNIOHFF_OFFSET))();
	}

	static ::System::Void BGDDGLLLPJL(::System::String* AELLPLBJELA, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_BGDDGLLLPJL_OFFSET))(AELLPLBJELA, EJGDHCIBCJH);
	}

	static ::UnityEngine::RectTransform* HBMELMHANFA(::UnityEngine::RectTransform* JNLBPMKIFNK, ::System::String* HIAIKHDFCLN)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HBMELMHANFA_OFFSET))(JNLBPMKIFNK, HIAIKHDFCLN);
	}

	static ::System::Void MLKLFDIGMNO(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MLKLFDIGMNO_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void HEHLCMCFJNP_1(::UnityEngine::RectTransform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HEHLCMCFJNP_1_OFFSET))(IAPKABMDJNF);
	}

	static ::System::Void OLPBFLIHMGP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_OLPBFLIHMGP_OFFSET))();
	}

	static ::GBEGJINGNNG_PACFDBBMMLO* IFCFEHGFBIC(::System::Int32 EEGBEFGJJBM)
	{
		return ((::GBEGJINGNNG_PACFDBBMMLO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IFCFEHGFBIC_OFFSET))(EEGBEFGJJBM);
	}

	static ::System::Void ACHKDJGOMNM(::MLHGEECHDEM JIBIDDCCHIF, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::MLHGEECHDEM, ::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ACHKDJGOMNM_OFFSET))(JIBIDDCCHIF, EJGDHCIBCJH);
	}

	static ::System::Void HBPDJFPPGJE(::UnityEngine::Vector2 PIDIDDAEHPJ, ::UnityEngine::Vector2 CNCEPEEIGAO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HBPDJFPPGJE_OFFSET))(PIDIDDAEHPJ, CNCEPEEIGAO);
	}

	static ::System::Void EGKPKAAAKJG(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EGKPKAAAKJG_OFFSET))(AELLPLBJELA);
	}

	static ::UnityEngine::Material* KIIHAGFCLGB()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KIIHAGFCLGB_OFFSET))();
	}

	static ::UnityEngine::Camera* CDILMEKPKIF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_CDILMEKPKIF_OFFSET))();
	}

	static ::System::Void BNOGMKOPNBG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_BNOGMKOPNBG_OFFSET))(EJGDHCIBCJH);
	}

	static ::MoleMole::EUILayoutPlatform BEDPOGGDAKM()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BEDPOGGDAKM_OFFSET))();
	}

	static ::MoleMole::UIFormalVersionTipsPopWindowController* GPPLEGKBMDM()
	{
		return ((::MoleMole::UIFormalVersionTipsPopWindowController*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_GPPLEGKBMDM_OFFSET))();
	}

	static ::System::Void JLPIJKFGLOF(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JLPIJKFGLOF_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void EHAAAHFPFCP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_EHAAAHFPFCP_OFFSET))();
	}

	static ::System::Void GCELNGGJLDF(::System::String* AELLPLBJELA, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GCELNGGJLDF_OFFSET))(AELLPLBJELA, EJGDHCIBCJH);
	}

	static ::System::Void JPLNDKFLPFN(::System::Int32 EEGBEFGJJBM, ::MoleMole::UIAdaptData_NPJEAJJMFAP GEJCKFFFKCL, ::System::String* JLGKFMOBIPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_NPJEAJJMFAP, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JPLNDKFLPFN_OFFSET))(EEGBEFGJJBM, GEJCKFFFKCL, JLGKFMOBIPK);
	}

	static ::System::Void DNAICIMCFHL(::System::Int32 EEGBEFGJJBM, ::MoleMole::UIAdaptData_NPJEAJJMFAP GEJCKFFFKCL, ::System::String* JLGKFMOBIPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_NPJEAJJMFAP, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_DNAICIMCFHL_OFFSET))(EEGBEFGJJBM, GEJCKFFFKCL, JLGKFMOBIPK);
	}

	static ::UnityEngine::Vector2 ODEKLNLAEHG()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_ODEKLNLAEHG_OFFSET))();
	}

	static ::System::Void OABIGONMINJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_OABIGONMINJ_OFFSET))();
	}

	static ::System::Boolean PBHLMHINOJB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_PBHLMHINOJB_OFFSET))();
	}

	static ::UnityEngine::UI::Image* NOGEHKBOIIA()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_NOGEHKBOIIA_OFFSET))();
	}

	static ::System::Void FNDEIHOHBBP(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FNDEIHOHBBP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void GKKLCJAFOHH(::MoleMole::EUILayoutPlatform EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GKKLCJAFOHH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HBBNFAHCKOH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_HBBNFAHCKOH_OFFSET))();
	}

	static ::System::Void KDIOJLPKLEH(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KDIOJLPKLEH_OFFSET))(EJGDHCIBCJH);
	}

	static ::GBEGJINGNNG_PACFDBBMMLO* ABJKNLBFMLE(::System::Int32 EEGBEFGJJBM)
	{
		return ((::GBEGJINGNNG_PACFDBBMMLO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ABJKNLBFMLE_OFFSET))(EEGBEFGJJBM);
	}

	static ::System::Void ODLOFCNPCJE(::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ODLOFCNPCJE_OFFSET))(ELNJNJAIFGE);
	}

	static ::System::Boolean IPPJFLDCONK(::System::Int32 ENJGNHIOECH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IPPJFLDCONK_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Void FHBNENMCDFG(::System::Boolean FAPPGGNBIIO)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FHBNENMCDFG_OFFSET))(FAPPGGNBIIO);
	}

	static ::System::Void NLFIJAJHOAD(::System::Int32 EEGBEFGJJBM, ::MoleMole::UIAdaptData_NPJEAJJMFAP GEJCKFFFKCL, ::System::String* JLGKFMOBIPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_NPJEAJJMFAP, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NLFIJAJHOAD_OFFSET))(EEGBEFGJJBM, GEJCKFFFKCL, JLGKFMOBIPK);
	}

	static ::UnityEngine::RectTransform* GIEOJNEICLE(::MoleMole::UIBaseController* CKJGHJDNJDD)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GIEOJNEICLE_OFFSET))(CKJGHJDNJDD);
	}

	static ::System::Void HPLOFADNFPJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_HPLOFADNFPJ_OFFSET))();
	}

	static ::System::Void FNEOFNJGOCB(::UnityEngine::Camera* MMLNAIHNBME)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FNEOFNJGOCB_OFFSET))(MMLNAIHNBME);
	}

	static ::MoleMole::UIBlackEdge* CEIJAGEPPOL(::System::Int32 ENJGNHIOECH)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CEIJAGEPPOL_OFFSET))(ENJGNHIOECH);
	}

	static ::UnityEngine::RectTransform* FMKPDOBNNHA(::UnityEngine::RectTransform* JNLBPMKIFNK, ::MoleMole::UIAspectRatioHandler_JHEBNFCFBLO DDEIAPKCHOF)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UIAspectRatioHandler_JHEBNFCFBLO))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FMKPDOBNNHA_OFFSET))(JNLBPMKIFNK, DDEIAPKCHOF);
	}

	static ::System::Void AJHFKIOHHOD(::MoleMole::EUILayoutPlatform EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_AJHFKIOHHOD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void KNCMGJLEEOJ(::UnityEngine::NAPRenderPipeline0::CameraRenderType OOIGKJNEJFB)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KNCMGJLEEOJ_OFFSET))(OOIGKJNEJFB);
	}

	static ::System::Void PNDECEOGMGN(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PNDECEOGMGN_OFFSET))(AELLPLBJELA);
	}

	static ::MoleMole::UIHorizontalBlackEdge* FEILNCAOGGM(::System::Int32 ENJGNHIOECH)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FEILNCAOGGM_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Boolean CDAOHLOILIC(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* DJLOKMMLFJC, ::UnityEngine::Transform* NCEJMCGPIID, ::UnityEngine::RectTransform*& IDAKGIJOBJE)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*&))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CDAOHLOILIC_OFFSET))(DJLOKMMLFJC, NCEJMCGPIID, IDAKGIJOBJE);
	}

	static ::System::Void MBHEPNMIALA(::System::Int32 EKLOOENGCOJ, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MBHEPNMIALA_OFFSET))(EKLOOENGCOJ, DEBGKPLOPCG);
	}

	static ::UnityEngine::RectTransform* NDAANDMDMHB(::UnityEngine::RectTransform* JNLBPMKIFNK, ::System::String* HIAIKHDFCLN)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NDAANDMDMHB_OFFSET))(JNLBPMKIFNK, HIAIKHDFCLN);
	}

	static ::System::Void KEMCGJFJNMD(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KEMCGJFJNMD_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BBOMJDBNHIC_OFFSET))();
	}

	static ::System::Void JPJJHMPGOEN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JPJJHMPGOEN_OFFSET))();
	}

	static ::UnityEngine::Vector2 ODEKLNLAEHG_1(::System::Int32 ENJGNHIOECH)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ODEKLNLAEHG_1_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Void AMGJKNBAMBD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_AMGJKNBAMBD_OFFSET))();
	}

	static ::UnityEngine::RectTransform* HJJPGDLDELI(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HJJPGDLDELI_OFFSET))(KCAAHHAOKLC);
	}

	static ::System::Void KFNKPJOHLMG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KFNKPJOHLMG_OFFSET))(EJGDHCIBCJH);
	}

	static ::UnityEngine::RectTransform* LGAMLBDFFNI(::UnityEngine::RectTransform* JNLBPMKIFNK, ::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UISafeAreaHandler_OFHBMCHLDDC))((::PBYTE)hIl2Cpp + GBEGJINGNNG_LGAMLBDFFNI_OFFSET))(JNLBPMKIFNK, DJHHDNDDGFL);
	}

	static ::System::Boolean DOOKNHBAMMB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_DOOKNHBAMMB_OFFSET))();
	}

	static ::System::Boolean DAKANLLENNG(::NDBHEMBELFF POHJHGOMNGE)
	{
		return ((::System::Boolean(*)(::NDBHEMBELFF))((::PBYTE)hIl2Cpp + GBEGJINGNNG_DAKANLLENNG_OFFSET))(POHJHGOMNGE);
	}

	static ::System::Void CMKPIKMLDEN(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CMKPIKMLDEN_OFFSET))(CPHDDAGKHLB);
	}

	static ::System::Boolean NOJHFFLPAPI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_NOJHFFLPAPI_OFFSET))();
	}

	static ::System::Boolean BCKLPFJJHIH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_BCKLPFJJHIH_OFFSET))();
	}

	static ::System::Void JNDACLNDEPO(::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JNDACLNDEPO_OFFSET))(MBJDMKCGOCK);
	}

	static ::System::Void AKKEOCBKGNF(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_AKKEOCBKGNF_OFFSET))(EJGDHCIBCJH);
	}

	static ::System::Void PHKFODPMLMP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_PHKFODPMLMP_OFFSET))();
	}

	static ::System::Void CKLBHKJKHDE(::UnityEngine::Camera* GEFLBDCCPJP, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CKLBHKJKHDE_OFFSET))(GEFLBDCCPJP, ABHBKFJKINO);
	}

	static ::System::Void OLJBCLPBIEB(::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_OLJBCLPBIEB_OFFSET))(ELNJNJAIFGE);
	}

	static ::MoleMole::EUILayoutPlatform JECNMMJNFGO(::System::Boolean GGAJNLBAFKK)
	{
		return ((::MoleMole::EUILayoutPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JECNMMJNFGO_OFFSET))(GGAJNLBAFKK);
	}

	static ::System::Void EFDGGAAPMIH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_EFDGGAAPMIH_OFFSET))();
	}

	static ::System::Void KPMDAPHFFLO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KPMDAPHFFLO_OFFSET))();
	}

	static ::System::Void MKGMEBFEHBD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_MKGMEBFEHBD_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform KANKMHIABGN()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KANKMHIABGN_OFFSET))();
	}

	static ::System::Void FHABBJGBOAI(::UnityEngine::UI::Image* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FHABBJGBOAI_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::EventSystems::EventSystem* PMCEGKOGLCC()
	{
		return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_PMCEGKOGLCC_OFFSET))();
	}

	static ::UnityEngine::Material* OLPHLGKGILE()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_OLPHLGKGILE_OFFSET))();
	}

	static ::System::Void ANNFHPNGBGF(::GBEGJINGNNG_NECBHCIJMIN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::GBEGJINGNNG_NECBHCIJMIN*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ANNFHPNGBGF_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::RectTransform* PDEMKGOPNBL(::UnityEngine::RectTransform* JNLBPMKIFNK)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PDEMKGOPNBL_OFFSET))(JNLBPMKIFNK);
	}

	static ::UnityEngine::Material* LCCMCNIMION()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_LCCMCNIMION_OFFSET))();
	}

	static ::UnityEngine::GameObject* JHGEJHLGLKJ()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JHGEJHLGLKJ_OFFSET))();
	}

	static ::System::Void MLKLFDIGMNO_1(::UnityEngine::Transform* NKAEPFPFLBC, ::UnityEngine::Transform*& NICJLFCJHLA, ::MoleMole::UIAdaptData* OEMKLCHKGHH)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*&, ::MoleMole::UIAdaptData*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MLKLFDIGMNO_1_OFFSET))(NKAEPFPFLBC, NICJLFCJHLA, OEMKLCHKGHH);
	}

	static ::System::Void LHIJHKMIEBO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_LHIJHKMIEBO_OFFSET))();
	}

	static ::System::Void KPENDFCOOLJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KPENDFCOOLJ_OFFSET))();
	}

	static ::System::Void NAFJLPLDNII()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_NAFJLPLDNII_OFFSET))();
	}

	static ::UnityEngine::RectTransform* KGIOKLDIAGP(::System::Int32 ENJGNHIOECH)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KGIOKLDIAGP_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Void HKIGPLFBBKJ(::System::Int32 EEGBEFGJJBM, ::System::Single LAMGNFBKLPK)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HKIGPLFBBKJ_OFFSET))(EEGBEFGJJBM, LAMGNFBKLPK);
	}

	static ::System::Void BANHFPKIDDJ(::GBEGJINGNNG_NPHNONPGMHF& param_0)
	{
		return ((::System::Void(*)(::GBEGJINGNNG_NPHNONPGMHF&))((::PBYTE)hIl2Cpp + GBEGJINGNNG_BANHFPKIDDJ_OFFSET))(param_0);
	}

	static ::System::Void LPKKDNFPNCA(::System::Int32 ENJGNHIOECH, ::System::Boolean BIBEKGMMKAH)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_LPKKDNFPNCA_OFFSET))(ENJGNHIOECH, BIBEKGMMKAH);
	}

	static ::System::Boolean LEOMEKBKKBI(::MoleMole::EUILayoutPlatform NCLPPLGFCMO, ::System::Boolean CPLEIPJLBJM, ::System::Boolean BLJPDJFPBFO)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_LEOMEKBKKBI_OFFSET))(NCLPPLGFCMO, CPLEIPJLBJM, BLJPDJFPBFO);
	}

	static ::System::Boolean JBHFHDNLIAP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JBHFHDNLIAP_OFFSET))();
	}

	static ::UnityEngine::Camera* MBFLMHMPGHG()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_MBFLMHMPGHG_OFFSET))();
	}

	static ::System::Void ACFFJEBOJIE(::System::Boolean JKBLDFBGBPK, ::NDBHEMBELFF POHJHGOMNGE)
	{
		return ((::System::Void(*)(::System::Boolean, ::NDBHEMBELFF))((::PBYTE)hIl2Cpp + GBEGJINGNNG_ACFFJEBOJIE_OFFSET))(JKBLDFBGBPK, POHJHGOMNGE);
	}

	static ::System::Void KNMBIEDFJEL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_KNMBIEDFJEL_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform DKFFCPNANHN()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_DKFFCPNANHN_OFFSET))();
	}

	static ::System::Void DLAAIGNCJCI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_DLAAIGNCJCI_OFFSET))();
	}

	static ::System::String* HNCELEAMMEK(::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_HNCELEAMMEK_OFFSET))(EEGBEFGJJBM);
	}

	static ::System::Void JMGDLBOJKML()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JMGDLBOJKML_OFFSET))();
	}

	static ::MoleMole::UIHorizontalBlackEdge* LOLLHCJMHJD(::System::Int32 ENJGNHIOECH)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_LOLLHCJMHJD_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Void DOJKKFILBLF(::UnityEngine::Camera* GEFLBDCCPJP)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_DOJKKFILBLF_OFFSET))(GEFLBDCCPJP);
	}

	static ::UnityEngine::Rendering::Volume* LPCKKCBOEFA()
	{
		return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_LPCKKCBOEFA_OFFSET))();
	}

	static ::System::Boolean EDFJHGGDBNN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_EDFJHGGDBNN_OFFSET))();
	}

	static ::System::Void NJLFAJHNNGB(::System::Action* HEMEBIMCLDB, ::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NJLFAJHNNGB_OFFSET))(HEMEBIMCLDB, ELNJNJAIFGE);
	}

	static ::System::Void IDMNEHIIFAP(::DJDDGKFCNAJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::DJDDGKFCNAJ*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IDMNEHIIFAP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JHIKDBDKCFG(::MoleMole::EUILayoutPlatform NCLPPLGFCMO)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JHIKDBDKCFG_OFFSET))(NCLPPLGFCMO);
	}

	static ::System::Void AAPPOLNGOIM(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_AAPPOLNGOIM_OFFSET))(EJGDHCIBCJH);
	}

	static ::UnityEngine::Transform* GJKOMKBALAI()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_GJKOMKBALAI_OFFSET))();
	}

	static ::System::Void JLKIHKMECLH(::System::Boolean JKBLDFBGBPK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_JLKIHKMECLH_OFFSET))(JKBLDFBGBPK, AELLPLBJELA);
	}

	static ::System::Void GBKPGFOPKCB(::MLHGEECHDEM JIBIDDCCHIF)
	{
		return ((::System::Void(*)(::MLHGEECHDEM))((::PBYTE)hIl2Cpp + GBEGJINGNNG_GBKPGFOPKCB_OFFSET))(JIBIDDCCHIF);
	}

	static ::System::String* IBJLCAFJHCO(::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_IBJLCAFJHCO_OFFSET))(EEGBEFGJJBM);
	}

	static ::System::Boolean JMOMCHKKKHD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JMOMCHKKKHD_OFFSET))();
	}

	static ::System::Void FFECNEGGJEE(::System::Boolean JACPNPBILMO)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FFECNEGGJEE_OFFSET))(JACPNPBILMO);
	}

	static ::System::Void KCKHMMMPMCO(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_KCKHMMMPMCO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CBDMKIBDAFI(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_CBDMKIBDAFI_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::Canvas* OIPMDKBBCON(::System::Int32 ENJGNHIOECH)
	{
		return ((::UnityEngine::Canvas*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_OIPMDKBBCON_OFFSET))(ENJGNHIOECH);
	}

	static ::UnityEngine::Vector2 CBJFAGDHMEN()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_CBJFAGDHMEN_OFFSET))();
	}

	static ::System::Void EMKOLEELBHE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_EMKOLEELBHE_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform DLABFIFHGPJ()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_DLABFIFHGPJ_OFFSET))();
	}

	static ::System::Void EMCPPBMEKKK(::System::Boolean ABNJJHODFNN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EMCPPBMEKKK_OFFSET))(ABNJJHODFNN);
	}

	static ::MoleMole::EUILayoutPlatform DOGLJGCEDIP()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_DOGLJGCEDIP_OFFSET))();
	}

	static ::System::Void FDPGFJLAHEO(::MoleMole::UIWindowController* KCAAHHAOKLC)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_FDPGFJLAHEO_OFFSET))(KCAAHHAOKLC);
	}

	static ::MoleMole::UIBlackEdge* MFDGCJLHOKN(::System::Int32 ENJGNHIOECH)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_MFDGCJLHOKN_OFFSET))(ENJGNHIOECH);
	}

	static ::UnityEngine::RectTransform* PKDFOCFFBOD(::System::Int32 ENJGNHIOECH)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBEGJINGNNG_PKDFOCFFBOD_OFFSET))(ENJGNHIOECH);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* EBODFPAOLMN(::System::Action* ELNJNJAIFGE)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_EBODFPAOLMN_OFFSET))(ELNJNJAIFGE);
	}

	static ::DJDDGKFCNAJ* JGJADJOFGEE()
	{
		return ((::DJDDGKFCNAJ*(*)())((::PBYTE)hIl2Cpp + GBEGJINGNNG_JGJADJOFGEE_OFFSET))();
	}
};
