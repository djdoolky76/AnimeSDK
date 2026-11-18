#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/NBJLLOBDKHH_HEJPJGKLADK.h"
#include "unitysdk/NBJLLOBDKHH_MPDBCHAJONE.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class BIAHGGNIHDA;
class CFHOEGBMPKN;
class EKFPPMNCGPE;
class GBEDNHDKIOM;
class GOGAFMNBDBM;
class HBKJADCMGFM;
class HNHGNNGIPDE;
namespace MoleMole { class UITriDiceOracleInfoDialogOpenContext; }
namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T> class DBMAHDDGMHM_1;

#define NBJLLOBDKHH_ABGPKKAAKFF_OFFSET UNITYSDK_OFFSET(0x16B5A380)
#define NBJLLOBDKHH_ABLOCFOCMGP_OFFSET UNITYSDK_OFFSET(0x16B55230)
#define NBJLLOBDKHH_AGAJKELOAHM_OFFSET UNITYSDK_OFFSET(0x16B58570)
#define NBJLLOBDKHH_AHBANHEPAKM_OFFSET UNITYSDK_OFFSET(0x16B56370)
#define NBJLLOBDKHH_AHJIEHMEPCB_OFFSET UNITYSDK_OFFSET(0x16B56020)
#define NBJLLOBDKHH_AKCBIMALNJM_OFFSET UNITYSDK_OFFSET(0x16B5AD10)
#define NBJLLOBDKHH_AOGBFAOPNOC_OFFSET UNITYSDK_OFFSET(0x16B588D0)
#define NBJLLOBDKHH_BAKABJBINML_OFFSET UNITYSDK_OFFSET(0x16B53330)
#define NBJLLOBDKHH_BFJEMPCCFFM_OFFSET UNITYSDK_OFFSET(0x16B58FD0)
#define NBJLLOBDKHH_BJKNOIJKKDH_OFFSET UNITYSDK_OFFSET(0x16B59D90)
#define NBJLLOBDKHH_BKPOGLNJEDP_OFFSET UNITYSDK_OFFSET(0x16B56F20)
#define NBJLLOBDKHH_BLNKGDPLPIG_OFFSET UNITYSDK_OFFSET(0x16B58950)
#define NBJLLOBDKHH_CBBODLHDKCA_OFFSET UNITYSDK_OFFSET(0x16B54860)
#define NBJLLOBDKHH_CEDNAPAPLFK_OFFSET UNITYSDK_OFFSET(0x16B579D0)
#define NBJLLOBDKHH_CEPPNBDJLHA_OFFSET UNITYSDK_OFFSET(0x16B52540)
#define NBJLLOBDKHH_CMFIKOMKBCL_OFFSET UNITYSDK_OFFSET(0x16B52BA0)
#define NBJLLOBDKHH_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16B539A0)
#define NBJLLOBDKHH_CPGKBCJCEMN_OFFSET UNITYSDK_OFFSET(0x16B5A6B0)
#define NBJLLOBDKHH_DCCIEBHLMAM_OFFSET UNITYSDK_OFFSET(0x16B57260)
#define NBJLLOBDKHH_DEDHAIMMIOC_OFFSET UNITYSDK_OFFSET(0x16B54690)
#define NBJLLOBDKHH_DKNFNOIIEPG_OFFSET UNITYSDK_OFFSET(0x16B59680)
#define NBJLLOBDKHH_DMCNGMBMCFP_OFFSET UNITYSDK_OFFSET(0x16B52E80)
#define NBJLLOBDKHH_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x16B53760)
#define NBJLLOBDKHH_DPLOEOFHHJL_OFFSET UNITYSDK_OFFSET(0x16B591A0)
#define NBJLLOBDKHH_EBNHJHMDDKH_OFFSET UNITYSDK_OFFSET(0x16B59950)
#define NBJLLOBDKHH_EBPKAHICCHG_OFFSET UNITYSDK_OFFSET(0x16B51D20)
#define NBJLLOBDKHH_ECGDIIMGBIE_OFFSET UNITYSDK_OFFSET(0x16B52F00)
#define NBJLLOBDKHH_EEBPAGMKAHD_OFFSET UNITYSDK_OFFSET(0x16B5A510)
#define NBJLLOBDKHH_EHMKGCNKOOI_OFFSET UNITYSDK_OFFSET(0x16B5AD20)
#define NBJLLOBDKHH_EHODJAIJEHA_OFFSET UNITYSDK_OFFSET(0x16B536A0)
#define NBJLLOBDKHH_EIBAFEOBNOM_OFFSET UNITYSDK_OFFSET(0x16B537F0)
#define NBJLLOBDKHH_EKPBDKDOBED_OFFSET UNITYSDK_OFFSET(0x16B5A350)
#define NBJLLOBDKHH_ELFJGNBCFEI_OFFSET UNITYSDK_OFFSET(0x16B5AC70)
#define NBJLLOBDKHH_EMGMOGCBADG_OFFSET UNITYSDK_OFFSET(0x16B53B00)
#define NBJLLOBDKHH_EMHCMGKICON_OFFSET UNITYSDK_OFFSET(0x16B57510)
#define NBJLLOBDKHH_ENHGHAKGBLP_OFFSET UNITYSDK_OFFSET(0x16B588E0)
#define NBJLLOBDKHH_FBANOAMAMKP_OFFSET UNITYSDK_OFFSET(0x16B52B00)
#define NBJLLOBDKHH_FEDCHJKEKEI_OFFSET UNITYSDK_OFFSET(0x16B57CB0)
#define NBJLLOBDKHH_FILEJNFPGIM_OFFSET UNITYSDK_OFFSET(0x16B54020)
#define NBJLLOBDKHH_FKANFEJOOCC_OFFSET UNITYSDK_OFFSET(0x16B552F0)
#define NBJLLOBDKHH_GDFAAHOBBOK_OFFSET UNITYSDK_OFFSET(0x16B565A0)
#define NBJLLOBDKHH_GFBGNEFBBIP_OFFSET UNITYSDK_OFFSET(0x16B55430)
#define NBJLLOBDKHH_GGOIFEAIEHA_OFFSET UNITYSDK_OFFSET(0x16B533C0)
#define NBJLLOBDKHH_GKEMBJLEJBK_OFFSET UNITYSDK_OFFSET(0x16B524A0)
#define NBJLLOBDKHH_GLDBIDHAKCN_OFFSET UNITYSDK_OFFSET(0x16B59620)
#define NBJLLOBDKHH_GLGLEHIGBHG_OFFSET UNITYSDK_OFFSET(0x16B594C0)
#define NBJLLOBDKHH_GNFLCJDDIOF_OFFSET UNITYSDK_OFFSET(0x16B580D0)
#define NBJLLOBDKHH_GONCBPEDBAB_OFFSET UNITYSDK_OFFSET(0x16B560D0)
#define NBJLLOBDKHH_HDFKOAMKDLK_OFFSET UNITYSDK_OFFSET(0x16B52E90)
#define NBJLLOBDKHH_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x16B573E0)
#define NBJLLOBDKHH_HEPAPOCKJNG_OFFSET UNITYSDK_OFFSET(0x16B55A10)
#define NBJLLOBDKHH_HHCDCIBGAED_OFFSET UNITYSDK_OFFSET(0x16B5AF70)
#define NBJLLOBDKHH_HIAIBHNBELL_OFFSET UNITYSDK_OFFSET(0x16B52130)
#define NBJLLOBDKHH_HICJJKOKMPL_OFFSET UNITYSDK_OFFSET(0x16B5A630)
#define NBJLLOBDKHH_HIOJMJJLOKL_OFFSET UNITYSDK_OFFSET(0x16B5A500)
#define NBJLLOBDKHH_HJCHKDHCJKD_OFFSET UNITYSDK_OFFSET(0x16B5A1F0)
#define NBJLLOBDKHH_HJPBENPPABC_OFFSET UNITYSDK_OFFSET(0x16B51D80)
#define NBJLLOBDKHH_HNNOEODLILG_OFFSET UNITYSDK_OFFSET(0x16B550C0)
#define NBJLLOBDKHH_IFODIGFAICG_OFFSET UNITYSDK_OFFSET(0x16B56780)
#define NBJLLOBDKHH_ILAIMCFBHIB_OFFSET UNITYSDK_OFFSET(0x16B56770)
#define NBJLLOBDKHH_ILMOGGLFLBM_OFFSET UNITYSDK_OFFSET(0x16B58200)
#define NBJLLOBDKHH_JAECGDNJCPH_OFFSET UNITYSDK_OFFSET(0x16B54300)
#define NBJLLOBDKHH_JCDBFFKDBGN_OFFSET UNITYSDK_OFFSET(0x16B55610)
#define NBJLLOBDKHH_JDMPBJPAPJO_OFFSET UNITYSDK_OFFSET(0x16B59410)
#define NBJLLOBDKHH_JIENNKJNPNF_OFFSET UNITYSDK_OFFSET(0x16B54AD0)
#define NBJLLOBDKHH_JIHPOLFBKLI_OFFSET UNITYSDK_OFFSET(0x16B54DA0)
#define NBJLLOBDKHH_KBEFAFEIHGI_OFFSET UNITYSDK_OFFSET(0x16B57D50)
#define NBJLLOBDKHH_KBKEOEBHEHH_OFFSET UNITYSDK_OFFSET(0x16B5AED0)
#define NBJLLOBDKHH_KCCMHFIFBGH_OFFSET UNITYSDK_OFFSET(0x16B5AC10)
#define NBJLLOBDKHH_KCIIFJIFOAK_OFFSET UNITYSDK_OFFSET(0x16B522B0)
#define NBJLLOBDKHH_KGBPJKHIMGB_OFFSET UNITYSDK_OFFSET(0x16B57B20)
#define NBJLLOBDKHH_KHFONNAMIIG_OFFSET UNITYSDK_OFFSET(0x16B564C0)
#define NBJLLOBDKHH_KHIPABMIDBL_OFFSET UNITYSDK_OFFSET(0x16B557A0)
#define NBJLLOBDKHH_KKFCDNGBHNH_OFFSET UNITYSDK_OFFSET(0x16B59810)
#define NBJLLOBDKHH_KNEBOIKKLMD_OFFSET UNITYSDK_OFFSET(0x16B56360)
#define NBJLLOBDKHH_KPACGCNCPJE_OFFSET UNITYSDK_OFFSET(0x16B5A390)
#define NBJLLOBDKHH_LAHGEEEKCAL_OFFSET UNITYSDK_OFFSET(0x16B59130)
#define NBJLLOBDKHH_LCEAMGDCOPJ_OFFSET UNITYSDK_OFFSET(0x16B53ED0)
#define NBJLLOBDKHH_LEALCICLGJM_OFFSET UNITYSDK_OFFSET(0x16B56ED0)
#define NBJLLOBDKHH_LFFMGMBDHDA_OFFSET UNITYSDK_OFFSET(0x16B58FC0)
#define NBJLLOBDKHH_LFHOBDDGDMD_OFFSET UNITYSDK_OFFSET(0x16B555B0)
#define NBJLLOBDKHH_LHJCOBPNNEN_OFFSET UNITYSDK_OFFSET(0x16B5AA00)
#define NBJLLOBDKHH_LMDOCFDIEBG_OFFSET UNITYSDK_OFFSET(0x16B58E90)
#define NBJLLOBDKHH_LMHOILBJIJD_OFFSET UNITYSDK_OFFSET(0x16B58940)
#define NBJLLOBDKHH_LNCOIOPBIKJ_OFFSET UNITYSDK_OFFSET(0x16B59FF0)
#define NBJLLOBDKHH_MCEPFNLBPCP_OFFSET UNITYSDK_OFFSET(0x16B56AB0)
#define NBJLLOBDKHH_MKCLDDHOOOO_OFFSET UNITYSDK_OFFSET(0x16B579C0)
#define NBJLLOBDKHH_MLBJLKAAFOB_OFFSET UNITYSDK_OFFSET(0x16B520A0)
#define NBJLLOBDKHH_MNOOAGMFDME_OFFSET UNITYSDK_OFFSET(0x16B52BB0)
#define NBJLLOBDKHH_MPIOJDDLMFF_OFFSET UNITYSDK_OFFSET(0x16B5A360)
#define NBJLLOBDKHH_NCCFDEKPODC_OFFSET UNITYSDK_OFFSET(0x16B56590)
#define NBJLLOBDKHH_NDAKLNGMBHF_OFFSET UNITYSDK_OFFSET(0x16B59140)
#define NBJLLOBDKHH_NGHFAIHFBOG_OFFSET UNITYSDK_OFFSET(0x16B58E80)
#define NBJLLOBDKHH_NHJKOKECPFE_OFFSET UNITYSDK_OFFSET(0x16B51CD0)
#define NBJLLOBDKHH_NINABFIFOEG_OFFSET UNITYSDK_OFFSET(0x16B52CF0)
#define NBJLLOBDKHH_NNDMJCBPDOL_OFFSET UNITYSDK_OFFSET(0x16B5A6C0)
#define NBJLLOBDKHH_NNOLGMGEIGE_OFFSET UNITYSDK_OFFSET(0x16B542B0)
#define NBJLLOBDKHH_NPGBBNALJBL_OFFSET UNITYSDK_OFFSET(0x16B5A0A0)
#define NBJLLOBDKHH_NPIPHPJGMEB_OFFSET UNITYSDK_OFFSET(0x16B57EF0)
#define NBJLLOBDKHH_NPPOLFEPJFB_OFFSET UNITYSDK_OFFSET(0x16B55720)
#define NBJLLOBDKHH_OBGGHIONDOB_OFFSET UNITYSDK_OFFSET(0x16B59E00)
#define NBJLLOBDKHH_OBMBAAKPKLD_OFFSET UNITYSDK_OFFSET(0x16B58AA0)
#define NBJLLOBDKHH_ODCNMHIKPDK_OFFSET UNITYSDK_OFFSET(0x16B53A30)
#define NBJLLOBDKHH_ODDHBMLDJKP_OFFSET UNITYSDK_OFFSET(0x16B52E20)
#define NBJLLOBDKHH_OFDMDENBHEM_OFFSET UNITYSDK_OFFSET(0x16B58CD0)
#define NBJLLOBDKHH_OKHINBNOLNK_OFFSET UNITYSDK_OFFSET(0x16B5ADE0)
#define NBJLLOBDKHH_OLNOMAFKHEC_OFFSET UNITYSDK_OFFSET(0x16B54160)
#define NBJLLOBDKHH_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x16B51C50)
#define NBJLLOBDKHH_ONSTART_OFFSET UNITYSDK_OFFSET(0x16B51B00)
#define NBJLLOBDKHH_OPAGFODIAKD_OFFSET UNITYSDK_OFFSET(0x16B550E0)
#define NBJLLOBDKHH_PCDJBLJHEHF_OFFSET UNITYSDK_OFFSET(0x16B588F0)
#define NBJLLOBDKHH_PCDPAOFDJIE_OFFSET UNITYSDK_OFFSET(0x16B582E0)
#define NBJLLOBDKHH_PFCPOLAPNOP_OFFSET UNITYSDK_OFFSET(0x16B57250)
#define NBJLLOBDKHH_PJAACNIOOPE_OFFSET UNITYSDK_OFFSET(0x16B53460)
#define NBJLLOBDKHH_PKJDEPEFIBK_OFFSET UNITYSDK_OFFSET(0x16B550D0)
#define NBJLLOBDKHH_PNCMBOBDBJG_OFFSET UNITYSDK_OFFSET(0x16B53EC0)
#define NBJLLOBDKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x16B51CC0)

