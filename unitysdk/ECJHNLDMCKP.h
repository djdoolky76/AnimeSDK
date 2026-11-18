#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHNLDMCKP_PGEJGLCLMNK.h"
#include "unitysdk/LHMKFBLNLIA.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/OAOKBOGILKB.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ECJHNLDMCKP_KEEFBPGNCIE.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define ECJHNLDMCKP_AALNPHOJJPC_1_OFFSET UNITYSDK_OFFSET(0x1548EAD0)
#define ECJHNLDMCKP_AALNPHOJJPC_OFFSET UNITYSDK_OFFSET(0x1548CB40)
#define ECJHNLDMCKP_ACHAHEJAFDP_1_OFFSET UNITYSDK_OFFSET(0x1548BC80)
#define ECJHNLDMCKP_ACHAHEJAFDP_2_OFFSET UNITYSDK_OFFSET(0x1548F100)
#define ECJHNLDMCKP_ACHAHEJAFDP_OFFSET UNITYSDK_OFFSET(0x1548BB60)
#define ECJHNLDMCKP_AJMCMGCEPOK_OFFSET UNITYSDK_OFFSET(0x15485100)
#define ECJHNLDMCKP_AKJPKEIHJGF_OFFSET UNITYSDK_OFFSET(0x1548B490)
#define ECJHNLDMCKP_ANFMDBKPHJI_OFFSET UNITYSDK_OFFSET(0x15489A40)
#define ECJHNLDMCKP_ANNBNEHKGJB_OFFSET UNITYSDK_OFFSET(0x15488230)
#define ECJHNLDMCKP_BDALFHPOHIH_OFFSET UNITYSDK_OFFSET(0x15486E20)
#define ECJHNLDMCKP_BDIMPDLCLOD_OFFSET UNITYSDK_OFFSET(0x1548E170)
#define ECJHNLDMCKP_BDJIEENLLPK_OFFSET UNITYSDK_OFFSET(0x15489930)
#define ECJHNLDMCKP_BEJCNNADNLA_OFFSET UNITYSDK_OFFSET(0x1548CE40)
#define ECJHNLDMCKP_BFLOIPCGFMA_1_OFFSET UNITYSDK_OFFSET(0x15488190)
#define ECJHNLDMCKP_BFLOIPCGFMA_2_OFFSET UNITYSDK_OFFSET(0x1548AC50)
#define ECJHNLDMCKP_BFLOIPCGFMA_3_OFFSET UNITYSDK_OFFSET(0x1548B5F0)
#define ECJHNLDMCKP_BFLOIPCGFMA_OFFSET UNITYSDK_OFFSET(0x15485570)
#define ECJHNLDMCKP_BIFLMAMHFNI_1_OFFSET UNITYSDK_OFFSET(0x1548D560)
#define ECJHNLDMCKP_BIFLMAMHFNI_OFFSET UNITYSDK_OFFSET(0x1548B3E0)
#define ECJHNLDMCKP_BJAFMFLOHGH_OFFSET UNITYSDK_OFFSET(0x15487BA0)
#define ECJHNLDMCKP_BJHHAJOIPDF_OFFSET UNITYSDK_OFFSET(0x154854D0)
#define ECJHNLDMCKP_BKLGNCHLHLK_OFFSET UNITYSDK_OFFSET(0x1548DC60)
#define ECJHNLDMCKP_BMJICOMIFPK_OFFSET UNITYSDK_OFFSET(0x15486080)
#define ECJHNLDMCKP_BPLKNMIAABB_OFFSET UNITYSDK_OFFSET(0x15486310)
#define ECJHNLDMCKP_CEDEDEGEMON_1_OFFSET UNITYSDK_OFFSET(0x1548B9E0)
#define ECJHNLDMCKP_CEDEDEGEMON_OFFSET UNITYSDK_OFFSET(0x1548B690)
#define ECJHNLDMCKP_CJLPHOAMABB_1_OFFSET UNITYSDK_OFFSET(0x1548A580)
#define ECJHNLDMCKP_CJLPHOAMABB_OFFSET UNITYSDK_OFFSET(0x15487EA0)
#define ECJHNLDMCKP_CJNKDGFJGKD_OFFSET UNITYSDK_OFFSET(0x1548CBF0)
#define ECJHNLDMCKP_DAGCIANFCPI_OFFSET UNITYSDK_OFFSET(0x154863B0)
#define ECJHNLDMCKP_DEEBJJIDLGK_OFFSET UNITYSDK_OFFSET(0x15485DA0)
#define ECJHNLDMCKP_DGOCCDLCHKF_OFFSET UNITYSDK_OFFSET(0x1548C760)
#define ECJHNLDMCKP_DHIGHHCIJJO_1_OFFSET UNITYSDK_OFFSET(0x15485A00)
#define ECJHNLDMCKP_DHIGHHCIJJO_2_OFFSET UNITYSDK_OFFSET(0x1548EC70)
#define ECJHNLDMCKP_DHIGHHCIJJO_OFFSET UNITYSDK_OFFSET(0x154857B0)
#define ECJHNLDMCKP_EBBOGEDMDKA_OFFSET UNITYSDK_OFFSET(0x1548DB50)
#define ECJHNLDMCKP_EBKLOEOKNEN_OFFSET UNITYSDK_OFFSET(0x1548E050)
#define ECJHNLDMCKP_EBKLPAHDBML_OFFSET UNITYSDK_OFFSET(0x15484E60)
#define ECJHNLDMCKP_ECNMHLKFLDF_OFFSET UNITYSDK_OFFSET(0x15485610)
#define ECJHNLDMCKP_EDPNLINKLIF_1_OFFSET UNITYSDK_OFFSET(0x1548D210)
#define ECJHNLDMCKP_EDPNLINKLIF_OFFSET UNITYSDK_OFFSET(0x154872C0)
#define ECJHNLDMCKP_EIICEFHINPA_OFFSET UNITYSDK_OFFSET(0x1548C470)
#define ECJHNLDMCKP_EMBLBEKHCKA_OFFSET UNITYSDK_OFFSET(0x1548BEF0)
#define ECJHNLDMCKP_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x154856B0)
#define ECJHNLDMCKP_FDALFODLKNK_OFFSET UNITYSDK_OFFSET(0x1548F1F0)
#define ECJHNLDMCKP_FDEMMNCMLGD_OFFSET UNITYSDK_OFFSET(0x15489C20)
#define ECJHNLDMCKP_FFFMODHMCEJ_1_OFFSET UNITYSDK_OFFSET(0x15489F30)
#define ECJHNLDMCKP_FFFMODHMCEJ_2_OFFSET UNITYSDK_OFFSET(0x154889D0)
#define ECJHNLDMCKP_FFFMODHMCEJ_OFFSET UNITYSDK_OFFSET(0x15488030)
#define ECJHNLDMCKP_FIGNKPFNBDC_OFFSET UNITYSDK_OFFSET(0x1548A900)
#define ECJHNLDMCKP_FKEAAIMDFAP_OFFSET UNITYSDK_OFFSET(0x15484DB0)
#define ECJHNLDMCKP_FLIBGLFKNOK_OFFSET UNITYSDK_OFFSET(0x15489D30)
#define ECJHNLDMCKP_FMIMMONEOCI_OFFSET UNITYSDK_OFFSET(0x15485EF0)
#define ECJHNLDMCKP_FNPENCGFHHP_OFFSET UNITYSDK_OFFSET(0x15489F90)
#define ECJHNLDMCKP_GABAILHNAGF_OFFSET UNITYSDK_OFFSET(0x1548D4B0)
#define ECJHNLDMCKP_GBEFNGECBBL_OFFSET UNITYSDK_OFFSET(0x1548CFA0)
#define ECJHNLDMCKP_GDAEKMINFMM_OFFSET UNITYSDK_OFFSET(0x1548D870)
#define ECJHNLDMCKP_GKMFPABFNHO_OFFSET UNITYSDK_OFFSET(0x1548EBF0)
#define ECJHNLDMCKP_GODLIFBEHKN_OFFSET UNITYSDK_OFFSET(0x15485400)
#define ECJHNLDMCKP_GPANKIPBKMD_OFFSET UNITYSDK_OFFSET(0x1548C9B0)
#define ECJHNLDMCKP_GPFLIPCEHID_OFFSET UNITYSDK_OFFSET(0x1548D6D0)
#define ECJHNLDMCKP_HAGOKGGAHNK_OFFSET UNITYSDK_OFFSET(0x15488530)
#define ECJHNLDMCKP_HFIMMCMDGCK_OFFSET UNITYSDK_OFFSET(0x1548E560)
#define ECJHNLDMCKP_HHOEIMDDNNE_OFFSET UNITYSDK_OFFSET(0x15484D00)
#define ECJHNLDMCKP_HIIBGGFFLKB_1_OFFSET UNITYSDK_OFFSET(0x1548BE70)
#define ECJHNLDMCKP_HIIBGGFFLKB_OFFSET UNITYSDK_OFFSET(0x15489EB0)
#define ECJHNLDMCKP_HMAICNLLIMH_OFFSET UNITYSDK_OFFSET(0x1548CCC0)
#define ECJHNLDMCKP_IAKNCOHMPKN_OFFSET UNITYSDK_OFFSET(0x154895A0)
#define ECJHNLDMCKP_IBFEHGJNBLM_OFFSET UNITYSDK_OFFSET(0x1548C3B0)
#define ECJHNLDMCKP_IDMIEEGNAPB_OFFSET UNITYSDK_OFFSET(0x15485E80)
#define ECJHNLDMCKP_IELCOHBGHPL_OFFSET UNITYSDK_OFFSET(0x15488140)
#define ECJHNLDMCKP_IFJIINPKIHC_OFFSET UNITYSDK_OFFSET(0x1548A200)
#define ECJHNLDMCKP_INPHLMEGJLB_1_OFFSET UNITYSDK_OFFSET(0x1548AF80)
#define ECJHNLDMCKP_INPHLMEGJLB_2_OFFSET UNITYSDK_OFFSET(0x1548E5E0)
#define ECJHNLDMCKP_INPHLMEGJLB_OFFSET UNITYSDK_OFFSET(0x1548ACF0)
#define ECJHNLDMCKP_IPOJFHAMHMO_OFFSET UNITYSDK_OFFSET(0x1548E320)
#define ECJHNLDMCKP_JBNDHPLILDA_OFFSET UNITYSDK_OFFSET(0x1548BE20)
#define ECJHNLDMCKP_JEHBMEKKPCA_OFFSET UNITYSDK_OFFSET(0x154861A0)
#define ECJHNLDMCKP_JEHPAHDJNIN_OFFSET UNITYSDK_OFFSET(0x15489440)
#define ECJHNLDMCKP_JEMFFHLBBHK_OFFSET UNITYSDK_OFFSET(0x1548E3A0)
#define ECJHNLDMCKP_JJHOIFBGJCP_OFFSET UNITYSDK_OFFSET(0x15484FD0)
#define ECJHNLDMCKP_JMDANJCGAKC_OFFSET UNITYSDK_OFFSET(0x15485390)
#define ECJHNLDMCKP_JMLPLJBOPNM_OFFSET UNITYSDK_OFFSET(0x15489670)
#define ECJHNLDMCKP_JOKIJDFKJKH_1_OFFSET UNITYSDK_OFFSET(0x1548C320)
#define ECJHNLDMCKP_JOKIJDFKJKH_OFFSET UNITYSDK_OFFSET(0x1548C0E0)
#define ECJHNLDMCKP_KAGFELOEKHJ_OFFSET UNITYSDK_OFFSET(0x15489A90)
#define ECJHNLDMCKP_KEDGIDADMON_OFFSET UNITYSDK_OFFSET(0x154892B0)
#define ECJHNLDMCKP_KGOIEKICMEM_OFFSET UNITYSDK_OFFSET(0x15487E30)
#define ECJHNLDMCKP_KKGDKJDAFBB_OFFSET UNITYSDK_OFFSET(0x1548E4C0)
#define ECJHNLDMCKP_KKLBKFCMHBO_OFFSET UNITYSDK_OFFSET(0x1548EA40)
#define ECJHNLDMCKP_KMCBIGIDLEC_1_OFFSET UNITYSDK_OFFSET(0x154885D0)
#define ECJHNLDMCKP_KMCBIGIDLEC_OFFSET UNITYSDK_OFFSET(0x15485020)
#define ECJHNLDMCKP_LDBHEHJCNEC_OFFSET UNITYSDK_OFFSET(0x15486100)
#define ECJHNLDMCKP_LEEBGADJPAL_OFFSET UNITYSDK_OFFSET(0x15489710)
#define ECJHNLDMCKP_LFLJMMADPCH_OFFSET UNITYSDK_OFFSET(0x1548BAC0)
#define ECJHNLDMCKP_LFOKAADAEEJ_OFFSET UNITYSDK_OFFSET(0x1548F970)
#define ECJHNLDMCKP_LGKANNMENKI_OFFSET UNITYSDK_OFFSET(0x15486270)
#define ECJHNLDMCKP_LGNPGPDPGEE_OFFSET UNITYSDK_OFFSET(0x15487AF0)
#define ECJHNLDMCKP_LHBOHNBMBIH_OFFSET UNITYSDK_OFFSET(0x1548A3A0)
#define ECJHNLDMCKP_LHEHGNBIEME_OFFSET UNITYSDK_OFFSET(0x1548E0D0)
#define ECJHNLDMCKP_LLKAJDIGPID_OFFSET UNITYSDK_OFFSET(0x15486ED0)
#define ECJHNLDMCKP_LOOIPKMKKDJ_1_OFFSET UNITYSDK_OFFSET(0x15487A40)
#define ECJHNLDMCKP_LOOIPKMKKDJ_2_OFFSET UNITYSDK_OFFSET(0x1548B070)
#define ECJHNLDMCKP_LOOIPKMKKDJ_3_OFFSET UNITYSDK_OFFSET(0x1548F8B0)
#define ECJHNLDMCKP_LOOIPKMKKDJ_OFFSET UNITYSDK_OFFSET(0x15484F10)
#define ECJHNLDMCKP_MANNHGCLBEP_OFFSET UNITYSDK_OFFSET(0x1548BF90)
#define ECJHNLDMCKP_MBLLLCPDHPD_OFFSET UNITYSDK_OFFSET(0x15489DF0)
#define ECJHNLDMCKP_MCMKKNNOONE_OFFSET UNITYSDK_OFFSET(0x15485D00)
#define ECJHNLDMCKP_MEMEOPKJGEF_OFFSET UNITYSDK_OFFSET(0x1548B370)
#define ECJHNLDMCKP_MEPIDDDKHDL_1_OFFSET UNITYSDK_OFFSET(0x15486520)
#define ECJHNLDMCKP_MEPIDDDKHDL_OFFSET UNITYSDK_OFFSET(0x154851C0)
#define ECJHNLDMCKP_MKKAAKMNJKO_OFFSET UNITYSDK_OFFSET(0x1548D7D0)
#define ECJHNLDMCKP_NBJGCNBBPJK_OFFSET UNITYSDK_OFFSET(0x1548CD90)
#define ECJHNLDMCKP_NELFFKGPPOO_OFFSET UNITYSDK_OFFSET(0x1545B670)
#define ECJHNLDMCKP_NGJPDGOMPGF_OFFSET UNITYSDK_OFFSET(0x154899C0)
#define ECJHNLDMCKP_NIDDHEMDLHF_OFFSET UNITYSDK_OFFSET(0x15488470)
#define ECJHNLDMCKP_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x1548E470)
#define ECJHNLDMCKP_NOJJMBOALCN_OFFSET UNITYSDK_OFFSET(0x15486480)
#define ECJHNLDMCKP_OBOMKGBILDH_OFFSET UNITYSDK_OFFSET(0x1548C840)
#define ECJHNLDMCKP_OFCPJGHMLEE_1_OFFSET UNITYSDK_OFFSET(0x1548ABC0)
#define ECJHNLDMCKP_OGCMCIIAAGJ_OFFSET UNITYSDK_OFFSET(0x154894F0)
#define ECJHNLDMCKP_OOJCIHANHNF_OFFSET UNITYSDK_OFFSET(0x1548D5E0)
#define ECJHNLDMCKP_PCAMNOEFMDP_OFFSET UNITYSDK_OFFSET(0x1548A9D0)
#define ECJHNLDMCKP_PEFGIKFAAOG_OFFSET UNITYSDK_OFFSET(0x1548CA90)
#define ECJHNLDMCKP_PJBJPBJPBBB_1_OFFSET UNITYSDK_OFFSET(0x1548D1C0)
#define ECJHNLDMCKP_PJBJPBJPBBB_OFFSET UNITYSDK_OFFSET(0x15487200)
#define ECJHNLDMCKP_PJBMDOLGLMH_OFFSET UNITYSDK_OFFSET(0x1548DD00)
#define ECJHNLDMCKP_PJEDCOFDLMP_OFFSET UNITYSDK_OFFSET(0x1548AA60)
#define ECJHNLDMCKP_PKBDCAPLGMM_1_OFFSET UNITYSDK_OFFSET(0x1548EFE0)
#define ECJHNLDMCKP_PKBDCAPLGMM_2_OFFSET UNITYSDK_OFFSET(0x1548B220)
#define ECJHNLDMCKP_PKBDCAPLGMM_OFFSET UNITYSDK_OFFSET(0x1548B130)
#define ECJHNLDMCKP_PLFBKOLEIGI_OFFSET UNITYSDK_OFFSET(0x1548A6B0)
#define ECJHNLDMCKP_PPOAPCDNHEM_OFFSET UNITYSDK_OFFSET(0x1548A460)

