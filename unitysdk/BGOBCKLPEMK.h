#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGOBCKLPEMK_NNCOONLKENF.h"
#include "unitysdk/FFHBHCGJMHL.h"
#include "unitysdk/LNMFOJCBPLC.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class AKDDNBHNGON;
class BCNMLILBENC;
class BGOBCKLPEMK_CPEEBAFNFNC;
class CJEEJFDPPNG;
class FGNNHFLGJBK;
class FNHGDJOJACD;
class HEPGNMDHHGM;
class IBEJMEEEJMB;
class ODAKFODAONI;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class EntityHitMotion; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define BGOBCKLPEMK_ALLIGKBOGLK_OFFSET UNITYSDK_OFFSET(0x151D5350)
#define BGOBCKLPEMK_ANOLHKHDGMJ_OFFSET UNITYSDK_OFFSET(0x151D3A30)
#define BGOBCKLPEMK_BIJOBKHCFOA_OFFSET UNITYSDK_OFFSET(0x151D0B80)
#define BGOBCKLPEMK_BOMKIHFGPKE_OFFSET UNITYSDK_OFFSET(0x151D1960)
#define BGOBCKLPEMK_BPHDEMOKEBH_OFFSET UNITYSDK_OFFSET(0x151D65A0)
#define BGOBCKLPEMK_CEAALHCMAGE_OFFSET UNITYSDK_OFFSET(0x151D1A70)
#define BGOBCKLPEMK_CFDMJGGPDCP_OFFSET UNITYSDK_OFFSET(0x151D1AE0)
#define BGOBCKLPEMK_CGKHLCOPDIF_OFFSET UNITYSDK_OFFSET(0x151D1410)
#define BGOBCKLPEMK_CJFABCKJFLG_OFFSET UNITYSDK_OFFSET(0x151D5140)
#define BGOBCKLPEMK_CNLNGHPGBAC_OFFSET UNITYSDK_OFFSET(0x151D1CD0)
#define BGOBCKLPEMK_CPLFDJHJGNA_OFFSET UNITYSDK_OFFSET(0x151D17D0)
#define BGOBCKLPEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x151D0910)
#define BGOBCKLPEMK_DFKECDNDGEO_OFFSET UNITYSDK_OFFSET(0x151D71C0)
#define BGOBCKLPEMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151D0950)
#define BGOBCKLPEMK_EEHGFJEOGBA_OFFSET UNITYSDK_OFFSET(0x151D53D0)
#define BGOBCKLPEMK_EJAHKPGEOOM_OFFSET UNITYSDK_OFFSET(0x151D2510)
#define BGOBCKLPEMK_ELBMDKCHMNI_OFFSET UNITYSDK_OFFSET(0x151D7310)
#define BGOBCKLPEMK_ELDFFKDACFP_OFFSET UNITYSDK_OFFSET(0x151D2220)
#define BGOBCKLPEMK_ENKCGKLGNMN_OFFSET UNITYSDK_OFFSET(0x151D39B0)
#define BGOBCKLPEMK_EOHABEDNIPC_OFFSET UNITYSDK_OFFSET(0x151D6CD0)
#define BGOBCKLPEMK_FFLMBFFEHLC_OFFSET UNITYSDK_OFFSET(0x151D5700)
#define BGOBCKLPEMK_GEHDFGKKFMD_OFFSET UNITYSDK_OFFSET(0x151D5670)
#define BGOBCKLPEMK_GEKDOLHBPNJ_OFFSET UNITYSDK_OFFSET(0x151D1FF0)
#define BGOBCKLPEMK_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x151D08E0)
#define BGOBCKLPEMK_GET_ATTACHEFFECTMOTIONTOTAL_OFFSET UNITYSDK_OFFSET(0x151D7370)
#define BGOBCKLPEMK_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x151D08F0)
#define BGOBCKLPEMK_GET_ISATTACHMOTIONWITHEFFECT_OFFSET UNITYSDK_OFFSET(0x151D7350)
#define BGOBCKLPEMK_GET_LOGICALTOTALMOVEMENT_OFFSET UNITYSDK_OFFSET(0x151D38F0)
#define BGOBCKLPEMK_GET_MOTIONDELTAMODIFYDEL_OFFSET UNITYSDK_OFFSET(0x151D7330)
#define BGOBCKLPEMK_GET_SKILLLOGICALYAWOFFSET_OFFSET UNITYSDK_OFFSET(0x151D3930)
#define BGOBCKLPEMK_GGFLBGEBJON_OFFSET UNITYSDK_OFFSET(0x151D2320)
#define BGOBCKLPEMK_GKPDBIMGDKE_OFFSET UNITYSDK_OFFSET(0x151D47C0)
#define BGOBCKLPEMK_GNDAAOHGDHP_OFFSET UNITYSDK_OFFSET(0x151D1D60)
#define BGOBCKLPEMK_GNIHGMANFIJ_OFFSET UNITYSDK_OFFSET(0x151D72C0)
#define BGOBCKLPEMK_HELJCOPGIMD_OFFSET UNITYSDK_OFFSET(0x151D6020)
#define BGOBCKLPEMK_HJCNNMBJMOH_OFFSET UNITYSDK_OFFSET(0x151D14E0)
#define BGOBCKLPEMK_HKGEJFOLDAN_OFFSET UNITYSDK_OFFSET(0x151D71E0)
#define BGOBCKLPEMK_HMNPNOIKFFH_OFFSET UNITYSDK_OFFSET(0x151D2440)
#define BGOBCKLPEMK_HNFHIGFHBGH_OFFSET UNITYSDK_OFFSET(0x151D0DB0)
#define BGOBCKLPEMK_IGAHFGHFPIP_OFFSET UNITYSDK_OFFSET(0x151D42B0)
#define BGOBCKLPEMK_IJBEDKAFIIO_OFFSET UNITYSDK_OFFSET(0x151D55C0)
#define BGOBCKLPEMK_IKMAEEJOFPP_OFFSET UNITYSDK_OFFSET(0x151D6100)
#define BGOBCKLPEMK_JEJIBGLHMAO_OFFSET UNITYSDK_OFFSET(0x151D73B0)
#define BGOBCKLPEMK_JKOLNCKDKEJ_OFFSET UNITYSDK_OFFSET(0x151D2900)
#define BGOBCKLPEMK_JLBIIPHOAPO_OFFSET UNITYSDK_OFFSET(0x151D2890)
#define BGOBCKLPEMK_JPMKFEMCPGN_OFFSET UNITYSDK_OFFSET(0x151D3AA0)
#define BGOBCKLPEMK_KCDCMAGMGKI_OFFSET UNITYSDK_OFFSET(0x151D4390)
#define BGOBCKLPEMK_KDGCMELNKDA_OFFSET UNITYSDK_OFFSET(0x151D1EC0)
#define BGOBCKLPEMK_KGOLFHKCFBF_OFFSET UNITYSDK_OFFSET(0x151D6780)
#define BGOBCKLPEMK_LAGCMNNBKND_OFFSET UNITYSDK_OFFSET(0x151D6920)
#define BGOBCKLPEMK_LAMMAFJJHNM_OFFSET UNITYSDK_OFFSET(0x151D1560)
#define BGOBCKLPEMK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x151D3F80)
#define BGOBCKLPEMK_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x151D0EB0)
#define BGOBCKLPEMK_LMGFGAKBEBC_OFFSET UNITYSDK_OFFSET(0x151D38B0)
#define BGOBCKLPEMK_MACMLAMAPNO_OFFSET UNITYSDK_OFFSET(0x151D6B20)
#define BGOBCKLPEMK_MAEOBONHMFJ_OFFSET UNITYSDK_OFFSET(0x151D3BE0)
#define BGOBCKLPEMK_MBNOBNLECIH_OFFSET UNITYSDK_OFFSET(0x151D2430)
#define BGOBCKLPEMK_MCDPKCIJFJI_OFFSET UNITYSDK_OFFSET(0x151D41F0)
#define BGOBCKLPEMK_MIOJHBAELLE_OFFSET UNITYSDK_OFFSET(0x151D27B0)
#define BGOBCKLPEMK_MPGLCMALGHG_OFFSET UNITYSDK_OFFSET(0x151D0E00)
#define BGOBCKLPEMK_NCAPHHBDPEA_OFFSET UNITYSDK_OFFSET(0x151D3F30)
#define BGOBCKLPEMK_NEAJJGAGCMD_OFFSET UNITYSDK_OFFSET(0x151D37C0)
#define BGOBCKLPEMK_NGGBFHEOOPP_OFFSET UNITYSDK_OFFSET(0x151D3950)
#define BGOBCKLPEMK_NILOCEPPEJB_OFFSET UNITYSDK_OFFSET(0x151D3DA0)
#define BGOBCKLPEMK_NNCAIECLCLD_OFFSET UNITYSDK_OFFSET(0x151D54B0)
#define BGOBCKLPEMK_OIPLGLFEJAM_OFFSET UNITYSDK_OFFSET(0x151D3610)
#define BGOBCKLPEMK_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x151D5180)
#define BGOBCKLPEMK_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x151D1070)
#define BGOBCKLPEMK_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x151D1360)
#define BGOBCKLPEMK_PCGJPHBGLAG_OFFSET UNITYSDK_OFFSET(0x151D61E0)
#define BGOBCKLPEMK_PMEBJBINBJH_OFFSET UNITYSDK_OFFSET(0x151D35A0)
#define BGOBCKLPEMK_PMFGGFNDEHF_OFFSET UNITYSDK_OFFSET(0x151D63B0)
#define BGOBCKLPEMK_SET_ATTACHEFFECTMOTIONTOTAL_OFFSET UNITYSDK_OFFSET(0x151D7390)
#define BGOBCKLPEMK_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x151D0900)
#define BGOBCKLPEMK_SET_ISATTACHMOTIONWITHEFFECT_OFFSET UNITYSDK_OFFSET(0x151D7360)
#define BGOBCKLPEMK_SET_LOGICALTOTALMOVEMENT_OFFSET UNITYSDK_OFFSET(0x151D3910)
#define BGOBCKLPEMK_SET_MOTIONDELTAMODIFYDEL_OFFSET UNITYSDK_OFFSET(0x151D7340)
#define BGOBCKLPEMK_SET_SKILLLOGICALYAWOFFSET_OFFSET UNITYSDK_OFFSET(0x151D3940)

