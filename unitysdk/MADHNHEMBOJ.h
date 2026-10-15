#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarLinkOrder.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/RPG/Client/ActionDelayVisibleType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOIAGGGHHBD;
class DFFPKLFKGAO;
class DNBDPIOLLHH;
class DPNOFFICKDK;
class EKFMIDBJDIA;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class LGBMDOLLMIL;
class MADHNHEMBOJ_ADIMGCIBHBC;
class NJPNJAKPNDL;
class PNADGAFDGPL;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MADHNHEMBOJ_AEKJCGNIAOL_OFFSET UNITYSDK_OFFSET(0xB844420)
#define MADHNHEMBOJ_AGHFGPGIBNC_OFFSET UNITYSDK_OFFSET(0xB843430)
#define MADHNHEMBOJ_AHECMEFPCKF_OFFSET UNITYSDK_OFFSET(0xB842140)
#define MADHNHEMBOJ_AKHAACBEAAH_OFFSET UNITYSDK_OFFSET(0xB83D230)
#define MADHNHEMBOJ_AKLJIEBKOFD_OFFSET UNITYSDK_OFFSET(0xB83E7D0)
#define MADHNHEMBOJ_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0xB840520)
#define MADHNHEMBOJ_ALDAMOAENJJ_OFFSET UNITYSDK_OFFSET(0xB83D800)
#define MADHNHEMBOJ_ALPDILEMJKB_OFFSET UNITYSDK_OFFSET(0xB83D340)
#define MADHNHEMBOJ_ANBKFDAGONN_OFFSET UNITYSDK_OFFSET(0xB83D600)
#define MADHNHEMBOJ_BFALFLMPGBM_OFFSET UNITYSDK_OFFSET(0xB843D90)
#define MADHNHEMBOJ_CBKKLIAFPMO_OFFSET UNITYSDK_OFFSET(0xB83FD50)
#define MADHNHEMBOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8449A0)
#define MADHNHEMBOJ_CEKNKALJFKN_OFFSET UNITYSDK_OFFSET(0xB83EB00)
#define MADHNHEMBOJ_CHPAOENOGBN_OFFSET UNITYSDK_OFFSET(0xB842DC0)
#define MADHNHEMBOJ_CKEHFMCENCI_OFFSET UNITYSDK_OFFSET(0xB840E60)
#define MADHNHEMBOJ_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0xB83DB40)
#define MADHNHEMBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB844590)
#define MADHNHEMBOJ_DAHPEAEHGEG_OFFSET UNITYSDK_OFFSET(0xB841A50)
#define MADHNHEMBOJ_DDCNOHODFEG_OFFSET UNITYSDK_OFFSET(0xB8415A0)
#define MADHNHEMBOJ_DFCGIDKDLEM_OFFSET UNITYSDK_OFFSET(0xB83D8B0)
#define MADHNHEMBOJ_DGABMEJOPLL_OFFSET UNITYSDK_OFFSET(0xB83CD70)
#define MADHNHEMBOJ_DIGIKDFPNOD_1_OFFSET UNITYSDK_OFFSET(0xB83D1E0)
#define MADHNHEMBOJ_DIGIKDFPNOD_OFFSET UNITYSDK_OFFSET(0xB83D190)
#define MADHNHEMBOJ_EDGMNLMPEFE_OFFSET UNITYSDK_OFFSET(0xB83D0D0)
#define MADHNHEMBOJ_EGFKPINPHLB_OFFSET UNITYSDK_OFFSET(0xB841020)
#define MADHNHEMBOJ_EIDCAFMPNDL_OFFSET UNITYSDK_OFFSET(0xB841660)
#define MADHNHEMBOJ_EINMCIJLEIL_OFFSET UNITYSDK_OFFSET(0xB83F050)
#define MADHNHEMBOJ_EKAMGHFDAAH_OFFSET UNITYSDK_OFFSET(0xB841E50)
#define MADHNHEMBOJ_EKBNLEBBHNJ_OFFSET UNITYSDK_OFFSET(0xB840710)
#define MADHNHEMBOJ_EMEKNOCLHEJ_OFFSET UNITYSDK_OFFSET(0xB844180)
#define MADHNHEMBOJ_FDBFCNNAOEM_OFFSET UNITYSDK_OFFSET(0xB842E70)
#define MADHNHEMBOJ_FFOMDOEHEEJ_OFFSET UNITYSDK_OFFSET(0xB83CE10)
#define MADHNHEMBOJ_FNHMKKGNKEO_OFFSET UNITYSDK_OFFSET(0xB841310)
#define MADHNHEMBOJ_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xB83F100)
#define MADHNHEMBOJ_GBODMCICNJP_OFFSET UNITYSDK_OFFSET(0xB83DA30)
#define MADHNHEMBOJ_GCCLOMGPFCF_OFFSET UNITYSDK_OFFSET(0xB842070)
#define MADHNHEMBOJ_GDDCGGPEJGH_OFFSET UNITYSDK_OFFSET(0xB83FB60)
#define MADHNHEMBOJ_GET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xB841E10)
#define MADHNHEMBOJ_GET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xB841EF0)
#define MADHNHEMBOJ_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xB842120)
#define MADHNHEMBOJ_GET_ALLPOS_OFFSET UNITYSDK_OFFSET(0xB8421B0)
#define MADHNHEMBOJ_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB842320)
#define MADHNHEMBOJ_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xB841E30)
#define MADHNHEMBOJ_GET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xB842300)
#define MADHNHEMBOJ_GET_CUSTOMEFFECTS_OFFSET UNITYSDK_OFFSET(0xB842200)
#define MADHNHEMBOJ_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xB8420E0)
#define MADHNHEMBOJ_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xB842190)
#define MADHNHEMBOJ_GET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xB8422C0)
#define MADHNHEMBOJ_GET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xB8422E0)
#define MADHNHEMBOJ_GET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xB8422A0)
#define MADHNHEMBOJ_GET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xB842100)
#define MADHNHEMBOJ_GHHKMEDBCMN_OFFSET UNITYSDK_OFFSET(0xB8426B0)
#define MADHNHEMBOJ_GLAEGNADOEL_OFFSET UNITYSDK_OFFSET(0xB842D30)
#define MADHNHEMBOJ_GPLIGACPGAG_OFFSET UNITYSDK_OFFSET(0xB841C10)
#define MADHNHEMBOJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB83C790)
#define MADHNHEMBOJ_HBOCGPDPBBP_OFFSET UNITYSDK_OFFSET(0xB83CAB0)
#define MADHNHEMBOJ_HKLBEKJHJMI_OFFSET UNITYSDK_OFFSET(0xB83EAB0)
#define MADHNHEMBOJ_HNNPBBNCJHE_OFFSET UNITYSDK_OFFSET(0xB83DE30)
#define MADHNHEMBOJ_IBNJBLAIALG_OFFSET UNITYSDK_OFFSET(0xB841CB0)
#define MADHNHEMBOJ_IIBADPLACPF_OFFSET UNITYSDK_OFFSET(0xB83E9E0)
#define MADHNHEMBOJ_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0xB83CD10)
#define MADHNHEMBOJ_IMAPKGHOLMO_OFFSET UNITYSDK_OFFSET(0xB83E940)
#define MADHNHEMBOJ_JDBCNADKAEC_OFFSET UNITYSDK_OFFSET(0xB841D50)
#define MADHNHEMBOJ_JEAJIIBCIPG_OFFSET UNITYSDK_OFFSET(0xB8418C0)
#define MADHNHEMBOJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB83CA60)
#define MADHNHEMBOJ_KCPFJGLJJKP_OFFSET UNITYSDK_OFFSET(0xB843E00)
#define MADHNHEMBOJ_KCPHDDBBCOJ_OFFSET UNITYSDK_OFFSET(0xB844310)
#define MADHNHEMBOJ_KIENCKCMJOH_OFFSET UNITYSDK_OFFSET(0xB842340)
#define MADHNHEMBOJ_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xB83EE60)
#define MADHNHEMBOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB83C330)
#define MADHNHEMBOJ_LCNJEDGCEHK_OFFSET UNITYSDK_OFFSET(0xB83E0B0)
#define MADHNHEMBOJ_LHJPPLCFAMI_OFFSET UNITYSDK_OFFSET(0xB83CB90)
#define MADHNHEMBOJ_LJLDPKFKIKK_OFFSET UNITYSDK_OFFSET(0xB83E2F0)
#define MADHNHEMBOJ_LJNADILLDAA_OFFSET UNITYSDK_OFFSET(0xB844540)
#define MADHNHEMBOJ_MFKCJIPCEPJ_OFFSET UNITYSDK_OFFSET(0xB83D860)
#define MADHNHEMBOJ_MGMPCJGPNMF_OFFSET UNITYSDK_OFFSET(0xB83D070)
#define MADHNHEMBOJ_MKILGEIINPO_OFFSET UNITYSDK_OFFSET(0xB83CFE0)
#define MADHNHEMBOJ_MPDCJPOONIP_OFFSET UNITYSDK_OFFSET(0xB843190)
#define MADHNHEMBOJ_NBIOIEJICKE_OFFSET UNITYSDK_OFFSET(0xB83DDA0)
#define MADHNHEMBOJ_NEEJLOJBGMF_OFFSET UNITYSDK_OFFSET(0xB83D9C0)
#define MADHNHEMBOJ_NFAMODGKHJC_1_OFFSET UNITYSDK_OFFSET(0xB841390)
#define MADHNHEMBOJ_NFAMODGKHJC_OFFSET UNITYSDK_OFFSET(0xB840420)
#define MADHNHEMBOJ_NFINNNGBKEN_OFFSET UNITYSDK_OFFSET(0xB843640)
#define MADHNHEMBOJ_NJBENAEOAOH_OFFSET UNITYSDK_OFFSET(0xB842F80)
#define MADHNHEMBOJ_NLDBLLPDHGP_OFFSET UNITYSDK_OFFSET(0xB842250)
#define MADHNHEMBOJ_NONIFAEDAMG_OFFSET UNITYSDK_OFFSET(0xB842210)
#define MADHNHEMBOJ_NPPPJCFODOE_OFFSET UNITYSDK_OFFSET(0xB8421C0)
#define MADHNHEMBOJ_OAFMEFDFHBK_OFFSET UNITYSDK_OFFSET(0xB842B60)
#define MADHNHEMBOJ_OAODPPPONBG_OFFSET UNITYSDK_OFFSET(0xB83DC50)
#define MADHNHEMBOJ_OBADOEFMAJN_OFFSET UNITYSDK_OFFSET(0xB83D410)
#define MADHNHEMBOJ_OEKCIDPBPMH_OFFSET UNITYSDK_OFFSET(0xB844130)
#define MADHNHEMBOJ_OEKHFCBIBOA_OFFSET UNITYSDK_OFFSET(0xB842660)
#define MADHNHEMBOJ_OIPDHEBONEF_OFFSET UNITYSDK_OFFSET(0xB841F10)
#define MADHNHEMBOJ_OJAKCLDAIED_OFFSET UNITYSDK_OFFSET(0xB83E4A0)
#define MADHNHEMBOJ_OMKMKGNACBH_OFFSET UNITYSDK_OFFSET(0xB83DCE0)
#define MADHNHEMBOJ_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xB83C3E0)
#define MADHNHEMBOJ_PHPOLDPLMOD_OFFSET UNITYSDK_OFFSET(0xB8444C0)
#define MADHNHEMBOJ_PJJHKDDLGPA_OFFSET UNITYSDK_OFFSET(0xB83D7A0)
#define MADHNHEMBOJ_PKGJMJFPCEC_OFFSET UNITYSDK_OFFSET(0xB842C20)
#define MADHNHEMBOJ_SET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xB841E20)
#define MADHNHEMBOJ_SET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xB841F00)
#define MADHNHEMBOJ_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xB842130)
#define MADHNHEMBOJ_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB842330)
#define MADHNHEMBOJ_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xB841E40)
#define MADHNHEMBOJ_SET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xB842310)
#define MADHNHEMBOJ_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xB8420F0)
#define MADHNHEMBOJ_SET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xB8421A0)
#define MADHNHEMBOJ_SET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xB8422D0)
#define MADHNHEMBOJ_SET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xB8422F0)
#define MADHNHEMBOJ_SET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xB8422B0)
#define MADHNHEMBOJ_SET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xB842110)