inline static constexpr unsigned int ECJHNLDMCKP_TypeDefinitionIndex = 86914;

class ECJHNLDMCKP : public ::System::Object
{
public:
	static ::System::Void HHOEIMDDNNE(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HHOEIMDDNNE_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Void FKEAAIMDFAP(::UnityEngine::Transform* LNEEMAGIHLB, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean OIMNDHJAAAE)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FKEAAIMDFAP_OFFSET))(LNEEMAGIHLB, JNLBPMKIFNK, OIMNDHJAAAE);
	}

	static ::System::Void EBKLPAHDBML(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EBKLPAHDBML_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Void LOOIPKMKKDJ(::System::UInt64& LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO, ::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::System::UInt64&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LOOIPKMKKDJ_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO, HFMHOELKCAJ);
	}

	static ::System::Boolean JJHOIFBGJCP(::UnityEngine::LayerMask FBNGKPGLADH, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::UnityEngine::LayerMask, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JJHOIFBGJCP_OFFSET))(FBNGKPGLADH, KMOHKCADPNA);
	}

	static ::System::Single KMCBIGIDLEC(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KMCBIGIDLEC_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::System::Void MEPIDDDKHDL(::System::Double EJCBEJMGFAJ, ::System::Double EBFCACIEKBC, ::System::Double CBLGCIFLMKL, ::System::Nullable_1<::System::Double>& FEFMMPHIDED, ::System::Nullable_1<::System::Double>& NPPMCAHIFCF)
	{
		return ((::System::Void(*)(::System::Double, ::System::Double, ::System::Double, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MEPIDDDKHDL_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, FEFMMPHIDED, NPPMCAHIFCF);
	}

	static ::System::Void GODLIFBEHKN(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GODLIFBEHKN_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Boolean BFLOIPCGFMA(::System::UInt32 LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BFLOIPCGFMA_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO);
	}

	static ::UnityEngine::Keyframe ECNMHLKFLDF(::UnityEngine::AnimationCurve* HFOACGNJGFJ)
	{
		return ((::UnityEngine::Keyframe(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ECNMHLKFLDF_OFFSET))(HFOACGNJGFJ);
	}

	static ::System::Single FCFOEJGPDNO(::System::Single IMLLDOHDCNC, ::UnityEngine::Keyframe NECMFGLLOCC, ::UnityEngine::Keyframe JGPGHCHPOEM)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FCFOEJGPDNO_OFFSET))(IMLLDOHDCNC, NECMFGLLOCC, JGPGHCHPOEM);
	}

	static ::System::Nullable_1<::System::Single> DHIGHHCIJJO(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DHIGHHCIJJO_OFFSET))(PAECLIFBAKM, EGEGIMGMJHN);
	}

	static ::System::Void BJHHAJOIPDF(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BJHHAJOIPDF_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Void MCMKKNNOONE(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MCMKKNNOONE_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Void DEEBJJIDLGK(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DEEBJJIDLGK_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Void IDMIEEGNAPB(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IDMIEEGNAPB_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void BMJICOMIFPK(::UnityEngine::AnimationCurve* PAECLIFBAKM)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BMJICOMIFPK_OFFSET))(PAECLIFBAKM);
	}

	static ::System::Void LDBHEHJCNEC(::System::Nullable_1<::System::Double>& HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LDBHEHJCNEC_OFFSET))(HAAEBCOBKFF);
	}

	static ::System::Void JEHBMEKKPCA(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JEHBMEKKPCA_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void BPLKNMIAABB(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BPLKNMIAABB_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void DAGCIANFCPI(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DAGCIANFCPI_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void MEPIDDDKHDL_1(::System::Double EJCBEJMGFAJ, ::System::Double EBFCACIEKBC, ::System::Double CBLGCIFLMKL, ::System::Double MKBCMHIAMHF, ::System::Nullable_1<::System::Double>& FEFMMPHIDED, ::System::Nullable_1<::System::Double>& NPPMCAHIFCF, ::System::Nullable_1<::System::Double>& KBGFAFCIPEH)
	{
		return ((::System::Void(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MEPIDDDKHDL_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, MKBCMHIAMHF, FEFMMPHIDED, NPPMCAHIFCF, KBGFAFCIPEH);
	}

	static ::System::Single LLKAJDIGPID(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Single(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LLKAJDIGPID_OFFSET))(ICAAMDMMDDJ, HIAIKHDFCLN);
	}

	static ::System::Single PJBJPBJPBBB(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PJBJPBJPBBB_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::System::Void LOOIPKMKKDJ_1(::System::UInt32& LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO, ::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LOOIPKMKKDJ_1_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO, HFMHOELKCAJ);
	}

	static ::System::Void LGNPGPDPGEE(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LGNPGPDPGEE_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Boolean BJAFMFLOHGH(::UnityEngine::Transform* JNLBPMKIFNK, ::UnityEngine::Transform* LMHNJIBCLJF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BJAFMFLOHGH_OFFSET))(JNLBPMKIFNK, LMHNJIBCLJF);
	}

	static ::UnityEngine::Color KGOIEKICMEM(::UnityEngine::Color JBBFCGAMDHI, ::System::Single KGHNBNOMMJI)
	{
		return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KGOIEKICMEM_OFFSET))(JBBFCGAMDHI, KGHNBNOMMJI);
	}

	static ::UnityEngine::Vector3 CJLPHOAMABB(::UnityEngine::Vector3 HFMHOELKCAJ, ::System::Int32 BNMNDKJFMGK)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_CJLPHOAMABB_OFFSET))(HFMHOELKCAJ, BNMNDKJFMGK);
	}

	static ::System::Single FFFMODHMCEJ(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO, ::System::Single BFCLBCOCDFJ)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FFFMODHMCEJ_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, BFCLBCOCDFJ);
	}

	static ::System::Boolean IELCOHBGHPL(::OAOKBOGILKB FCPCLIJNDLA, ::OAOKBOGILKB HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::OAOKBOGILKB, ::OAOKBOGILKB))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IELCOHBGHPL_OFFSET))(FCPCLIJNDLA, HODAIDNDKHD);
	}

	static ::System::Boolean BFLOIPCGFMA_1(::System::UInt16 LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BFLOIPCGFMA_1_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO);
	}

	static ::UnityEngine::Transform* ANNBNEHKGJB(::UnityEngine::Transform* JNLBPMKIFNK, ::System::String* KMFEJOHNAKI)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ANNBNEHKGJB_OFFSET))(JNLBPMKIFNK, KMFEJOHNAKI);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> NIDDHEMDLHF(::System::Int32 EGEGIMGMJHN, ::System::Int32 HMJCBECJHCP, ::System::Boolean MAAANLFCAGA)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NIDDHEMDLHF_OFFSET))(EGEGIMGMJHN, HMJCBECJHCP, MAAANLFCAGA);
	}

	static ::System::Void HAGOKGGAHNK(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HAGOKGGAHNK_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Single KMCBIGIDLEC_1(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KMCBIGIDLEC_1_OFFSET))(PAECLIFBAKM, GIAEPMKCBIB, DOBFFIICAII);
	}

	static ::System::Void KEDGIDADMON(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KEDGIDADMON_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::UnityEngine::Keyframe JEHPAHDJNIN(::UnityEngine::AnimationCurve* HFOACGNJGFJ)
	{
		return ((::UnityEngine::Keyframe(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JEHPAHDJNIN_OFFSET))(HFOACGNJGFJ);
	}

	static ::System::Void OGCMCIIAAGJ(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_OGCMCIIAAGJ_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Void IAKNCOHMPKN(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IAKNCOHMPKN_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::UnityEngine::AnimationClip* LEEBGADJPAL(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* HIAIKHDFCLN)
	{
		return ((::UnityEngine::AnimationClip*(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LEEBGADJPAL_OFFSET))(ICAAMDMMDDJ, HIAIKHDFCLN);
	}

	static ::UnityEngine::Vector3 BDJIEENLLPK(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BDJIEENLLPK_OFFSET))(HFMHOELKCAJ);
	}

	static ::UnityEngine::Color NGJPDGOMPGF(::System::Single EGEGIMGMJHN)
	{
		return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NGJPDGOMPGF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean ANFMDBKPHJI(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String* KGKOFPIAODG)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ANFMDBKPHJI_OFFSET))(ICAAMDMMDDJ, KGKOFPIAODG);
	}

	static ::System::Void KAGFELOEKHJ(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KAGFELOEKHJ_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Single FDEMMNCMLGD(::Il2CppArray<::System::Single>* HFMHOELKCAJ)
	{
		return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FDEMMNCMLGD_OFFSET))(HFMHOELKCAJ);
	}

	static ::System::Int32 FLIBGLFKNOK(::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection GBBKMOIGDFP)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FLIBGLFKNOK_OFFSET))(GBBKMOIGDFP);
	}

	static ::System::Void MBLLLCPDHPD(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MBLLLCPDHPD_OFFSET))(GKBJOPJKCLB, HBEKKMCBGBK);
	}

	static ::System::String* HIIBGGFFLKB(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HIIBGGFFLKB_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single FFFMODHMCEJ_1(::UnityEngine::AnimationCurve* OMPHGGCEIBD, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FFFMODHMCEJ_1_OFFSET))(OMPHGGCEIBD, FNIOPKPHDEH);
	}

	static ::System::Void FNPENCGFHHP(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FNPENCGFHHP_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void IFJIINPKIHC(::UnityEngine::ParticleSystem* JFGELGEHMGF, ::System::Single EJCBEJMGFAJ)
	{
		return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IFJIINPKIHC_OFFSET))(JFGELGEHMGF, EJCBEJMGFAJ);
	}

	static ::System::Void LHBOHNBMBIH(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::UnityEngine::AnimationCurve* NJGOFGEDAGM)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LHBOHNBMBIH_OFFSET))(PAECLIFBAKM, NJGOFGEDAGM);
	}

	static ::UnityEngine::Vector2 CJLPHOAMABB_1(::UnityEngine::Vector2 HFMHOELKCAJ, ::System::Int32 BNMNDKJFMGK)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_CJLPHOAMABB_1_OFFSET))(HFMHOELKCAJ, BNMNDKJFMGK);
	}

	static ::System::Void PLFBKOLEIGI(::UnityEngine::Material* AEIHFBNNLBP, ::System::Single EJCBEJMGFAJ)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PLFBKOLEIGI_OFFSET))(AEIHFBNNLBP, EJCBEJMGFAJ);
	}

	static ::System::Void FIGNKPFNBDC(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FIGNKPFNBDC_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Single PCAMNOEFMDP(::System::Random* MFEPCLGOHPI, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Random*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PCAMNOEFMDP_OFFSET))(MFEPCLGOHPI, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Boolean PJEDCOFDLMP(::UnityEngine::Renderer* OCFHGOGFGPE, ::UnityEngine::Camera* KONLMDBCDCK, ::System::Single KHHOPGCHCKH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PJEDCOFDLMP_OFFSET))(OCFHGOGFGPE, KONLMDBCDCK, KHHOPGCHCKH);
	}

	static ::System::Int32 OFCPJGHMLEE_1(::System::Collections::Generic::List_1<::System::Int32>* DOEGACMLCGI)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_OFCPJGHMLEE_1_OFFSET))(DOEGACMLCGI);
	}

	static ::System::Boolean BFLOIPCGFMA_2(::System::Byte LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BFLOIPCGFMA_2_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO);
	}

	static ::UnityEngine::Vector2 INPHLMEGJLB(::UnityEngine::Vector2 EGEGIMGMJHN, ::UnityEngine::Vector2 GDBANLBHNJK, ::UnityEngine::Vector2 NHIAJMGIPFE, ::UnityEngine::Vector2 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_INPHLMEGJLB_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, NHIAJMGIPFE, DNFNKBNBJHM);
	}

	static ::System::Void LOOIPKMKKDJ_2(::System::UInt16& LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO, ::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::System::UInt16&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LOOIPKMKKDJ_2_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO, HFMHOELKCAJ);
	}

	static ::UnityEngine::Vector2 PKBDCAPLGMM(::UnityEngine::Vector2 EGEGIMGMJHN, ::UnityEngine::Vector2 GDBANLBHNJK, ::UnityEngine::Vector2 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PKBDCAPLGMM_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Void MEMEOPKJGEF(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MEMEOPKJGEF_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Single BIFLMAMHFNI(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BIFLMAMHFNI_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Void AKJPKEIHJGF(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_AKJPKEIHJGF_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Boolean BFLOIPCGFMA_3(::System::UInt64 LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BFLOIPCGFMA_3_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO);
	}

	static ::System::Single CEDEDEGEMON(::UnityEngine::AnimationCurve* OMPHGGCEIBD, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_CEDEDEGEMON_OFFSET))(OMPHGGCEIBD, FNIOPKPHDEH);
	}

	static ::System::Void LFLJMMADPCH(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LFLJMMADPCH_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Boolean JMDANJCGAKC(::System::Double BIOGEIHKABE, ::System::Double DBKJMLKKNFC)
	{
		return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JMDANJCGAKC_OFFSET))(BIOGEIHKABE, DBKJMLKKNFC);
	}

	static ::UnityEngine::Vector3 ACHAHEJAFDP(::UnityEngine::Vector3 EGEGIMGMJHN, ::UnityEngine::Vector3 GDBANLBHNJK, ::UnityEngine::Vector3 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ACHAHEJAFDP_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::UnityEngine::Transform* JBNDHPLILDA(::UnityEngine::Transform* JNLBPMKIFNK, ::System::String* KMFEJOHNAKI)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JBNDHPLILDA_OFFSET))(JNLBPMKIFNK, KMFEJOHNAKI);
	}

	static ::System::String* HIIBGGFFLKB_1(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HIIBGGFFLKB_1_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Single AJMCMGCEPOK(::System::Single IMLLDOHDCNC, ::ECJHNLDMCKP_KEEFBPGNCIE& param_1)
	{
		return ((::System::Single(*)(::System::Single, ::ECJHNLDMCKP_KEEFBPGNCIE&))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_AJMCMGCEPOK_OFFSET))(IMLLDOHDCNC, param_1);
	}

	static ::System::Void EMBLBEKHCKA(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EMBLBEKHCKA_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::UnityEngine::GameObject* MANNHGCLBEP(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 KMOHKCADPNA, ::System::Boolean BDFKFEBPIOH)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MANNHGCLBEP_OFFSET))(NJOAJLDJCCJ, KMOHKCADPNA, BDFKFEBPIOH);
	}

	static ::UnityEngine::Vector3 JOKIJDFKJKH(::UnityEngine::Vector3 ELHMOANKHFM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JOKIJDFKJKH_OFFSET))(ELHMOANKHFM);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> IBFEHGJNBLM(::System::Int32 EGEGIMGMJHN, ::System::Int32 HMJCBECJHCP, ::System::Boolean MAAANLFCAGA)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IBFEHGJNBLM_OFFSET))(EGEGIMGMJHN, HMJCBECJHCP, MAAANLFCAGA);
	}

	static ::System::Void EIICEFHINPA(::System::Single EGEGIMGMJHN, ::UnityEngine::Keyframe NECMFGLLOCC, ::UnityEngine::Keyframe JGPGHCHPOEM, ::System::Nullable_1<::System::Double>& FEFMMPHIDED, ::System::Nullable_1<::System::Double>& NPPMCAHIFCF, ::System::Nullable_1<::System::Double>& KBGFAFCIPEH)
	{
		return ((::System::Void(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EIICEFHINPA_OFFSET))(EGEGIMGMJHN, NECMFGLLOCC, JGPGHCHPOEM, FEFMMPHIDED, NPPMCAHIFCF, KBGFAFCIPEH);
	}

	static ::System::Single INPHLMEGJLB_1(::System::Single EGEGIMGMJHN, ::System::Single GDBANLBHNJK, ::System::Single NHIAJMGIPFE, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_INPHLMEGJLB_1_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, NHIAJMGIPFE, DNFNKBNBJHM);
	}

	static ::System::Void DGOCCDLCHKF(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DGOCCDLCHKF_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Double BDALFHPOHIH(::System::Double BIOGEIHKABE)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BDALFHPOHIH_OFFSET))(BIOGEIHKABE);
	}

	static ::UnityEngine::Quaternion OBOMKGBILDH(::UnityEngine::Quaternion MIIDPCDJEDC)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_OBOMKGBILDH_OFFSET))(MIIDPCDJEDC);
	}

	static ::System::Single ACHAHEJAFDP_1(::System::Single EGEGIMGMJHN, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ACHAHEJAFDP_1_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Void GPANKIPBKMD(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GPANKIPBKMD_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Void PEFGIKFAAOG(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PEFGIKFAAOG_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::UnityEngine::Vector2 AALNPHOJJPC(::UnityEngine::Vector2 EGEGIMGMJHN, ::UnityEngine::Vector2 GDBANLBHNJK, ::UnityEngine::Vector2 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_AALNPHOJJPC_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::UnityEngine::Vector3 CJNKDGFJGKD(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_CJNKDGFJGKD_OFFSET))(HFMHOELKCAJ);
	}

	static ::System::Void HMAICNLLIMH(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HMAICNLLIMH_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void NBJGCNBBPJK(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NBJGCNBBPJK_OFFSET))(GKBJOPJKCLB, CKPGOKHECCH);
	}

	static ::System::Void BEJCNNADNLA(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BEJCNNADNLA_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Single CEDEDEGEMON_1(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO, ::System::Single BFCLBCOCDFJ)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_CEDEDEGEMON_1_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, BFCLBCOCDFJ);
	}

	static ::MoleMole::Vector2Int GBEFNGECBBL(::MoleMole::HollowChessPieceSizeType OKEGLNKFJEO)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GBEFNGECBBL_OFFSET))(OKEGLNKFJEO);
	}

	static ::System::Single PJBJPBJPBBB_1(::UnityEngine::AnimationCurve* OMPHGGCEIBD)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PJBJPBJPBBB_1_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Void GABAILHNAGF(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GABAILHNAGF_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}

	static ::System::Single BIFLMAMHFNI_1(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BIFLMAMHFNI_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean OOJCIHANHNF(::UnityEngine::Transform* JNLBPMKIFNK, ::UnityEngine::Transform* LMHNJIBCLJF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_OOJCIHANHNF_OFFSET))(JNLBPMKIFNK, LMHNJIBCLJF);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> EDPNLINKLIF(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EDPNLINKLIF_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::System::Boolean MKKAAKMNJKO(::UnityEngine::Renderer* OCFHGOGFGPE, ::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_MKKAAKMNJKO_OFFSET))(OCFHGOGFGPE, KONLMDBCDCK);
	}

	static ::System::Void FMIMMONEOCI(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FMIMMONEOCI_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Boolean GDAEKMINFMM(::UnityEngine::Renderer* OCFHGOGFGPE, ::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GDAEKMINFMM_OFFSET))(OCFHGOGFGPE, KONLMDBCDCK);
	}

	static ::UnityEngine::AnimationCurve* EBBOGEDMDKA(::UnityEngine::AnimationCurve* PAECLIFBAKM)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EBBOGEDMDKA_OFFSET))(PAECLIFBAKM);
	}

	static ::System::Void LGKANNMENKI(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LGKANNMENKI_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void BKLGNCHLHLK(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BKLGNCHLHLK_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void PJBMDOLGLMH(::UnityEngine::Transform* JNLBPMKIFNK, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PJBMDOLGLMH_OFFSET))(JNLBPMKIFNK, DEBGKPLOPCG);
	}

	static ::System::Nullable_1<::System::Single> DHIGHHCIJJO_1(::System::Single EGEGIMGMJHN, ::UnityEngine::Keyframe NECMFGLLOCC, ::UnityEngine::Keyframe JGPGHCHPOEM)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DHIGHHCIJJO_1_OFFSET))(EGEGIMGMJHN, NECMFGLLOCC, JGPGHCHPOEM);
	}

	static ::UnityEngine::Vector3 EBKLOEOKNEN(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EBKLOEOKNEN_OFFSET))(HFMHOELKCAJ);
	}

	static ::System::Void LHEHGNBIEME(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LHEHGNBIEME_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::UnityEngine::Vector3 BDIMPDLCLOD(::UnityEngine::Vector3 HFMHOELKCAJ, ::System::Single PGEMBPEBCIL, ::System::Single LFAFAKOPACE)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_BDIMPDLCLOD_OFFSET))(HFMHOELKCAJ, PGEMBPEBCIL, LFAFAKOPACE);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> GPFLIPCEHID(::UnityEngine::Keyframe KDEHMPGOCEP, ::UnityEngine::Keyframe PADJNMGMGHO)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GPFLIPCEHID_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::UnityEngine::Vector3 IPOJFHAMHMO(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_IPOJFHAMHMO_OFFSET))(HFMHOELKCAJ);
	}

	static ::Share::GridDir JEMFFHLBBHK(::LHMKFBLNLIA KHGEFDCJDOP)
	{
		return ((::Share::GridDir(*)(::LHMKFBLNLIA))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JEMFFHLBBHK_OFFSET))(KHGEFDCJDOP);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> EDPNLINKLIF_1(::UnityEngine::AnimationCurve* OMPHGGCEIBD)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_EDPNLINKLIF_1_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Boolean NIIHMPMKICM(::UnityEngine::Color32 EJCBEJMGFAJ, ::UnityEngine::Color32 EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NIIHMPMKICM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Void KKGDKJDAFBB(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KKGDKJDAFBB_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Single JOKIJDFKJKH_1(::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JOKIJDFKJKH_1_OFFSET))(ELHMOANKHFM);
	}

	static ::System::Int32 HFIMMCMDGCK(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_HFIMMCMDGCK_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::GameObject* NELFFKGPPOO(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 KMOHKCADPNA, ::System::Boolean BDFKFEBPIOH)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NELFFKGPPOO_OFFSET))(NJOAJLDJCCJ, KMOHKCADPNA, BDFKFEBPIOH);
	}

	static ::UnityEngine::Vector3 INPHLMEGJLB_2(::UnityEngine::Vector3 EGEGIMGMJHN, ::UnityEngine::Vector3 GDBANLBHNJK, ::UnityEngine::Vector3 NHIAJMGIPFE, ::UnityEngine::Vector3 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_INPHLMEGJLB_2_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, NHIAJMGIPFE, DNFNKBNBJHM);
	}

	static ::System::String* KKLBKFCMHBO(::System::Int32 EGEGIMGMJHN, ::System::Int32 OFNEJNFCFLE)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_KKLBKFCMHBO_OFFSET))(EGEGIMGMJHN, OFNEJNFCFLE);
	}

	static ::UnityEngine::Vector3 AALNPHOJJPC_1(::UnityEngine::Vector3 EGEGIMGMJHN, ::UnityEngine::Vector3 GDBANLBHNJK, ::UnityEngine::Vector3 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_AALNPHOJJPC_1_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::String* GKMFPABFNHO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_GKMFPABFNHO_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JMLPLJBOPNM(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_JMLPLJBOPNM_OFFSET))(GKBJOPJKCLB, HAAEBCOBKFF);
	}

	static ::System::Single FFFMODHMCEJ_2(::UnityEngine::AnimationCurve* OMPHGGCEIBD, ::System::Single FNIOPKPHDEH, ::ECJHNLDMCKP_PGEJGLCLMNK FLDFNMOPMON)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::ECJHNLDMCKP_PGEJGLCLMNK))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FFFMODHMCEJ_2_OFFSET))(OMPHGGCEIBD, FNIOPKPHDEH, FLDFNMOPMON);
	}

	static ::System::Void PPOAPCDNHEM(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::UnityEngine::AnimationCurve* NJGOFGEDAGM)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PPOAPCDNHEM_OFFSET))(PAECLIFBAKM, NJGOFGEDAGM);
	}

	static ::System::Nullable_1<::System::Single> DHIGHHCIJJO_2(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::System::Single GIAEPMKCBIB, ::System::Single DOBFFIICAII, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_DHIGHHCIJJO_2_OFFSET))(PAECLIFBAKM, GIAEPMKCBIB, DOBFFIICAII, EGEGIMGMJHN);
	}

	static ::UnityEngine::Vector3 PKBDCAPLGMM_1(::UnityEngine::Vector3 EGEGIMGMJHN, ::UnityEngine::Vector3 GDBANLBHNJK, ::UnityEngine::Vector3 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PKBDCAPLGMM_1_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::UnityEngine::Vector2 ACHAHEJAFDP_2(::UnityEngine::Vector2 EGEGIMGMJHN, ::UnityEngine::Vector2 GDBANLBHNJK, ::UnityEngine::Vector2 DNFNKBNBJHM)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_ACHAHEJAFDP_2_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Single PKBDCAPLGMM_2(::System::Single EGEGIMGMJHN, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_PKBDCAPLGMM_2_OFFSET))(EGEGIMGMJHN, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Void NOJJMBOALCN(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_NOJJMBOALCN_OFFSET))(GKBJOPJKCLB, GNHOCNHLCCA);
	}

	static ::System::Void FDALFODLKNK(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Boolean IOKNPLAMIKB, ::System::Collections::Generic::List_1<::System::String*>* EFLMAPECFDA)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_FDALFODLKNK_OFFSET))(LNEEMAGIHLB, IOKNPLAMIKB, EFLMAPECFDA);
	}

	static ::System::Void LOOIPKMKKDJ_3(::System::Byte& LBPIPEAKPDG, ::System::Int32 KBNHAJHPKPO, ::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LOOIPKMKKDJ_3_OFFSET))(LBPIPEAKPDG, KBNHAJHPKPO, HFMHOELKCAJ);
	}

	static ::System::Void LFOKAADAEEJ(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + ECJHNLDMCKP_LFOKAADAEEJ_OFFSET))(GKBJOPJKCLB, BFMMEICFNCD);
	}
};
