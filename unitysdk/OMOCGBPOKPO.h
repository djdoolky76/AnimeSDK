#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CDMFNLNOEAC.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/FJLAKILIMEN.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/PCGNOLJJNLD.h"
#include "unitysdk/RPG/GameCore/AbilityExtraProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
class BGMKDGACBNI;
class CMJBLLIHDKP;
class DEEJKBIMHAA;
class ENLBMCKHJOG;
class FBENMEMDHLE;
class FGMHNMKDFMA;
class HBCJLHBBDAB;
class HLOPOIKJHBO;
class KADNINAMKGA;
class MDHFIOPLNDM;
class MNBNFBAMKKI;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define OMOCGBPOKPO_AGDMNMKLEMH_OFFSET UNITYSDK_OFFSET(0xBF42BA0)
#define OMOCGBPOKPO_AGDOHMKNADN_OFFSET UNITYSDK_OFFSET(0xBF41200)
#define OMOCGBPOKPO_AHAADEJJCNM_OFFSET UNITYSDK_OFFSET(0xBF3CA90)
#define OMOCGBPOKPO_AOKJECBNLEC_OFFSET UNITYSDK_OFFSET(0xBF34E00)
#define OMOCGBPOKPO_AONECOAFCKJ_OFFSET UNITYSDK_OFFSET(0xBF35F70)
#define OMOCGBPOKPO_BCLHIPMEFPH_OFFSET UNITYSDK_OFFSET(0xBF3AA20)
#define OMOCGBPOKPO_BEBFLLNOPCP_OFFSET UNITYSDK_OFFSET(0xBF40E80)
#define OMOCGBPOKPO_BIBNEDDFIGH_OFFSET UNITYSDK_OFFSET(0xBF41A70)
#define OMOCGBPOKPO_BJAPMOCHEJI_OFFSET UNITYSDK_OFFSET(0xBF3DBB0)
#define OMOCGBPOKPO_BJHJCHPEMDE_OFFSET UNITYSDK_OFFSET(0xBF40570)
#define OMOCGBPOKPO_BKDELJNGGHN_OFFSET UNITYSDK_OFFSET(0xBF42AD0)
#define OMOCGBPOKPO_BMECCDGDJEJ_OFFSET UNITYSDK_OFFSET(0xBF41170)
#define OMOCGBPOKPO_BPLEICIKKEM_OFFSET UNITYSDK_OFFSET(0xBF40930)
#define OMOCGBPOKPO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF44990)
#define OMOCGBPOKPO_CPDLGBDNDPB_OFFSET UNITYSDK_OFFSET(0xBF42DE0)
#define OMOCGBPOKPO_CPEHCMFOFNA_1_OFFSET UNITYSDK_OFFSET(0xBF35130)
#define OMOCGBPOKPO_CPEHCMFOFNA_OFFSET UNITYSDK_OFFSET(0xBF34F80)
#define OMOCGBPOKPO_DBONCMMBCEM_OFFSET UNITYSDK_OFFSET(0xBF392E0)
#define OMOCGBPOKPO_DHBEHOFGIDO_OFFSET UNITYSDK_OFFSET(0xBF3E2C0)
#define OMOCGBPOKPO_DLBPMJAHPEA_OFFSET UNITYSDK_OFFSET(0xBF359F0)
#define OMOCGBPOKPO_DMHLALNLMKH_OFFSET UNITYSDK_OFFSET(0xBF41700)
#define OMOCGBPOKPO_DOEHLAIJMAL_OFFSET UNITYSDK_OFFSET(0xBF3E5B0)
#define OMOCGBPOKPO_EHJJAGPOBOI_OFFSET UNITYSDK_OFFSET(0xBF354F0)
#define OMOCGBPOKPO_EIGEFIEIKJL_OFFSET UNITYSDK_OFFSET(0xBF412B0)
#define OMOCGBPOKPO_FDHFOFNGGBF_OFFSET UNITYSDK_OFFSET(0xBF3CF00)
#define OMOCGBPOKPO_FEPOOKJJDPH_OFFSET UNITYSDK_OFFSET(0xBF3B860)
#define OMOCGBPOKPO_FFAOKOBFFNJ_OFFSET UNITYSDK_OFFSET(0xBF42B20)
#define OMOCGBPOKPO_FGDBBKMKPAD_OFFSET UNITYSDK_OFFSET(0xBF44470)
#define OMOCGBPOKPO_FGNBNOEBHBN_OFFSET UNITYSDK_OFFSET(0xBF35C50)
#define OMOCGBPOKPO_FJEMIIDPGOP_OFFSET UNITYSDK_OFFSET(0xBF35B20)
#define OMOCGBPOKPO_FKJNAPPGIKO_OFFSET UNITYSDK_OFFSET(0xBF39230)
#define OMOCGBPOKPO_FMGDCNKJCIL_OFFSET UNITYSDK_OFFSET(0xBF42E50)
#define OMOCGBPOKPO_FMHKLEOLBJC_OFFSET UNITYSDK_OFFSET(0xBF44900)
#define OMOCGBPOKPO_FOBACKADJDM_OFFSET UNITYSDK_OFFSET(0xBF363C0)
#define OMOCGBPOKPO_GBDGKFGLOPN_OFFSET UNITYSDK_OFFSET(0xBF3DC00)
#define OMOCGBPOKPO_GLJGEMGABFL_OFFSET UNITYSDK_OFFSET(0xBF42BF0)
#define OMOCGBPOKPO_GLPMHLDGKFL_OFFSET UNITYSDK_OFFSET(0xBF40B80)
#define OMOCGBPOKPO_GPCDDMDIHIG_OFFSET UNITYSDK_OFFSET(0xBF34CE0)
#define OMOCGBPOKPO_GPFJPGDHBIL_OFFSET UNITYSDK_OFFSET(0xBF445A0)
#define OMOCGBPOKPO_GPNLPAEOMKJ_OFFSET UNITYSDK_OFFSET(0xBF3D830)
#define OMOCGBPOKPO_HCHICHIKIID_OFFSET UNITYSDK_OFFSET(0xBF442B0)
#define OMOCGBPOKPO_HFMNGDDNNEP_OFFSET UNITYSDK_OFFSET(0xBF3D310)
#define OMOCGBPOKPO_HGAKGHBNKLI_OFFSET UNITYSDK_OFFSET(0xBF3B5E0)
#define OMOCGBPOKPO_HGLFCOLPAGC_OFFSET UNITYSDK_OFFSET(0xBF42260)
#define OMOCGBPOKPO_HHBNLFLFMBD_OFFSET UNITYSDK_OFFSET(0xBF355D0)
#define OMOCGBPOKPO_HIOFKPCNFAK_OFFSET UNITYSDK_OFFSET(0xBF40AC0)
#define OMOCGBPOKPO_IDBLBFGPAAC_OFFSET UNITYSDK_OFFSET(0xBF406A0)
#define OMOCGBPOKPO_IFJNKKGMNEL_OFFSET UNITYSDK_OFFSET(0xBF34BE0)
#define OMOCGBPOKPO_IHAFJBEIOHE_OFFSET UNITYSDK_OFFSET(0xBF3C440)
#define OMOCGBPOKPO_JKLEDJPDIBO_OFFSET UNITYSDK_OFFSET(0xBF35660)
#define OMOCGBPOKPO_JMDOJMOCICP_OFFSET UNITYSDK_OFFSET(0xBF35250)
#define OMOCGBPOKPO_KAFFKDEEPGG_OFFSET UNITYSDK_OFFSET(0xBF35790)
#define OMOCGBPOKPO_KDEJHBOCPNC_OFFSET UNITYSDK_OFFSET(0xBF42A70)
#define OMOCGBPOKPO_KIAFOEIEFPP_OFFSET UNITYSDK_OFFSET(0xBF3B9B0)
#define OMOCGBPOKPO_KJAPNHKGKAD_OFFSET UNITYSDK_OFFSET(0xBF3E920)
#define OMOCGBPOKPO_KMPLJJPGBJP_OFFSET UNITYSDK_OFFSET(0xBF41430)
#define OMOCGBPOKPO_LDCCLPPIHFF_OFFSET UNITYSDK_OFFSET(0xBF3B8E0)
#define OMOCGBPOKPO_LICMMLJKNIG_OFFSET UNITYSDK_OFFSET(0xBF40440)
#define OMOCGBPOKPO_LIFIDHNBHAB_OFFSET UNITYSDK_OFFSET(0xBF41FE0)
#define OMOCGBPOKPO_LKJFJLFNKIB_OFFSET UNITYSDK_OFFSET(0xBF3DC60)
#define OMOCGBPOKPO_LLIHAJLACKF_OFFSET UNITYSDK_OFFSET(0xBF42A10)
#define OMOCGBPOKPO_LNCDFIKIFOA_OFFSET UNITYSDK_OFFSET(0xBF3EBF0)
#define OMOCGBPOKPO_MADFMHCOBJL_OFFSET UNITYSDK_OFFSET(0xBF358C0)
#define OMOCGBPOKPO_MLNKIIOPBKM_OFFSET UNITYSDK_OFFSET(0xBF3CF60)
#define OMOCGBPOKPO_MOGMKFGMGIB_OFFSET UNITYSDK_OFFSET(0xBF3A830)
#define OMOCGBPOKPO_NBDJKAMAAGG_OFFSET UNITYSDK_OFFSET(0xBF352E0)
#define OMOCGBPOKPO_NGCJONCICKD_OFFSET UNITYSDK_OFFSET(0xBF39120)
#define OMOCGBPOKPO_NOICODFGEIE_OFFSET UNITYSDK_OFFSET(0xBF35570)
#define OMOCGBPOKPO_OOOPNOOGHGD_OFFSET UNITYSDK_OFFSET(0xBF43F50)
#define OMOCGBPOKPO_PDLACIJJDNG_OFFSET UNITYSDK_OFFSET(0xBF34C70)
#define OMOCGBPOKPO_PEFDCBPGJCH_OFFSET UNITYSDK_OFFSET(0xBF41D60)

	class OMOCGBPOKPO : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_FAILMDMKLAP()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "OMOCGBPOKPO")->GetStaticField(0x5C130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMOCGBPOKPO_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* IFJNKKGMNEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_IFJNKKGMNEL_OFFSET))(a1);
		}

		static ::System::Boolean PDLACIJJDNG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_PDLACIJJDNG_OFFSET))(a1);
		}

		static ::RPG::GameCore::DamageBlockType GPCDDMDIHIG(::KADNINAMKGA* a1, ::BGMKDGACBNI* a2)
		{
			return ((::RPG::GameCore::DamageBlockType(*)(::KADNINAMKGA*, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GPCDDMDIHIG_OFFSET))(a1, a2);
		}

		static ::System::Int32 AOKJECBNLEC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_AOKJECBNLEC_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CPEHCMFOFNA(::BGMKDGACBNI* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_CPEHCMFOFNA_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CPEHCMFOFNA_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_CPEHCMFOFNA_1_OFFSET))(a1);
		}

		static ::RPG::PoolList_1<::RPG::GameCore::AttackType>* JMDOJMOCICP(::BGMKDGACBNI* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AttackType>*(*)(::BGMKDGACBNI*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_JMDOJMOCICP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NBDJKAMAAGG(::KADNINAMKGA* a1, ::DEEJKBIMHAA* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::DEEJKBIMHAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_NBDJKAMAAGG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EHJJAGPOBOI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::System::String* a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_EHJJAGPOBOI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NOICODFGEIE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_NOICODFGEIE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint HHBNLFLFMBD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HHBNLFLFMBD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint JKLEDJPDIBO(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_JKLEDJPDIBO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KAFFKDEEPGG(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_KAFFKDEEPGG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MADFMHCOBJL(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_MADFMHCOBJL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint DLBPMJAHPEA(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_DLBPMJAHPEA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FJEMIIDPGOP(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FJEMIIDPGOP_OFFSET))(a1, a2);
		}

		static ::KADNINAMKGA* FGNBNOEBHBN(::FGMHNMKDFMA* a1, ::MNBNFBAMKKI* a2, ::BGMKDGACBNI* a3, ::BGMKDGACBNI* a4, ::BGMKDGACBNI* a5, ::RPG::GameCore::RtAttackData* a6, ::RPG::GameCore::TaskContext* a7)
		{
			return ((::KADNINAMKGA*(*)(::FGMHNMKDFMA*, ::MNBNFBAMKKI*, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FGNBNOEBHBN_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::KADNINAMKGA* AONECOAFCKJ(::FGMHNMKDFMA* a1, ::BGMKDGACBNI* a2, ::BGMKDGACBNI* a3, ::BGMKDGACBNI* a4, ::FBENMEMDHLE* a5, ::MNBNFBAMKKI* a6)
		{
			return ((::KADNINAMKGA*(*)(::FGMHNMKDFMA*, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::FBENMEMDHLE*, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_AONECOAFCKJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void NGCJONCICKD(::KADNINAMKGA* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_NGCJONCICKD_OFFSET))(a1, a2);
		}

		static ::System::Void FKJNAPPGIKO(::KADNINAMKGA* a1, ::BGMKDGACBNI* a2, ::BGMKDGACBNI* a3)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::BGMKDGACBNI*, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FKJNAPPGIKO_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint DBONCMMBCEM(::KADNINAMKGA* a1, ::DEEJKBIMHAA* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::DEEJKBIMHAA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_DBONCMMBCEM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BCLHIPMEFPH(::KADNINAMKGA* a1, ::DEEJKBIMHAA* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::DEEJKBIMHAA*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BCLHIPMEFPH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::FixPoint HGAKGHBNKLI(::BGMKDGACBNI* a1, ::BGMKDGACBNI* a2, ::RPG::GameCore::FixPoint a3, ::DEEJKBIMHAA* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::BGMKDGACBNI*, ::BGMKDGACBNI*, ::RPG::GameCore::FixPoint, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HGAKGHBNKLI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean MOGMKFGMGIB(::KADNINAMKGA* a1, ::DEEJKBIMHAA* a2)
		{
			return ((::System::Boolean(*)(::KADNINAMKGA*, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_MOGMKFGMGIB_OFFSET))(a1, a2);
		}

		static ::System::Void LDCCLPPIHFF(::KADNINAMKGA* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LDCCLPPIHFF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void IHAFJBEIOHE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::KADNINAMKGA* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::KADNINAMKGA*, ::System::String*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_IHAFJBEIOHE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean AHAADEJJCNM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_AHAADEJJCNM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FDHFOFNGGBF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FDHFOFNGGBF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MLNKIIOPBKM(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_MLNKIIOPBKM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KIAFOEIEFPP(::KADNINAMKGA* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_KIAFOEIEFPP_OFFSET))(a1, a2, a3, a4);
		}

		static ::JDMNPLMAKGE HFMNGDDNNEP(::KADNINAMKGA* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::RtAttackData* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::JDMNPLMAKGE(*)(::KADNINAMKGA*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HFMNGDDNNEP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::DamageDisplayData* BJAPMOCHEJI(::RPG::GameCore::DamageDisplayData* a1, ::RPG::GameCore::DamageDisplayData* a2)
		{
			return ((::RPG::GameCore::DamageDisplayData*(*)(::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::DamageDisplayData*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BJAPMOCHEJI_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 GPNLPAEOMKJ(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GPNLPAEOMKJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GBDGKFGLOPN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GBDGKFGLOPN_OFFSET))(a1, a2, a3);
		}

		static ::ENLBMCKHJOG* LKJFJLFNKIB(::BGMKDGACBNI* a1, ::BGMKDGACBNI* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::HealFormulaType a6, ::System::Boolean a7)
		{
			return ((::ENLBMCKHJOG*(*)(::BGMKDGACBNI*, ::BGMKDGACBNI*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::HealFormulaType, ::System::Boolean))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LKJFJLFNKIB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::GameCore::FixPoint KJAPNHKGKAD(::ENLBMCKHJOG* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::ENLBMCKHJOG*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_KJAPNHKGKAD_OFFSET))(a1);
		}

		static ::System::Void LNCDFIKIFOA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::MDHFIOPLNDM* a3, ::KADNINAMKGA* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::MDHFIOPLNDM*, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LNCDFIKIFOA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GLPMHLDGKFL(::RPG::GameCore::TaskContext* a1, ::HBCJLHBBDAB* a2, ::ENLBMCKHJOG* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::HBCJLHBBDAB*, ::ENLBMCKHJOG*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GLPMHLDGKFL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LICMMLJKNIG(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::BGMKDGACBNI* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::BGMKDGACBNI*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LICMMLJKNIG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BJHJCHPEMDE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::BGMKDGACBNI* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::BGMKDGACBNI*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BJHJCHPEMDE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void BPLEICIKKEM(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::BGMKDGACBNI* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::BGMKDGACBNI*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BPLEICIKKEM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void HIOFKPCNFAK(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::RtAbilityProperty a3, ::System::String* a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HIOFKPCNFAK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void IDBLBFGPAAC(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DynamicFloat* a2, ::BGMKDGACBNI* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DynamicFloat*, ::BGMKDGACBNI*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_IDBLBFGPAAC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FOBACKADJDM(::KADNINAMKGA* a1, ::CMJBLLIHDKP* a2, ::CMJBLLIHDKP* a3, ::CMJBLLIHDKP* a4)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::CMJBLLIHDKP*, ::CMJBLLIHDKP*, ::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FOBACKADJDM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::AbilityExtraProperty KMPLJJPGBJP(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityExtraProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_KMPLJJPGBJP_OFFSET))(a1);
		}

		static ::FJLAKILIMEN BMECCDGDJEJ(::CMJBLLIHDKP* a1)
		{
			return ((::FJLAKILIMEN(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BMECCDGDJEJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityLinearPropertyWithOverride DMHLALNLMKH(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityLinearPropertyWithOverride(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_DMHLALNLMKH_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityLinearProperty BIBNEDDFIGH(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityLinearProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BIBNEDDFIGH_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityLinearProperty BEBFLLNOPCP(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityLinearProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BEBFLLNOPCP_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityLinearProperty DHBEHOFGIDO(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityLinearProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_DHBEHOFGIDO_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityLinearPropertyWithOverride DOEHLAIJMAL(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityLinearPropertyWithOverride(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_DOEHLAIJMAL_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityExtraProperty PEFDCBPGJCH(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityExtraProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_PEFDCBPGJCH_OFFSET))(a1);
		}

		static ::RPG::GameCore::AbilityExtraProperty LIFIDHNBHAB(::CMJBLLIHDKP* a1)
		{
			return ((::RPG::GameCore::AbilityExtraProperty(*)(::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LIFIDHNBHAB_OFFSET))(a1);
		}

		static ::Il2CppArray<::HLOPOIKJHBO*>* AGDOHMKNADN(::RPG::GameCore::AbilityComponent* a1, ::System::Func_2<::MNBNFBAMKKI*, ::System::Boolean>* a2)
		{
			return ((::Il2CppArray<::HLOPOIKJHBO*>*(*)(::RPG::GameCore::AbilityComponent*, ::System::Func_2<::MNBNFBAMKKI*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_AGDOHMKNADN_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::HLOPOIKJHBO*>* EIGEFIEIKJL(::RPG::GameCore::AbilityComponent* a1, ::System::Func_2<::MNBNFBAMKKI*, ::System::Boolean>* a2)
		{
			return ((::Il2CppArray<::HLOPOIKJHBO*>*(*)(::RPG::GameCore::AbilityComponent*, ::System::Func_2<::MNBNFBAMKKI*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_EIGEFIEIKJL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HGLFCOLPAGC(::RPG::GameCore::GameEntity* a1, ::KADNINAMKGA* a2, ::RPG::GameCore::FixPoint a3, ::HJIOMFDJLLA a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::KADNINAMKGA*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HGLFCOLPAGC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BKDELJNGGHN(::KADNINAMKGA* a1, ::BGMKDGACBNI* a2)
		{
			return ((::System::Void(*)(::KADNINAMKGA*, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_BKDELJNGGHN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FFAOKOBFFNJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FFAOKOBFFNJ_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint KDEJHBOCPNC(::BGMKDGACBNI* a1, ::Il2CppArray<::HLOPOIKJHBO*>* a2, ::HJIOMFDJLLA a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::BGMKDGACBNI*, ::Il2CppArray<::HLOPOIKJHBO*>*, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_KDEJHBOCPNC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AGDMNMKLEMH(::BGMKDGACBNI* a1, ::Il2CppArray<::HLOPOIKJHBO*>* a2)
		{
			return ((::System::Void(*)(::BGMKDGACBNI*, ::Il2CppArray<::HLOPOIKJHBO*>*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_AGDMNMKLEMH_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint LLIHAJLACKF(::BGMKDGACBNI* a1, ::Il2CppArray<::HLOPOIKJHBO*>* a2, ::HJIOMFDJLLA a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::BGMKDGACBNI*, ::Il2CppArray<::HLOPOIKJHBO*>*, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_LLIHAJLACKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FEPOOKJJDPH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::AttackDamageType a3, ::System::Collections::Generic::List_1<::HLOPOIKJHBO*>* a4, ::RPG::GameCore::FixPoint a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Collections::Generic::List_1<::HLOPOIKJHBO*>*, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FEPOOKJJDPH_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GLJGEMGABFL(::BGMKDGACBNI* a1, ::RPG::GameCore::RtAttackData* a2, ::BGMKDGACBNI* a3, ::RPG::GameCore::TaskContext* a4, ::KADNINAMKGA* a5, ::System::Boolean a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8, ::RPG::GameCore::FixPoint a9)
		{
			return ((::System::Void(*)(::BGMKDGACBNI*, ::RPG::GameCore::RtAttackData*, ::BGMKDGACBNI*, ::RPG::GameCore::TaskContext*, ::KADNINAMKGA*, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GLJGEMGABFL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::RPG::GameCore::AttackDamageType CPDLGBDNDPB(::BGMKDGACBNI* a1, ::RPG::GameCore::RtAttackData* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::BGMKDGACBNI*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_CPDLGBDNDPB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FMGDCNKJCIL(::PCGNOLJJNLD a1, ::CDMFNLNOEAC a2)
		{
			return ((::System::Void(*)(::PCGNOLJJNLD, ::CDMFNLNOEAC))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FMGDCNKJCIL_OFFSET))(a1, a2);
		}

		static ::System::Void FMHKLEOLBJC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::RtAttackData* a3, ::System::Boolean a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::AttackDamageType a8)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FMHKLEOLBJC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::GameCore::RtAbilityProperty OOOPNOOGHGD(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_OOOPNOOGHGD_OFFSET))(a1);
		}

		static ::RPG::GameCore::RtAbilityProperty GPFJPGDHBIL(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_GPFJPGDHBIL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint HCHICHIKIID(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_HCHICHIKIID_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FGDBBKMKPAD(::KADNINAMKGA* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::KADNINAMKGA*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + OMOCGBPOKPO_FGDBBKMKPAD_OFFSET))(a1, a2);
		}

	};