inline static constexpr unsigned int NBJLLOBDKHH_TypeDefinitionIndex = 46240;

class NBJLLOBDKHH : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _KFJFGNKKFLP_k__BackingField; // 0x18
	::DBMAHDDGMHM_1<::System::Single>* CGPNCKLIFID; // 0x20
	::BIAHGGNIHDA* AAFABENEGME; // 0x28
	::DBMAHDDGMHM_1<::System::Object*>* NNHEIJFJIAP; // 0x30
	::DBMAHDDGMHM_1<::System::Single>* OJDNNOLNOGP; // 0x38
	::DBMAHDDGMHM_1<::System::String*>* FGIMDOOEHBD; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* _OEIGFKOHFPG_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* _ONLPEBBIHNP_k__BackingField; // 0x50
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* ADHAMEDKODK; // 0x58
	::DBMAHDDGMHM_1<::System::Single>* MOHJBOFPAMN; // 0x60
	::System::Threading::CancellationToken HNGBKOCIDPE; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* _EKFHDPKPELI_k__BackingField; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* _EFPOFIGEFHP_k__BackingField; // 0x78
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* _IMPFMFJOMLN_k__BackingField; // 0x88
	::System::Nullable_1<::UnityEngine::Vector2> GHPKDPHEHKN; // 0x90
	::System::Byte _padding0[0x4];
	::System::Boolean OCHCKNGDHPE; // 0x9C
	::System::Boolean AJCJEJGICBA; // 0x9D
	::System::Boolean PEPNJDONPBL; // 0x9E
	::System::Boolean KHJNEFDFDDJ; // 0x9F
	::System::UInt32 DDMJKGKJLLO; // 0xA0
	::UnityEngine::Vector3 KPPMHFMHLAO; // 0xA4
	::UnityEngine::Vector3 KNDAIBGFPAI; // 0xB0
	::UnityEngine::Vector3 CPLGIGABBNN; // 0xBC
	::System::Single DEGFLOAODJL; // 0xC8
	::UnityEngine::Vector2 GMOHMOLGLFJ; // 0xCC
	::System::Nullable_1<::UnityEngine::Vector2> ADEJFGIPDNN; // 0xD4
	::System::Byte _padding1[0x4];
	::UnityEngine::Vector3 JOMGBICOOND; // 0xE0
	::System::Nullable_1<::UnityEngine::Vector2> BOCDJCJAIOO; // 0xEC
	::System::Byte _padding2[0x4];
	::System::Int64 GIMFBFLADJD; // 0xF8
	::System::Single PPGCPALBBGL; // 0x100
	::System::Int32 _BAJLOJAJOCC_k__BackingField; // 0x104
	::System::Single PLBHDDLBLAD; // 0x108
	::System::Single JHNJDBINCOL; // 0x10C
	::UnityEngine::Vector3 GJAKFIBLAPL; // 0x110
	::System::Boolean MPFCIEEGPHD; // 0x11C
	::System::Boolean GFIGJCECHCF; // 0x11D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Int32 NHJKOKECPFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NHJKOKECPFE_OFFSET))(this);
	}

	::System::Boolean EBPKAHICCHG(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EBPKAHICCHG_OFFSET))(this, KCNOHOOPNAH);
	}

	::System::Void HJPBENPPABC(::UnityEngine::Vector2 NAFPOHLLAID, ::UnityEngine::Vector2 FCONLIJOIFH, ::UnityEngine::Vector2 BPDKCECNMCM, ::UnityEngine::Vector2 LPOIBLLILAA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HJPBENPPABC_OFFSET))(this, NAFPOHLLAID, FCONLIJOIFH, BPDKCECNMCM, LPOIBLLILAA);
	}

	::DBMAHDDGMHM_1<::System::Single>* GKEMBJLEJBK()
	{
		return ((::DBMAHDDGMHM_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GKEMBJLEJBK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CEPPNBDJLHA(::EKFPPMNCGPE* FAIPFCNDLDE, ::System::Func_1<::System::Single>* AKHIFADKLJF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CEPPNBDJLHA_OFFSET))(this, FAIPFCNDLDE, AKHIFADKLJF);
	}

	::Cysharp::Threading::Tasks::UniTask FBANOAMAMKP(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_FBANOAMAMKP_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Boolean CMFIKOMKBCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CMFIKOMKBCL_OFFSET))(this);
	}

	::System::Single NINABFIFOEG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NINABFIFOEG_OFFSET))(this);
	}

	::System::Int32 DMCNGMBMCFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DMCNGMBMCFP_OFFSET))(this);
	}

	::System::Void HDFKOAMKDLK(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HDFKOAMKDLK_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Boolean BAKABJBINML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_BAKABJBINML_OFFSET))(this);
	}

	::System::Void PJAACNIOOPE(::System::Collections::Generic::List_1<::System::Int32>* LEGJIOOLJLL, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PJAACNIOOPE_OFFSET))(this, LEGJIOOLJLL, EJGDHCIBCJH);
	}

	::Cysharp::Threading::Tasks::UniTask EHODJAIJEHA(::EKFPPMNCGPE* FAIPFCNDLDE, ::System::String* LIPIPGHBHFH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*, ::System::String*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EHODJAIJEHA_OFFSET))(this, FAIPFCNDLDE, LIPIPGHBHFH);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Int32 EIBAFEOBNOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EIBAFEOBNOM_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void ODCNMHIKPDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ODCNMHIKPDK_OFFSET))(this);
	}

	::System::String* PNCMBOBDBJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PNCMBOBDBJG_OFFSET))(this);
	}

	::System::Void FILEJNFPGIM(::System::Action* CAAFEGLOALC, ::System::Action* OMPPPHOPAFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_FILEJNFPGIM_OFFSET))(this, CAAFEGLOALC, OMPPPHOPAFB);
	}

	::System::String* OLNOMAFKHEC(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OLNOMAFKHEC_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Boolean NNOLGMGEIGE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NNOLGMGEIGE_OFFSET))(this);
	}

	::BIAHGGNIHDA* ODDHBMLDJKP()
	{
		return ((::BIAHGGNIHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ODDHBMLDJKP_OFFSET))(this);
	}

	::System::Void DEDHAIMMIOC(::GBEDNHDKIOM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GBEDNHDKIOM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DEDHAIMMIOC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HNNOEODLILG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HNNOEODLILG_OFFSET))(this);
	}

	::System::Void PKJDEPEFIBK(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PKJDEPEFIBK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OPAGFODIAKD(::System::String* EENKGIMOCEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OPAGFODIAKD_OFFSET))(this, EENKGIMOCEO);
	}

	::Cysharp::Threading::Tasks::UniTask ABLOCFOCMGP(::EKFPPMNCGPE* FAIPFCNDLDE, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ABLOCFOCMGP_OFFSET))(this, FAIPFCNDLDE, MPPGOFIIMEM);
	}

	::System::Int32 FKANFEJOOCC(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_FKANFEJOOCC_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Void GFBGNEFBBIP(::System::Collections::Generic::List_1<::System::UInt32>* APLOAMCGMGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GFBGNEFBBIP_OFFSET))(this, APLOAMCGMGL);
	}

	::System::Int32 LFHOBDDGDMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LFHOBDDGDMD_OFFSET))(this);
	}

	::System::Void JCDBFFKDBGN(::HBKJADCMGFM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::HBKJADCMGFM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JCDBFFKDBGN_OFFSET))(this, GLAOEHCGCFO);
	}

	::DBMAHDDGMHM_1<::System::Object*>* GGOIFEAIEHA()
	{
		return ((::DBMAHDDGMHM_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GGOIFEAIEHA_OFFSET))(this);
	}

	::System::Void NPPOLFEPJFB(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NPPOLFEPJFB_OFFSET))(this, FAIPFCNDLDE);
	}

	::UnityEngine::Vector3 HEPAPOCKJNG(::EKFPPMNCGPE* FAIPFCNDLDE, ::UnityEngine::Vector2 FPNKBIPMBCA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::EKFPPMNCGPE*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HEPAPOCKJNG_OFFSET))(this, FAIPFCNDLDE, FPNKBIPMBCA);
	}

	::System::Void KNEBOIKKLMD(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KNEBOIKKLMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector2 AHBANHEPAKM(::UnityEngine::Vector2 PPLLMDFCBLO)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AHBANHEPAKM_OFFSET))(this, PPLLMDFCBLO);
	}

	::System::Void KHFONNAMIIG(::System::Single& FAIKLGCEFIM, ::System::Single DPAKNBHJFOL, ::System::Single JIKNOEGENOB, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KHFONNAMIIG_OFFSET))(this, FAIKLGCEFIM, DPAKNBHJFOL, JIKNOEGENOB, PMNLNNGEIFM);
	}

	::BIAHGGNIHDA* JAECGDNJCPH(::NBJLLOBDKHH_MPDBCHAJONE KKIAHJODOIA)
	{
		return ((::BIAHGGNIHDA*(*)(::PVOID, ::NBJLLOBDKHH_MPDBCHAJONE))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JAECGDNJCPH_OFFSET))(this, KKIAHJODOIA);
	}

	::System::Void GDFAAHOBBOK(::NBJLLOBDKHH_HEJPJGKLADK OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::NBJLLOBDKHH_HEJPJGKLADK))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GDFAAHOBBOK_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ILAIMCFBHIB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ILAIMCFBHIB_OFFSET))(this);
	}

	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* AHJIEHMEPCB()
	{
		return ((::DBMAHDDGMHM_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AHJIEHMEPCB_OFFSET))(this);
	}

	::System::Void IFODIGFAICG(::HNHGNNGIPDE* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::HNHGNNGIPDE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_IFODIGFAICG_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Int32 LEALCICLGJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LEALCICLGJM_OFFSET))(this);
	}

	::System::Void MCEPFNLBPCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_MCEPFNLBPCP_OFFSET))(this);
	}

	::System::Void BKPOGLNJEDP(::UnityEngine::Vector2& KNNLBDJIBLC, ::UnityEngine::Vector2 FPNKBIPMBCA, ::System::Single JIKNOEGENOB, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_BKPOGLNJEDP_OFFSET))(this, KNNLBDJIBLC, FPNKBIPMBCA, JIKNOEGENOB, PMNLNNGEIFM);
	}

	::System::Void PFCPOLAPNOP(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PFCPOLAPNOP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DCCIEBHLMAM(::HNHGNNGIPDE* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::HNHGNNGIPDE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DCCIEBHLMAM_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EMGMOGCBADG(::System::Collections::Generic::List_1<::System::Int32>* ODFKJFEMIPH)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EMGMOGCBADG_OFFSET))(this, ODFKJFEMIPH);
	}

	::UnityEngine::Vector3 GONCBPEDBAB(::EKFPPMNCGPE* FAIPFCNDLDE, ::UnityEngine::Vector3 ELHMOANKHFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::EKFPPMNCGPE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GONCBPEDBAB_OFFSET))(this, FAIPFCNDLDE, ELHMOANKHFM);
	}

	::System::Void CBBODLHDKCA(::GBEDNHDKIOM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GBEDNHDKIOM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CBBODLHDKCA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::String* MKCLDDHOOOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_MKCLDDHOOOO_OFFSET))(this);
	}

	::System::Void KGBPJKHIMGB(::System::Single& LDDJOFHAOHG, ::System::Single& FMJGOHNLJNA, ::System::Single HODAIDNDKHD, ::System::Single DMJCDNMNFMB, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KGBPJKHIMGB_OFFSET))(this, LDDJOFHAOHG, FMJGOHNLJNA, HODAIDNDKHD, DMJCDNMNFMB, PBCAAADNEPK);
	}

	::DBMAHDDGMHM_1<::System::Single>* FEDCHJKEKEI()
	{
		return ((::DBMAHDDGMHM_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_FEDCHJKEKEI_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KBEFAFEIHGI(::EKFPPMNCGPE* FAIPFCNDLDE, ::System::String* LIPIPGHBHFH, ::System::Single LIIDLDHEPGL, ::System::Single INHDEFICDBI, ::System::Single NCDMGNBPKIM, ::System::Single EJAOAGGJHHA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KBEFAFEIHGI_OFFSET))(this, FAIPFCNDLDE, LIPIPGHBHFH, LIIDLDHEPGL, INHDEFICDBI, NCDMGNBPKIM, EJAOAGGJHHA);
	}

	::UnityEngine::Vector2 NPIPHPJGMEB(::UnityEngine::Vector2 LPOIBLLILAA, ::System::Single CIIPCCLOHLH)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NPIPHPJGMEB_OFFSET))(this, LPOIBLLILAA, CIIPCCLOHLH);
	}

	::System::Void KHIPABMIDBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KHIPABMIDBL_OFFSET))(this);
	}

	::System::Void PCDPAOFDJIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PCDPAOFDJIE_OFFSET))(this);
	}

	::System::Void ILMOGGLFLBM(::System::Single& LDDJOFHAOHG, ::System::Single& FMJGOHNLJNA, ::System::Single HODAIDNDKHD, ::System::Single JOAHDDBDEIL, ::System::Single KJOIMPHEFAB, ::System::Single DMJCDNMNFMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ILMOGGLFLBM_OFFSET))(this, LDDJOFHAOHG, FMJGOHNLJNA, HODAIDNDKHD, JOAHDDBDEIL, KJOIMPHEFAB, DMJCDNMNFMB);
	}

	::System::Void AGAJKELOAHM(::System::Int32 HGOAFBINMNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AGAJKELOAHM_OFFSET))(this, HGOAFBINMNN);
	}

	::System::Void AOGBFAOPNOC(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AOGBFAOPNOC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ENHGHAKGBLP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ENHGHAKGBLP_OFFSET))(this);
	}

	::System::Void PCDJBLJHEHF(::GOGAFMNBDBM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GOGAFMNBDBM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_PCDJBLJHEHF_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void LMHOILBJIJD(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LMHOILBJIJD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NCCFDEKPODC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NCCFDEKPODC_OFFSET))(this);
	}

	::System::Void OBMBAAKPKLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OBMBAAKPKLD_OFFSET))(this);
	}

	::System::Int32 OFDMDENBHEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OFDMDENBHEM_OFFSET))(this);
	}

	::System::String* NGHFAIHFBOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NGHFAIHFBOG_OFFSET))(this);
	}

	::System::Void LMDOCFDIEBG(::System::Int32 OIKFFGKDHME, ::System::Boolean PELEKHCAPIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LMDOCFDIEBG_OFFSET))(this, OIKFFGKDHME, PELEKHCAPIP);
	}

	::System::Void LFFMGMBDHDA(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LFFMGMBDHDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BFJEMPCCFFM(::UnityEngine::Vector2 DFHFIJBPCJJ, ::UnityEngine::Vector2 BPDKCECNMCM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_BFJEMPCCFFM_OFFSET))(this, DFHFIJBPCJJ, BPDKCECNMCM);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LAHGEEEKCAL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LAHGEEEKCAL_OFFSET))(this);
	}

	::System::Boolean NDAKLNGMBHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NDAKLNGMBHF_OFFSET))(this);
	}

	::System::String* CEDNAPAPLFK(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CEDNAPAPLFK_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::String* LCEAMGDCOPJ(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LCEAMGDCOPJ_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Void DPLOEOFHHJL(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DPLOEOFHHJL_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Boolean GLGLEHIGBHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GLGLEHIGBHG_OFFSET))(this);
	}

	::System::Boolean GLDBIDHAKCN(::System::Int32 LCIANCHHHPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GLDBIDHAKCN_OFFSET))(this, LCIANCHHHPI);
	}

	::System::Void DKNFNOIIEPG(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_DKNFNOIIEPG_OFFSET))(this, FAIPFCNDLDE);
	}

	::NBJLLOBDKHH_HEJPJGKLADK KKFCDNGBHNH(::System::Int32 HGKHKAPNGMC)
	{
		return ((::NBJLLOBDKHH_HEJPJGKLADK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KKFCDNGBHNH_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Void JIENNKJNPNF(::GBEDNHDKIOM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GBEDNHDKIOM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JIENNKJNPNF_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Single BJKNOIJKKDH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_BJKNOIJKKDH_OFFSET))(this);
	}

	::System::Void OBGGHIONDOB(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OBGGHIONDOB_OFFSET))(this, FAIPFCNDLDE);
	}

	::UnityEngine::Vector2 KCIIFJIFOAK(::UnityEngine::Vector2 CKPGOKHECCH, ::UnityEngine::Vector2 LPOIBLLILAA)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KCIIFJIFOAK_OFFSET))(this, CKPGOKHECCH, LPOIBLLILAA);
	}

	::Cysharp::Threading::Tasks::UniTask LNCOIOPBIKJ(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LNCOIOPBIKJ_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HDLGEDBNEIP_OFFSET))(this);
	}

	::System::Single HIAIBHNBELL(::System::Single IAKPGBCAAKM, ::System::Single OGMBMLNFAGK, ::System::Single JEHLFHIPCGM, ::System::Single DNGEANIFMKC, ::System::Single LHHBPEGMNKG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HIAIBHNBELL_OFFSET))(this, IAKPGBCAAKM, OGMBMLNFAGK, JEHLFHIPCGM, DNGEANIFMKC, LHHBPEGMNKG);
	}

	::System::Boolean JDMPBJPAPJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JDMPBJPAPJO_OFFSET))(this);
	}

	::System::String* NPGBBNALJBL(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NPGBBNALJBL_OFFSET))(this, HGKHKAPNGMC);
	}

	::MoleMole::TriDiceLuckPerformType HJCHKDHCJKD(::System::Int32 HGKHKAPNGMC)
	{
		return ((::MoleMole::TriDiceLuckPerformType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HJCHKDHCJKD_OFFSET))(this, HGKHKAPNGMC);
	}

	::NBJLLOBDKHH_HEJPJGKLADK EKPBDKDOBED()
	{
		return ((::NBJLLOBDKHH_HEJPJGKLADK(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EKPBDKDOBED_OFFSET))(this);
	}

	::System::Boolean MPIOJDDLMFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_MPIOJDDLMFF_OFFSET))(this);
	}

	::System::Void ABGPKKAAKFF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ABGPKKAAKFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UITriDiceOracleInfoDialogOpenContext* KPACGCNCPJE(::System::Int32 AMNLJNNOOKM, ::System::Collections::Generic::List_1<::System::Int32>* FBAKIIMLAIB)
	{
		return ((::MoleMole::UITriDiceOracleInfoDialogOpenContext*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KPACGCNCPJE_OFFSET))(this, AMNLJNNOOKM, FBAKIIMLAIB);
	}

	::System::String* HIOJMJJLOKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HIOJMJJLOKL_OFFSET))(this);
	}

	::System::Single EEBPAGMKAHD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EEBPAGMKAHD_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2> HICJJKOKMPL(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HICJJKOKMPL_OFFSET))(this, FAIPFCNDLDE);
	}

	::MoleMole::Config::ConfigUITriDiceOracle* MLBJLKAAFOB()
	{
		return ((::MoleMole::Config::ConfigUITriDiceOracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_MLBJLKAAFOB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CPGKBCJCEMN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CPGKBCJCEMN_OFFSET))(this);
	}

	::System::Boolean NNDMJCBPDOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_NNDMJCBPDOL_OFFSET))(this);
	}

	::System::Boolean MNOOAGMFDME(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_MNOOAGMFDME_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Single GNFLCJDDIOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_GNFLCJDDIOF_OFFSET))(this);
	}

	::System::Void LHJCOBPNNEN(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LHJCOBPNNEN_OFFSET))(this, FAIPFCNDLDE);
	}

	::System::Boolean KCCMHFIFBGH(::System::Int32 LCIANCHHHPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KCCMHFIFBGH_OFFSET))(this, LCIANCHHHPI);
	}

	::DBMAHDDGMHM_1<::System::Single>* ELFJGNBCFEI()
	{
		return ((::DBMAHDDGMHM_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ELFJGNBCFEI_OFFSET))(this);
	}

	::System::Void EBNHJHMDDKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EBNHJHMDDKH_OFFSET))(this);
	}

	::MoleMole::TriDiceLuckPerformType AKCBIMALNJM()
	{
		return ((::MoleMole::TriDiceLuckPerformType(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_AKCBIMALNJM_OFFSET))(this);
	}

	::System::Void JIHPOLFBKLI(::GBEDNHDKIOM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GBEDNHDKIOM*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_JIHPOLFBKLI_OFFSET))(this, LJBPECKCCEA);
	}

	::Cysharp::Threading::Tasks::UniTask EHMKGCNKOOI(::EKFPPMNCGPE* FAIPFCNDLDE, ::System::Threading::CancellationTokenSource* MPPGOFIIMEM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EKFPPMNCGPE*, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EHMKGCNKOOI_OFFSET))(this, FAIPFCNDLDE, MPPGOFIIMEM);
	}

	::System::Void OKHINBNOLNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_OKHINBNOLNK_OFFSET))(this);
	}

	::UnityEngine::Vector3 ECGDIIMGBIE(::EKFPPMNCGPE* FAIPFCNDLDE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::EKFPPMNCGPE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_ECGDIIMGBIE_OFFSET))(this, FAIPFCNDLDE);
	}

	::DBMAHDDGMHM_1<::System::String*>* KBKEOEBHEHH()
	{
		return ((::DBMAHDDGMHM_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_KBKEOEBHEHH_OFFSET))(this);
	}

	::System::Int32 BLNKGDPLPIG(::System::Int32 HGKHKAPNGMC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_BLNKGDPLPIG_OFFSET))(this, HGKHKAPNGMC);
	}

	::System::Void EMHCMGKICON(::HNHGNNGIPDE* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::HNHGNNGIPDE*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_EMHCMGKICON_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HHCDCIBGAED()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_HHCDCIBGAED_OFFSET))(this);
	}
};
