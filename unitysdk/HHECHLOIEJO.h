#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMJEMKMNOAI.h"
#include "unitysdk/MIIKGFJDMEA.h"
#include "unitysdk/NFJDGIBAFNE.h"
#include "unitysdk/RPG/GameCore/EAnimStateTransitionType.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HHECHLOIEJO___c__DisplayClass4_0.h"
class BNBOAMEBAOE;
class EMDGFKHCAGP;
class EOINMKOBOKK;
class FKMGOCGOCPO;
class GELIALJDFBL;
class HHECHLOIEJO_EHHLGBOONDI;
class HHECHLOIEJO_PJIJFDCBEEP;
class IBEJMEEEJMB;
class LDMKDJJLOIL;
class LFFEFADCAMA;
class LPNPMKNMMOK;
class PHPFBBDLPNL;
class PNMGLOKELGK;
namespace RPG { template <typename T> class RingBuffer_1; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define HHECHLOIEJO_AEIEDNEDGIC_OFFSET UNITYSDK_OFFSET(0x1900F580)
#define HHECHLOIEJO_AGAGECCCKAD_OFFSET UNITYSDK_OFFSET(0x19013980)
#define HHECHLOIEJO_ALOGBJMOMOD_OFFSET UNITYSDK_OFFSET(0x1900EFB0)
#define HHECHLOIEJO_ANLIBFBPNNO_OFFSET UNITYSDK_OFFSET(0x1900F120)
#define HHECHLOIEJO_CAENENFBGKO_OFFSET UNITYSDK_OFFSET(0x1900EC70)
#define HHECHLOIEJO_CGDFKGIKKMF_OFFSET UNITYSDK_OFFSET(0x1900AB30)
#define HHECHLOIEJO_CJODJODMDND_OFFSET UNITYSDK_OFFSET(0x1900F8F0)
#define HHECHLOIEJO_CTOR_OFFSET UNITYSDK_OFFSET(0x190153C0)
#define HHECHLOIEJO_DBDAANACJKD_OFFSET UNITYSDK_OFFSET(0x19012A60)
#define HHECHLOIEJO_DBGEPADDBEL_OFFSET UNITYSDK_OFFSET(0x19012660)
#define HHECHLOIEJO_DFKBADDLJGC_OFFSET UNITYSDK_OFFSET(0x1900EDA0)
#define HHECHLOIEJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1900A1A0)
#define HHECHLOIEJO_FCJGFMEIFLB_OFFSET UNITYSDK_OFFSET(0x19013DA0)
#define HHECHLOIEJO_FFGGFKIBIEI_OFFSET UNITYSDK_OFFSET(0x19012940)
#define HHECHLOIEJO_FGAHFIBMPCP_OFFSET UNITYSDK_OFFSET(0x190101E0)
#define HHECHLOIEJO_FOGNIIEDKCH_OFFSET UNITYSDK_OFFSET(0x19011540)
#define HHECHLOIEJO_GBAGOKBKIIC_OFFSET UNITYSDK_OFFSET(0x19013380)
#define HHECHLOIEJO_GMCDKGFNBEI_OFFSET UNITYSDK_OFFSET(0x190153B0)
#define HHECHLOIEJO_HKFMIIENDHD_1_OFFSET UNITYSDK_OFFSET(0x19012BC0)
#define HHECHLOIEJO_HKFMIIENDHD_OFFSET UNITYSDK_OFFSET(0x19012B30)
#define HHECHLOIEJO_HLLKCLLPIKH_OFFSET UNITYSDK_OFFSET(0x19014650)
#define HHECHLOIEJO_HNPLGKCKIJL_OFFSET UNITYSDK_OFFSET(0x190141C0)
#define HHECHLOIEJO_IFGAGDPDAOP_OFFSET UNITYSDK_OFFSET(0x1900D240)
#define HHECHLOIEJO_IKHDMFGDKJH_OFFSET UNITYSDK_OFFSET(0x1900E090)
#define HHECHLOIEJO_ILOAJPPHBLI_OFFSET UNITYSDK_OFFSET(0x1900B8C0)
#define HHECHLOIEJO_JAHFNGDEOOJ_1_OFFSET UNITYSDK_OFFSET(0x190122D0)
#define HHECHLOIEJO_JAHFNGDEOOJ_OFFSET UNITYSDK_OFFSET(0x19012040)
#define HHECHLOIEJO_JKMKDIAFPEP_OFFSET UNITYSDK_OFFSET(0x190152A0)
#define HHECHLOIEJO_KNBDGLFMMMB_OFFSET UNITYSDK_OFFSET(0x19013640)
#define HHECHLOIEJO_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x19009FD0)
#define HHECHLOIEJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19009E40)
#define HHECHLOIEJO_LEDMDFIEOLE_OFFSET UNITYSDK_OFFSET(0x1900FD60)
#define HHECHLOIEJO_MAHDLMMAEEI_OFFSET UNITYSDK_OFFSET(0x190150E0)
#define HHECHLOIEJO_MEEGEECMMFK_OFFSET UNITYSDK_OFFSET(0x1900D860)
#define HHECHLOIEJO_MMHFFDBBOKI_OFFSET UNITYSDK_OFFSET(0x1900EEC0)
#define HHECHLOIEJO_MNKNGAFLGGF_OFFSET UNITYSDK_OFFSET(0x1900F2D0)
#define HHECHLOIEJO_MODJMDPINCN_OFFSET UNITYSDK_OFFSET(0x1900E800)
#define HHECHLOIEJO_MOHIAALLKMF_OFFSET UNITYSDK_OFFSET(0x19013CF0)
#define HHECHLOIEJO_NIBMHHELELI_OFFSET UNITYSDK_OFFSET(0x190130C0)
#define HHECHLOIEJO_NKCHMMGDBMA_OFFSET UNITYSDK_OFFSET(0x19014920)
#define HHECHLOIEJO_OKDNFHMKPLA_OFFSET UNITYSDK_OFFSET(0x1900E9E0)
#define HHECHLOIEJO_OMMGINEECHA_OFFSET UNITYSDK_OFFSET(0x19013860)
#define HHECHLOIEJO_PGFOKLBFHKC_OFFSET UNITYSDK_OFFSET(0x19011070)
#define HHECHLOIEJO_PHFIFNODMGM_OFFSET UNITYSDK_OFFSET(0x190138D0)
#define HHECHLOIEJO_PHIBBFPCACH_OFFSET UNITYSDK_OFFSET(0x19014DC0)
#define HHECHLOIEJO__PREAPPLYTEAMSTANDBYPARTSVISIBILITY_G__APPLYCONFIG_4_0_OFFSET UNITYSDK_OFFSET(0x1900D5E0)
#define HHECHLOIEJO___SETUPANIMEVENTCONFIGFILE_B__28_0_OFFSET UNITYSDK_OFFSET(0x19015580)

inline static constexpr unsigned int HHECHLOIEJO_TypeDefinitionIndex = 58368;