inline static constexpr unsigned int MADHNHEMBOJ_TypeDefinitionIndex = 71202;

	class MADHNHEMBOJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*>*>* _CustomEffects_k__BackingField; // 0x10
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _AllPos_k__BackingField; // 0x20
		::DPNOFFICKDK* BOIPMHHNOCF; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* _SkillPreviewRemoveCache_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* KNBPDHCEFHJ; // 0x38
		::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x40
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x48
		::Il2CppArray<::RPG::Client::ActionBarItemUIStyle>* GCOLFBLOLJD; // 0x50
		::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<::System::UInt32>*>* BLMMLLODFAN; // 0x58
		::UnityEngine::RectTransform* _ActionBarRect_k__BackingField; // 0x60
		::NJPNJAKPNDL* GIOEGCLCFFG; // 0x68
		::Il2CppArray<::UnityEngine::Vector2>* MLDPICFPPBH; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelEntityActionDelayChanged*>* OMCEGIJGIEK; // 0x78
		::DFFPKLFKGAO* _ActionBarMgrRef_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::DNBDPIOLLHH*>* NIOGPDJGJBM; // 0x88
		::System::Collections::Generic::List_1<::PNADGAFDGPL*>* BEIJENHIPMI; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::ShowAttackTimeParam*>* DLECJCLNHPA; // 0x98
		::System::Single BPELFOPIHFI; // 0xA0
		::System::Int32 NHJBFHOBGGJ; // 0xA4
		::RPG::GameCore::TurnState AEAGKJJAJOA; // 0xA8
		::System::Single _TotalHeight_k__BackingField; // 0xAC
		::System::Int32 PPIOFDCIAHL; // 0xB0
		::UnityEngine::Vector3 BMOPKGBPLLB; // 0xB4
		::System::Int32 _ShenJunLevel1Count_k__BackingField; // 0xC0
		::System::Int32 _CountDownWarningTime_k__BackingField; // 0xC4
		::System::Boolean _IsAnimNodeActionBarFadeInPlaying_k__BackingField; // 0xC8
		::System::Boolean _AutoSetTutorialDynamicKey_k__BackingField; // 0xC9
		::System::Boolean NBOOAPOOOPC; // 0xCA
		::System::Boolean _IsTicking_k__BackingField; // 0xCB
		::System::Int32 _ShenJunLevel2Count_k__BackingField; // 0xCC
		::System::Int32 FKAAHJFEDBM; // 0xD0
		::System::Int32 JINAEKFCHCH; // 0xD4
		::System::Single GLAKCPNIHCP; // 0xD8
		::System::Int32 MPJGLFMLANL; // 0xDC
		::System::Single KNAJADOIEID; // 0xE0
		::System::Single APFCCHBCNPI; // 0xE4
		::RPG::Client::ActionBarUpdateTiming _ActionBarUpdateTimingCache_k__BackingField; // 0xE8
		::UnityEngine::Vector3 CDNNEOPKDND; // 0xEC
		::System::Single KDGLNNDGLFD; // 0xF8
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>** StaticGet_KIBGHBLLEGF()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>**)UnitySDK::FromName("", "MADHNHEMBOJ")->GetStaticField(0x5AC10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void LHJPPLCFAMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_LHJPPLCFAMI_OFFSET))(this);
		}

		::System::Void IINKHPOJOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_IINKHPOJOGP_OFFSET))(this);
		}

		::MADHNHEMBOJ_ADIMGCIBHBC* DGABMEJOPLL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MADHNHEMBOJ_ADIMGCIBHBC*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DGABMEJOPLL_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelEntityActionDelayChanged* MKILGEIINPO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_MKILGEIINPO_OFFSET))(this, a1);
		}

		::System::Void MGMPCJGPNMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_MGMPCJGPNMF_OFFSET))(this, a1);
		}

		::RPG::Client::ShowAttackTimeParam* EDGMNLMPEFE(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShowAttackTimeParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EDGMNLMPEFE_OFFSET))(this, a1);
		}

		::System::Boolean DIGIKDFPNOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DIGIKDFPNOD_OFFSET))(this);
		}

		::System::Boolean DIGIKDFPNOD_1(::RPG::Client::ActionDelayVisibleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DIGIKDFPNOD_1_OFFSET))(this, a1);
		}

		::System::Boolean AKHAACBEAAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AKHAACBEAAH_OFFSET))(this);
		}

		::System::Void ALPDILEMJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_ALPDILEMJKB_OFFSET))(this);
		}

		::GEDMHFPPBHN* FFOMDOEHEEJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_FFOMDOEHEEJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 OBADOEFMAJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OBADOEFMAJN_OFFSET))(this, a1);
		}

		::System::Boolean ANBKFDAGONN(::GAHPNAEGACM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_ANBKFDAGONN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 PJJHKDDLGPA(::RPG::Client::ActionBarItemUIStyle a1, ::GEDMHFPPBHN* a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_PJJHKDDLGPA_OFFSET))(this, a1, a2);
		}

		::System::String* ALDAMOAENJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_ALDAMOAENJJ_OFFSET))(this, a1);
		}

		::System::Void MFKCJIPCEPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_MFKCJIPCEPJ_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void DFCGIDKDLEM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DFCGIDKDLEM_OFFSET))(this, a1);
		}

		::System::Void GBODMCICNJP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GBODMCICNJP_OFFSET))(this, a1);
		}

		::System::Void CNBDJFOFALP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CNBDJFOFALP_OFFSET))(this, a1);
		}

		::System::Void OAODPPPONBG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OAODPPPONBG_OFFSET))(this, a1);
		}

		::System::Void OMKMKGNACBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OMKMKGNACBH_OFFSET))(this, a1);
		}

		::System::Void NBIOIEJICKE(::LGBMDOLLMIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBMDOLLMIL*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NBIOIEJICKE_OFFSET))(this, a1);
		}

		::System::Void HNNPBBNCJHE(::LGBMDOLLMIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBMDOLLMIL*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_HNNPBBNCJHE_OFFSET))(this, a1);
		}

		::System::Void LCNJEDGCEHK(::LGBMDOLLMIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBMDOLLMIL*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_LCNJEDGCEHK_OFFSET))(this, a1);
		}

		::System::Void LJLDPKFKIKK(::LGBMDOLLMIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBMDOLLMIL*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_LJLDPKFKIKK_OFFSET))(this, a1);
		}

		static ::System::Boolean IMAPKGHOLMO(::AOIAGGGHHBD* a1, ::AOIAGGGHHBD* a2)
		{
			return ((::System::Boolean(*)(::AOIAGGGHHBD*, ::AOIAGGGHHBD*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_IMAPKGHOLMO_OFFSET))(a1, a2);
		}

		static ::System::Void OJAKCLDAIED(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>* a1, ::Il2CppArray<::AOIAGGGHHBD*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*, ::Il2CppArray<::AOIAGGGHHBD*>*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OJAKCLDAIED_OFFSET))(a1, a2);
		}

		static ::System::Void AKLJIEBKOFD(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>* a1, ::Il2CppArray<::AOIAGGGHHBD*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*, ::Il2CppArray<::AOIAGGGHHBD*>*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AKLJIEBKOFD_OFFSET))(a1, a2);
		}

		::System::Void IIBADPLACPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_IIBADPLACPF_OFFSET))(this, a1);
		}

		::System::Void HKLBEKJHJMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_HKLBEKJHJMI_OFFSET))(this, a1);
		}

		::System::Void CEKNKALJFKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CEKNKALJFKN_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Boolean EINMCIJLEIL(::RPG::GameCore::ActionDelayChangeReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EINMCIJLEIL_OFFSET))(this, a1);
		}

		::System::Void FPJBHJAKBJL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_FPJBHJAKBJL_OFFSET))(this, a1);
		}

		::System::Void NEEJLOJBGMF(::RPG::Client::ActionDelayVisibleType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType, ::System::Boolean))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NEEJLOJBGMF_OFFSET))(this, a1, a2);
		}

		::System::Void HBOCGPDPBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_HBOCGPDPBBP_OFFSET))(this);
		}

		::System::Void GDDCGGPEJGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GDDCGGPEJGH_OFFSET))(this);
		}

		::System::Void CBKKLIAFPMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CBKKLIAFPMO_OFFSET))(this);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void CKEHFMCENCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CKEHFMCENCI_OFFSET))(this);
		}

		::System::Boolean EGFKPINPHLB(::GAHPNAEGACM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EGFKPINPHLB_OFFSET))(this, a1);
		}

		::RPG::Client::ActionBarItemAction FNHMKKGNKEO(::RPG::Client::ActionBarItemAction a1, ::RPG::Client::ActionBarItemAction a2)
		{
			return ((::RPG::Client::ActionBarItemAction(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_FNHMKKGNKEO_OFFSET))(this, a1, a2);
		}

		::System::Void EKBNLEBBHNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EKBNLEBBHNJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 NFAMODGKHJC(::RPG::Client::ActionBarItemUIStyle a1, ::GEDMHFPPBHN* a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NFAMODGKHJC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NFAMODGKHJC_1(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NFAMODGKHJC_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 EIDCAFMPNDL(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EIDCAFMPNDL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 DDCNOHODFEG(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DDCNOHODFEG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GPLIGACPGAG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GPLIGACPGAG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 IBNJBLAIALG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_IBNJBLAIALG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 JEAJIIBCIPG(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_JEAJIIBCIPG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 DAHPEAEHGEG(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_DAHPEAEHGEG_OFFSET))(this, a1);
		}

		::System::Void JDBCNADKAEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_JDBCNADKAEC_OFFSET))(this, a1);
		}

		::DFFPKLFKGAO* get_ActionBarMgrRef()
		{
			return ((::DFFPKLFKGAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ACTIONBARMGRREF_OFFSET))(this);
		}

		::System::Void set_ActionBarMgrRef(::DFFPKLFKGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFPKLFKGAO*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_ACTIONBARMGRREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_BATTLEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_BATTLEINSTANCEREF_OFFSET))(this, a1);
		}

		::System::Void EKAMGHFDAAH(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EKAMGHFDAAH_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_ActionBarRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ACTIONBARRECT_OFFSET))(this);
		}

		::System::Void set_ActionBarRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_ACTIONBARRECT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OIPDHEBONEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OIPDHEBONEF_OFFSET))(this);
		}

		::UnityEngine::Vector3 GCCLOMGPFCF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GCCLOMGPFCF_OFFSET))(this);
		}

		::System::Boolean get_IsAnimNodeActionBarFadeInPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this);
		}

		::System::Void set_IsAnimNodeActionBarFadeInPlaying(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this, a1);
		}

		::System::Single get_TotalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_TOTALHEIGHT_OFFSET))(this);
		}

		::System::Void set_TotalHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_TOTALHEIGHT_OFFSET))(this, a1);
		}

		::RPG::Client::ActionBarUpdateTiming get_ActionBarUpdateTimingCache()
		{
			return ((::RPG::Client::ActionBarUpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this);
		}

		::System::Void set_ActionBarUpdateTimingCache(::RPG::Client::ActionBarUpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this, a1);
		}

		::System::Boolean AHECMEFPCKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AHECMEFPCKF_OFFSET))(this);
		}

		::System::Boolean get_IsTicking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ISTICKING_OFFSET))(this);
		}

		::System::Void set_IsTicking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_ISTICKING_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* get_AllPos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_ALLPOS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* NPPPJCFODOE()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NPPPJCFODOE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*>*>* get_CustomEffects()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_CUSTOMEFFECTS_OFFSET))(this);
		}

		::NJPNJAKPNDL* NONIFAEDAMG()
		{
			return ((::NJPNJAKPNDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NONIFAEDAMG_OFFSET))(this);
		}

		::System::Single NLDBLLPDHGP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NLDBLLPDHGP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* get_SkillPreviewRemoveCache()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_SKILLPREVIEWREMOVECACHE_OFFSET))(this);
		}

		::System::Void set_SkillPreviewRemoveCache(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_SKILLPREVIEWREMOVECACHE_OFFSET))(this, a1);
		}

		::System::Int32 get_ShenJunLevel1Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_SHENJUNLEVEL1COUNT_OFFSET))(this);
		}

		::System::Void set_ShenJunLevel1Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_SHENJUNLEVEL1COUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_ShenJunLevel2Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_SHENJUNLEVEL2COUNT_OFFSET))(this);
		}

		::System::Void set_ShenJunLevel2Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_SHENJUNLEVEL2COUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CountDownWarningTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_COUNTDOWNWARNINGTIME_OFFSET))(this);
		}

		::System::Void set_CountDownWarningTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_COUNTDOWNWARNINGTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoSetTutorialDynamicKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this);
		}

		::System::Void set_AutoSetTutorialDynamicKey(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this, a1);
		}

		::System::Void KIENCKCMJOH(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_KIENCKCMJOH_OFFSET))(this, a1);
		}

		::System::Void GHHKMEDBCMN(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GHHKMEDBCMN_OFFSET))(this, a1);
		}

		::System::Void OAFMEFDFHBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OAFMEFDFHBK_OFFSET))(this);
		}

		::RPG::Client::ActionBarLinkOrder PKGJMJFPCEC(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActionBarLinkOrder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_PKGJMJFPCEC_OFFSET))(this, a1);
		}

		::System::Void OEKHFCBIBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OEKHFCBIBOA_OFFSET))(this);
		}

		::System::Void GLAEGNADOEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_GLAEGNADOEL_OFFSET))(this);
		}

		::System::Void CHPAOENOGBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_CHPAOENOGBN_OFFSET))(this);
		}

		::System::Void FDBFCNNAOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_FDBFCNNAOEM_OFFSET))(this);
		}

		::System::Void NJBENAEOAOH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NJBENAEOAOH_OFFSET))(this, a1);
		}

		::GEDMHFPPBHN* MPDCJPOONIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_MPDCJPOONIP_OFFSET))(this, a1);
		}

		::System::Void NFINNNGBKEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_NFINNNGBKEN_OFFSET))(this);
		}

		::System::Void KCPFJGLJJKP(::GEDMHFPPBHN* a1, ::MADHNHEMBOJ_ADIMGCIBHBC* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*, ::MADHNHEMBOJ_ADIMGCIBHBC*, ::System::Boolean))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_KCPFJGLJJKP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActionBarEventAction EMEKNOCLHEJ(::System::Int32 a1, ::System::Boolean a2, ::DNBDPIOLLHH* a3)
		{
			return ((::RPG::Client::ActionBarEventAction(*)(::PVOID, ::System::Int32, ::System::Boolean, ::DNBDPIOLLHH*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_EMEKNOCLHEJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 KCPHDDBBCOJ(::MADHNHEMBOJ_ADIMGCIBHBC* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MADHNHEMBOJ_ADIMGCIBHBC*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_KCPHDDBBCOJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 AEKJCGNIAOL(::MADHNHEMBOJ_ADIMGCIBHBC* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MADHNHEMBOJ_ADIMGCIBHBC*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AEKJCGNIAOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AGHFGPGIBNC(::GEDMHFPPBHN* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_AGHFGPGIBNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHPOLDPLMOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_PHPOLDPLMOD_OFFSET))(this);
		}

		::System::Void BFALFLMPGBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_BFALFLMPGBM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DNBDPIOLLHH*>* OEKCIDPBPMH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DNBDPIOLLHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_OEKCIDPBPMH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PNADGAFDGPL*>* LJNADILLDAA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PNADGAFDGPL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_LJNADILLDAA_OFFSET))(this);
		}

	};
