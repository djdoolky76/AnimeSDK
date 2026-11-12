#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHBHCGJMHL.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaitAnimStateResult.h"
class GELIALJDFBL;
class HHECHLOIEJO;
class IBEJMEEEJMB;
class LDMKDJJLOIL;
class LFFEFADCAMA;
class PHPFBBDLPNL_EOBGAJCCNOO;
class PHPFBBDLPNL_GDPCFEDMCHC;
class PNMGLOKELGK;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define LGBHONLHNPN_AEIEDNEDGIC_OFFSET UNITYSDK_OFFSET(0xBF24050)
#define LGBHONLHNPN_AGAGECCCKAD_OFFSET UNITYSDK_OFFSET(0xBF24670)
#define LGBHONLHNPN_ANLIBFBPNNO_OFFSET UNITYSDK_OFFSET(0xBF24530)
#define LGBHONLHNPN_BPICFLJBOEH_OFFSET UNITYSDK_OFFSET(0xBF23190)
#define LGBHONLHNPN_CGDFKGIKKMF_OFFSET UNITYSDK_OFFSET(0xBF230D0)
#define LGBHONLHNPN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF22C30)
#define LGBHONLHNPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF22DB0)
#define LGBHONLHNPN_ELLLCHIPOEC_OFFSET UNITYSDK_OFFSET(0xBF240B0)
#define LGBHONLHNPN_EPAHEBGKJOC_OFFSET UNITYSDK_OFFSET(0xBF24780)
#define LGBHONLHNPN_FCJGFMEIFLB_OFFSET UNITYSDK_OFFSET(0xBF24390)
#define LGBHONLHNPN_FOGNIIEDKCH_OFFSET UNITYSDK_OFFSET(0xBF23A30)
#define LGBHONLHNPN_GEIEGECKDGD_OFFSET UNITYSDK_OFFSET(0xBF24120)
#define LGBHONLHNPN_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBF22910)
#define LGBHONLHNPN_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xBF248A0)
#define LGBHONLHNPN_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xBF24900)
#define LGBHONLHNPN_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF22C20)
#define LGBHONLHNPN_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xBF248C0)
#define LGBHONLHNPN_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xBF248E0)
#define LGBHONLHNPN_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0xBF24920)
#define LGBHONLHNPN_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xBF24880)
#define LGBHONLHNPN_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xBF24850)
#define LGBHONLHNPN_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0xBF24820)
#define LGBHONLHNPN_GHMJDHAPPLH_OFFSET UNITYSDK_OFFSET(0xBF23BA0)
#define LGBHONLHNPN_HKFMIIENDHD_1_OFFSET UNITYSDK_OFFSET(0xBF23ED0)
#define LGBHONLHNPN_HKFMIIENDHD_OFFSET UNITYSDK_OFFSET(0xBF23E00)
#define LGBHONLHNPN_ILOAJPPHBLI_OFFSET UNITYSDK_OFFSET(0xBF244A0)
#define LGBHONLHNPN_JAHFNGDEOOJ_1_OFFSET UNITYSDK_OFFSET(0xBF23B20)
#define LGBHONLHNPN_JAHFNGDEOOJ_OFFSET UNITYSDK_OFFSET(0xBF23AA0)
#define LGBHONLHNPN_JDLAKHGAFFN_OFFSET UNITYSDK_OFFSET(0xBF22850)
#define LGBHONLHNPN_JLGFFDFNNKG_OFFSET UNITYSDK_OFFSET(0xBF23430)
#define LGBHONLHNPN_KJGNFILBIBF_OFFSET UNITYSDK_OFFSET(0xBF23860)
#define LGBHONLHNPN_KKPJECPMJCE_OFFSET UNITYSDK_OFFSET(0xBF238C0)
#define LGBHONLHNPN_KNBDGLFMMMB_OFFSET UNITYSDK_OFFSET(0xBF24330)
#define LGBHONLHNPN_LHIIBPIIHKC_OFFSET UNITYSDK_OFFSET(0xBF24930)
#define LGBHONLHNPN_LMCEDCHJKFF_1_OFFSET UNITYSDK_OFFSET(0xBF23730)
#define LGBHONLHNPN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBF23650)
#define LGBHONLHNPN_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBF24860)
#define LGBHONLHNPN_MNKNGAFLGGF_OFFSET UNITYSDK_OFFSET(0xBF23FF0)
#define LGBHONLHNPN_MODJMDPINCN_OFFSET UNITYSDK_OFFSET(0xBF24730)
#define LGBHONLHNPN_NIBAHFGIODH_OFFSET UNITYSDK_OFFSET(0xBF24840)
#define LGBHONLHNPN_NIBMHHELELI_OFFSET UNITYSDK_OFFSET(0xBF23F80)
#define LGBHONLHNPN_NJICLKJIIEJ_OFFSET UNITYSDK_OFFSET(0xBF242C0)
#define LGBHONLHNPN_OBPLAMMLFCF_OFFSET UNITYSDK_OFFSET(0xBF24190)
#define LGBHONLHNPN_ONACKBPNFEE_OFFSET UNITYSDK_OFFSET(0xBF248F0)
#define LGBHONLHNPN_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBF23D70)
#define LGBHONLHNPN_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xBF23120)
#define LGBHONLHNPN_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBF23550)
#define LGBHONLHNPN_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xBF22F20)
#define LGBHONLHNPN_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBF22FB0)
#define LGBHONLHNPN_OOHFFFNPPCE_OFFSET UNITYSDK_OFFSET(0xBF234B0)
#define LGBHONLHNPN_PHFIFNODMGM_OFFSET UNITYSDK_OFFSET(0xBF245F0)
#define LGBHONLHNPN_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xBF24940)
#define LGBHONLHNPN_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0xBF248B0)
#define LGBHONLHNPN_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0xBF24910)
#define LGBHONLHNPN_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0xBF248D0)
#define LGBHONLHNPN_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0xBF24890)
#define LGBHONLHNPN__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBF22C60)