inline static constexpr unsigned int BGOBCKLPEMK_TypeDefinitionIndex = 58182;

	class BGOBCKLPEMK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::ODAKFODAONI* JJBKMHHAKIC; // 0x18
		::LNMFOJCBPLC LFCHJLOCNHP; // 0x20
		::FGNNHFLGJBK* PGALAIJOICA; // 0x38
		::CJEEJFDPPNG* JBJCIEFAPIG; // 0x40
		::UnityEngine::Transform* FAMOLEOMPMP; // 0x48
		::BGOBCKLPEMK_CPEEBAFNFNC* OBJIFPNGDIC; // 0x50
		::IBEJMEEEJMB* CMGGMAGPMEA; // 0x58
		::AKDDNBHNGON* MIHFBGNKBJA; // 0x60
		::RPG::GameCore::TransformComponent* KILJAPEKFAJ; // 0x68
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x70
		::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* _MotionDeltaModifyDel_k__BackingField; // 0x78
		::RPG::GameCore::EntityHitMotion* JLKBLBANDDM; // 0x80
		::HEPGNMDHHGM* AAKIJEIOPEC; // 0x88
		::FFHBHCGJMHL EHOCJEBKJJB; // 0x90
		::System::Single MFIFHCICOGN; // 0xA0
		::RPG::MVector3 PCPKJNCMJKP; // 0xA4
		::RPG::MVector3 AEOMKCMKEEK; // 0xB0
		::RPG::MVector3 _AttachEffectMotionTotal_k__BackingField; // 0xBC
		::System::Int32 JDKEKGODFLL; // 0xC8
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xCC
		::System::Boolean MFKFCJBNHEK; // 0xCD
		::System::Boolean _IsAttachMotionWithEffect_k__BackingField; // 0xCE
		::System::Boolean GIBGHJBCGLP; // 0xCF
		::RPG::MVector3 _LogicalTotalMovement_k__BackingField; // 0xD0
		::RPG::MVector3 IMKHGKNECJH; // 0xDC
		::System::Single GNGDPCFEADH; // 0xE8
		::System::Int32 FLAOJLGAGDM; // 0xEC
		::System::Nullable_1<::System::Single> MOLKECAPILL; // 0xF0
		::BGOBCKLPEMK_NNCOONLKENF LGAHOGLLCDA; // 0xF8
		::System::Single DCBECNCGCLO; // 0x128
		::System::Single _SkillLogicalYawOffset_k__BackingField; // 0x12C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CTOR_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void set_EnableAnimatorMoveCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::IBEJMEEEJMB* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::CharacterDataComponent* a3, ::ODAKFODAONI* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IBEJMEEEJMB*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::CharacterDataComponent*, ::ODAKFODAONI*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void CGKHLCOPDIF(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CGKHLCOPDIF_OFFSET))(this, a1);
		}

		::System::Void HJCNNMBJMOH(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_HJCNNMBJMOH_OFFSET))(this, a1);
		}

		::System::Boolean LAMMAFJJHNM(::RPG::MVector3 a1, ::AKDDNBHNGON* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::AKDDNBHNGON*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_LAMMAFJJHNM_OFFSET))(this, a1, a2);
		}

		::System::Void CNLNGHPGBAC(::AKDDNBHNGON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDDNBHNGON*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CNLNGHPGBAC_OFFSET))(this, a1);
		}

		::System::Void GNDAAOHGDHP(::RPG::MVector3 a1, ::AKDDNBHNGON* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::AKDDNBHNGON*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GNDAAOHGDHP_OFFSET))(this, a1, a2);
		}

		::System::Void KDGCMELNKDA(::FGNNHFLGJBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGNNHFLGJBK*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_KDGCMELNKDA_OFFSET))(this, a1);
		}

		::System::Void GGFLBGEBJON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GGFLBGEBJON_OFFSET))(this);
		}

		::System::Void ELDFFKDACFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ELDFFKDACFP_OFFSET))(this);
		}

		::System::Void MIOJHBAELLE(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MIOJHBAELLE_OFFSET))(this, a1);
		}

		::System::Boolean JKOLNCKDKEJ(::RPG::GameCore::HitMotionParams* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HitMotionParams*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_JKOLNCKDKEJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIPLGLFEJAM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_OIPLGLFEJAM_OFFSET))(this, a1);
		}

		::FGNNHFLGJBK* LMGFGAKBEBC()
		{
			return ((::FGNNHFLGJBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_LMGFGAKBEBC_OFFSET))(this);
		}

		::RPG::MVector3 get_LogicalTotalMovement()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_LOGICALTOTALMOVEMENT_OFFSET))(this);
		}

		::System::Void set_LogicalTotalMovement(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_LOGICALTOTALMOVEMENT_OFFSET))(this, a1);
		}

		::System::Single get_SkillLogicalYawOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_SKILLLOGICALYAWOFFSET_OFFSET))(this);
		}

		::System::Void set_SkillLogicalYawOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_SKILLLOGICALYAWOFFSET_OFFSET))(this, a1);
		}

		::System::Void NGGBFHEOOPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NGGBFHEOOPP_OFFSET))(this);
		}

		::System::Void ENKCGKLGNMN(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ENKCGKLGNMN_OFFSET))(this, a1);
		}

		::System::Void ANOLHKHDGMJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ANOLHKHDGMJ_OFFSET))(this, a1);
		}

		::System::Void JPMKFEMCPGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_JPMKFEMCPGN_OFFSET))(this);
		}

		::System::Void NILOCEPPEJB(::FNHGDJOJACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNHGDJOJACD*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NILOCEPPEJB_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void MCDPKCIJFJI(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MCDPKCIJFJI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TransformComponent* CJFABCKJFLG()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CJFABCKJFLG_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void ALLIGKBOGLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ALLIGKBOGLK_OFFSET))(this);
		}

		::System::Void EEHGFJEOGBA(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_EEHGFJEOGBA_OFFSET))(this, a1);
		}

		::System::Void IJBEDKAFIIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_IJBEDKAFIIO_OFFSET))(this);
		}

		::System::Single GEHDFGKKFMD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GEHDFGKKFMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CPLFDJHJGNA(::AKDDNBHNGON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKDDNBHNGON*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CPLFDJHJGNA_OFFSET))(this, a1);
		}

		static ::System::Boolean BOMKIHFGPKE(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_BOMKIHFGPKE_OFFSET))(a1, a2);
		}

		::System::Void CFDMJGGPDCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CFDMJGGPDCP_OFFSET))(this);
		}

		::System::Void BIJOBKHCFOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_BIJOBKHCFOA_OFFSET))(this);
		}

		::System::Void CEAALHCMAGE(::AKDDNBHNGON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDDNBHNGON*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_CEAALHCMAGE_OFFSET))(this, a1);
		}

		::System::Void GEKDOLHBPNJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GEKDOLHBPNJ_OFFSET))(this, a1);
		}

		::System::Boolean FFLMBFFEHLC(::System::Single a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_FFLMBFFEHLC_OFFSET))(this, a1, a2);
		}

		::BCNMLILBENC* EJAHKPGEOOM()
		{
			return ((::BCNMLILBENC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_EJAHKPGEOOM_OFFSET))(this);
		}

		::System::Void HMNPNOIKFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_HMNPNOIKFFH_OFFSET))(this);
		}

		::System::Void GKPDBIMGDKE(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GKPDBIMGDKE_OFFSET))(this, a1, a2);
		}

		::System::Single HELJCOPGIMD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_HELJCOPGIMD_OFFSET))(this, a1);
		}

		static ::System::Boolean IKMAEEJOFPP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_IKMAEEJOFPP_OFFSET))(a1);
		}

		::System::Void PCGJPHBGLAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_PCGJPHBGLAG_OFFSET))(this);
		}

		::System::Void NNCAIECLCLD(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NNCAIECLCLD_OFFSET))(this, a1);
		}

		::System::Void MAEOBONHMFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MAEOBONHMFJ_OFFSET))(this);
		}

		::System::Void IGAHFGHFPIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_IGAHFGHFPIP_OFFSET))(this, a1);
		}

		::System::Void NCAPHHBDPEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NCAPHHBDPEA_OFFSET))(this);
		}

		::System::Void PMFGGFNDEHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_PMFGGFNDEHF_OFFSET))(this, a1);
		}

		::System::Void MPGLCMALGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MPGLCMALGHG_OFFSET))(this);
		}

		::System::Void BPHDEMOKEBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_BPHDEMOKEBH_OFFSET))(this, a1);
		}

		::System::Void KGOLFHKCFBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_KGOLFHKCFBF_OFFSET))(this, a1);
		}

		::System::Boolean LAGCMNNBKND(::BGOBCKLPEMK_CPEEBAFNFNC* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGOBCKLPEMK_CPEEBAFNFNC*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_LAGCMNNBKND_OFFSET))(this, a1, a2);
		}

		::System::Boolean MACMLAMAPNO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MACMLAMAPNO_OFFSET))(this, a1);
		}

		::System::Boolean EOHABEDNIPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_EOHABEDNIPC_OFFSET))(this);
		}

		::System::Void KCDCMAGMGKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_KCDCMAGMGKI_OFFSET))(this, a1);
		}

		::System::Void HNFHIGFHBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_HNFHIGFHBGH_OFFSET))(this);
		}

		::System::Int32 DFKECDNDGEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_DFKECDNDGEO_OFFSET))(this);
		}

		::System::Boolean MBNOBNLECIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_MBNOBNLECIH_OFFSET))(this);
		}

		::System::Boolean JLBIIPHOAPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_JLBIIPHOAPO_OFFSET))(this);
		}

		::System::Single PMEBJBINBJH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_PMEBJBINBJH_OFFSET))(this);
		}

		::System::Boolean NEAJJGAGCMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_NEAJJGAGCMD_OFFSET))(this);
		}

		::System::Boolean GNIHGMANFIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GNIHGMANFIJ_OFFSET))(this);
		}

		::RPG::MVector3 ELBMDKCHMNI()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_ELBMDKCHMNI_OFFSET))(this);
		}

		::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* get_MotionDeltaModifyDel()
		{
			return ((::System::Func_2<::RPG::MVector3, ::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_MOTIONDELTAMODIFYDEL_OFFSET))(this);
		}

		::System::Void set_MotionDeltaModifyDel(::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::MVector3, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_MOTIONDELTAMODIFYDEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttachMotionWithEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_ISATTACHMOTIONWITHEFFECT_OFFSET))(this);
		}

		::System::Void set_IsAttachMotionWithEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_ISATTACHMOTIONWITHEFFECT_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_AttachEffectMotionTotal()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_GET_ATTACHEFFECTMOTIONTOTAL_OFFSET))(this);
		}

		::System::Void set_AttachEffectMotionTotal(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_SET_ATTACHEFFECTMOTIONTOTAL_OFFSET))(this, a1);
		}

		::System::Boolean JEJIBGLHMAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_JEJIBGLHMAO_OFFSET))(this);
		}

		::System::Single HKGEJFOLDAN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOBCKLPEMK_HKGEJFOLDAN_OFFSET))(this);
		}

	};