	class HHECHLOIEJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::EOINMKOBOKK*>*>* EOAHDHNFBGD; // 0x10
		::Il2CppArray<::System::Int32>* GGCBHIHBJIA; // 0x18
		::LFFEFADCAMA* NKFIENBEADD; // 0x20
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* NNPDHKELNFK; // 0x28
		::Il2CppArray<::System::Object*>* DNFOPHCPHGP; // 0x30
		::Il2CppArray<::System::Object*>* NBLEHOHBMHE; // 0x38
		::Il2CppArray<::FKMGOCGOCPO*>* DGFHOBJCLFE; // 0x40
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* BBIDLNDCKNB; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::PNMGLOKELGK*>*>* IIIINOJFCJK; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* JAIKKMAMHJN; // 0x58
		::UnityEngine::RuntimeAnimatorController* OLEPCLAPPCM; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NFJDGIBAFNE>* NALJJNGFPPK; // 0x68
		::RPG::RingBuffer_1<::MIIKGFJDMEA>* EDAFMMJDLHB; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* GHDJHHLKAPF; // 0x78
		::Il2CppArray<::System::Object*>* DPKNCMHIBBL; // 0x80
		::Il2CppArray<::System::String*>* NBNJJDIMDKE; // 0x88
		::Il2CppArray<::FMJEMKMNOAI>* CMHAKHFAMGB; // 0x90
		::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* FONBGNBOPGJ; // 0x98
		::EMDGFKHCAGP* EMEABIJBCKC; // 0xA0
		::IBEJMEEEJMB* CPIIOIPAAKK; // 0xA8
		::Il2CppArray<::System::Object*>* AFGFHKIKCBP; // 0xB0
		::Il2CppArray<::System::String*>* KGGGDHNMDMK; // 0xB8
		::System::String* IMCNOPHMHLE; // 0xC0
		::PHPFBBDLPNL* CFKHNPGEAJA; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PHPFBBDLPNL* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3, ::IBEJMEEEJMB* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPJGDHLENIP_1(::PHPFBBDLPNL* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a4, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a5, ::Il2CppArray<::System::String*>* a6, ::IBEJMEEEJMB* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_DISPOSE_OFFSET))(this);
		}

		::System::Void CGDFKGIKKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_CGDFKGIKKMF_OFFSET))(this);
		}

		::System::Void IFGAGDPDAOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_IFGAGDPDAOP_OFFSET))(this);
		}

		::System::Void ILOAJPPHBLI(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_ILOAJPPHBLI_OFFSET))(this, a1);
		}

		::System::Boolean MNKNGAFLGGF(::PNMGLOKELGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNMGLOKELGK*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MNKNGAFLGGF_OFFSET))(this, a1);
		}

		::System::Void AEIEDNEDGIC(::PNMGLOKELGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMGLOKELGK*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_AEIEDNEDGIC_OFFSET))(this, a1);
		}

		::System::Void MEEGEECMMFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MEEGEECMMFK_OFFSET))(this);
		}

		::System::Void FOGNIIEDKCH(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_FOGNIIEDKCH_OFFSET))(this, a1, a2);
		}

		::System::Void JAHFNGDEOOJ(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_JAHFNGDEOOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAHFNGDEOOJ_1(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_JAHFNGDEOOJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGFOKLBFHKC(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PGFOKLBFHKC_OFFSET))(this, a1);
		}

		::LDMKDJJLOIL* HKFMIIENDHD(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
		{
			return ((::LDMKDJJLOIL*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_HKFMIIENDHD_OFFSET))(this, a1, a2, a3, a4);
		}

		::LDMKDJJLOIL* HKFMIIENDHD_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a4, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a5)
		{
			return ((::LDMKDJJLOIL*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_HKFMIIENDHD_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NIBMHHELELI(::LDMKDJJLOIL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDMKDJJLOIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_NIBMHHELELI_OFFSET))(this, a1, a2);
		}

		::System::Void KNBDGLFMMMB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_KNBDGLFMMMB_OFFSET))(this, a1);
		}

		::System::Void OMMGINEECHA(::Il2CppArray<::System::String*>* a1, ::IBEJMEEEJMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_OMMGINEECHA_OFFSET))(this, a1, a2);
		}

		::System::Boolean PHFIFNODMGM(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PHFIFNODMGM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::WaitAnimStateResult AGAGECCCKAD(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_AGAGECCCKAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MOHIAALLKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MOHIAALLKMF_OFFSET))(this);
		}

		::System::Void FCJGFMEIFLB(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_FCJGFMEIFLB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HLLKCLLPIKH(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_HLLKCLLPIKH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CJODJODMDND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_CJODJODMDND_OFFSET))(this);
		}

		::System::Void LEDMDFIEOLE(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LEDMDFIEOLE_OFFSET))(this, a1);
		}

		::System::Boolean DBGEPADDBEL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_DBGEPADDBEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean FFGGFKIBIEI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_FFGGFKIBIEI_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DBDAANACJKD(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_DBDAANACJKD_OFFSET))(a1, a2);
		}

		::System::Void FGAHFIBMPCP(::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a2, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a3, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>* a4, ::RPG::GameCore::TaskContext* a5, ::LDMKDJJLOIL* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>*, ::RPG::GameCore::TaskContext*, ::LDMKDJJLOIL*, ::System::String*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_FGAHFIBMPCP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GBAGOKBKIIC(::LDMKDJJLOIL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDMKDJJLOIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_GBAGOKBKIIC_OFFSET))(this, a1, a2);
		}

		::System::Void MMHFFDBBOKI(::HHECHLOIEJO_PJIJFDCBEEP* a1, ::System::Single a2, ::System::Boolean a3, ::RPG::GameCore::EAnimStateTransitionType a4, ::HHECHLOIEJO_EHHLGBOONDI* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HHECHLOIEJO_PJIJFDCBEEP*, ::System::Single, ::System::Boolean, ::RPG::GameCore::EAnimStateTransitionType, ::HHECHLOIEJO_EHHLGBOONDI*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MMHFFDBBOKI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::LPNPMKNMMOK* IKHDMFGDKJH()
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_IKHDMFGDKJH_OFFSET))(this);
		}

		::System::Void MODJMDPINCN(::System::Boolean a1, ::FMJEMKMNOAI a2, ::FMJEMKMNOAI a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FMJEMKMNOAI, ::FMJEMKMNOAI))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MODJMDPINCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ANLIBFBPNNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_ANLIBFBPNNO_OFFSET))(this);
		}

		::System::Void OKDNFHMKPLA(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::HHECHLOIEJO_EHHLGBOONDI* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32, ::RPG::GameCore::EAnimStateTransitionType, ::HHECHLOIEJO_EHHLGBOONDI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_OKDNFHMKPLA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HNPLGKCKIJL(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4, ::RPG::GameCore::EAnimStateTransitionType a5, ::HHECHLOIEJO_EHHLGBOONDI* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::RPG::GameCore::EAnimStateTransitionType, ::HHECHLOIEJO_EHHLGBOONDI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_HNPLGKCKIJL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MAHDLMMAEEI(::PNMGLOKELGK* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::PNMGLOKELGK*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HHECHLOIEJO_MAHDLMMAEEI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PHIBBFPCACH(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::HHECHLOIEJO_EHHLGBOONDI* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::HHECHLOIEJO_EHHLGBOONDI*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PHIBBFPCACH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JKMKDIAFPEP(::UnityEngine::Animator* a1, ::RPG::GameCore::AnimParamRangeEntry* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::RPG::GameCore::AnimParamRangeEntry*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_JKMKDIAFPEP_OFFSET))(this, a1, a2);
		}

		::System::Single CAENENFBGKO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HHECHLOIEJO_CAENENFBGKO_OFFSET))(this, a1, a2);
		}

		::System::Void DFKBADDLJGC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_DFKBADDLJGC_OFFSET))(this, a1);
		}

		::System::Void ALOGBJMOMOD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_ALOGBJMOMOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKCHMMGDBMA(::BNBOAMEBAOE* a1, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_NKCHMMGDBMA_OFFSET))(this, a1, a2, a3);
		}

		::LFFEFADCAMA* GMCDKGFNBEI()
		{
			return ((::LFFEFADCAMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_GMCDKGFNBEI_OFFSET))(this);
		}

		static ::System::Void _PreapplyTeamStandByPartsVisibility_g__ApplyConfig_4_0(::System::String* a1, ::HHECHLOIEJO___c__DisplayClass4_0 a2)
		{
			return ((::System::Void(*)(::System::String*, ::HHECHLOIEJO___c__DisplayClass4_0))((::PBYTE)hIl2Cpp + HHECHLOIEJO__PREAPPLYTEAMSTANDBYPARTSVISIBILITY_G__APPLYCONFIG_4_0_OFFSET))(a1, a2);
		}

		::System::String* __SetupAnimEventConfigFile_b__28_0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHECHLOIEJO___SETUPANIMEVENTCONFIGFILE_B__28_0_OFFSET))(this, a1);
		}

	};