inline static constexpr unsigned int LGBHONLHNPN_TypeDefinitionIndex = 58391;

	class LGBHONLHNPN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::PHPFBBDLPNL_GDPCFEDMCHC* NELPNMHEBCC; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::IBEJMEEEJMB* CPIIOIPAAKK; // 0x28
		::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* KDIIFBLAFMH; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* HBKJKEAKHDE; // 0x38
		::FFHBHCGJMHL DFDBKKKCDFM; // 0x40
		::HHECHLOIEJO* EGKMMHCBAEM; // 0x50
		::UnityEngine::GameObject* AAPEMMDGOJO; // 0x58
		::System::Int32 NLEPNINNIPD; // 0x60
		::System::Boolean LELOAIIDMNI; // 0x64
		::System::Boolean PCHMPNFGDKF; // 0x65
		::System::Boolean IBJHPPNLHGM; // 0x66
		::System::Boolean IKADHHKDFJK; // 0x67
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x68
		::System::Boolean OMLHPJFCFBP; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_CTOR_OFFSET))(this);
		}

		::System::Void JDLAKHGAFFN(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action_2<::GELIALJDFBL*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_JDLAKHGAFFN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::IBEJMEEEJMB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LMCEDCHJKFF_1(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4, ::Il2CppArray<::System::String*>* a5, ::IBEJMEEEJMB* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_LMCEDCHJKFF_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::LFFEFADCAMA* KJGNFILBIBF()
		{
			return ((::LFFEFADCAMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_KJGNFILBIBF_OFFSET))(this);
		}

		::System::Void KKPJECPMJCE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_KKPJECPMJCE_OFFSET))(this, a1);
		}

		::System::Void FOGNIIEDKCH(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_FOGNIIEDKCH_OFFSET))(this, a1, a2);
		}

		::System::Void JAHFNGDEOOJ(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGBHONLHNPN_JAHFNGDEOOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAHFNGDEOOJ_1(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGBHONLHNPN_JAHFNGDEOOJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CGDFKGIKKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_CGDFKGIKKMF_OFFSET))(this);
		}

		::System::Void GHMJDHAPPLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GHMJDHAPPLH_OFFSET))(this);
		}

		::LDMKDJJLOIL* HKFMIIENDHD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::LDMKDJJLOIL*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_HKFMIIENDHD_OFFSET))(this, a1, a2);
		}

		::LDMKDJJLOIL* HKFMIIENDHD_1(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* a2, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* a3, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a4)
		{
			return ((::LDMKDJJLOIL*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>*, ::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_HKFMIIENDHD_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NIBMHHELELI(::LDMKDJJLOIL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDMKDJJLOIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGBHONLHNPN_NIBMHHELELI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MNKNGAFLGGF(::PNMGLOKELGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNMGLOKELGK*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_MNKNGAFLGGF_OFFSET))(this, a1);
		}

		::System::Void AEIEDNEDGIC(::PNMGLOKELGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMGLOKELGK*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_AEIEDNEDGIC_OFFSET))(this, a1);
		}

		::System::Void ELLLCHIPOEC(::PHPFBBDLPNL_GDPCFEDMCHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL_GDPCFEDMCHC*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ELLLCHIPOEC_OFFSET))(this, a1);
		}

		::System::Void GEIEGECKDGD(::PHPFBBDLPNL_GDPCFEDMCHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL_GDPCFEDMCHC*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GEIEGECKDGD_OFFSET))(this, a1);
		}

		::System::Void OBPLAMMLFCF(::System::String* a1, ::PHPFBBDLPNL_EOBGAJCCNOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PHPFBBDLPNL_EOBGAJCCNOO*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_OBPLAMMLFCF_OFFSET))(this, a1, a2);
		}

		::System::Void NJICLKJIIEJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_NJICLKJIIEJ_OFFSET))(this, a1);
		}

		::System::Void KNBDGLFMMMB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_KNBDGLFMMMB_OFFSET))(this, a1);
		}

		::System::Void FCJGFMEIFLB(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_FCJGFMEIFLB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void ANLIBFBPNNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ANLIBFBPNNO_OFFSET))(this);
		}

		::System::Void ILOAJPPHBLI(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ILOAJPPHBLI_OFFSET))(this, a1);
		}

		::System::Void OOHFFFNPPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_OOHFFFNPPCE_OFFSET))(this);
		}

		::System::Void JLGFFDFNNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_JLGFFDFNNKG_OFFSET))(this);
		}

		::System::Boolean PHFIFNODMGM(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LGBHONLHNPN_PHFIFNODMGM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::WaitAnimStateResult AGAGECCCKAD(::System::Int32 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::RPG::GameCore::WaitAnimStateResult(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LGBHONLHNPN_AGAGECCCKAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MODJMDPINCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_MODJMDPINCN_OFFSET))(this);
		}

		::System::Void BPICFLJBOEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_BPICFLJBOEH_OFFSET))(this);
		}

		::System::Void EPAHEBGKJOC(::Il2CppArray<::System::String*>* a1, ::IBEJMEEEJMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_EPAHEBGKJOC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameWorld* get_WorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_WORLDREF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NIBAHFGIODH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_NIBAHFGIODH_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_MLMGEFIOION_OFFSET))(this);
		}

		::System::Int32 get_ReEntryCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_REENTRYCOUNTER_OFFSET))(this);
		}

		::System::Void set_ReEntryCounter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LGBHONLHNPN_SET_REENTRYCOUNTER_OFFSET))(this, a1);
		}

		::System::Boolean get_AnimatorNotInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_ANIMATORNOTINIT_OFFSET))(this);
		}

		::System::Void set_AnimatorNotInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGBHONLHNPN_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedResetEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_NEEDRESETEVENT_OFFSET))(this);
		}

		::System::Void set_NeedResetEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGBHONLHNPN_SET_NEEDRESETEVENT_OFFSET))(this, a1);
		}

		::PHPFBBDLPNL_GDPCFEDMCHC* get_OnAnimationStateChange()
		{
			return ((::PHPFBBDLPNL_GDPCFEDMCHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
		}

		::System::Void ONACKBPNFEE(::PHPFBBDLPNL_GDPCFEDMCHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL_GDPCFEDMCHC*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_ONACKBPNFEE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* get_DynamicAnimEventDataList()
		{
			return ((::System::Collections::Generic::List_1<::LDMKDJJLOIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
		}

		::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LDMKDJJLOIL*>*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_OnAnimatorMoveCallbackMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
		}

		::System::Void LHIIBPIIHKC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + LGBHONLHNPN_LHIIBPIIHKC_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBHONLHNPN_RESETTODEFAULT_OFFSET))(this);
		}

	};
