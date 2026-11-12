#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class CKCJOCJGHKC;
class CLAKIACAACO;
class FHJBODEGFNP;
class GEKNAKDAMJF;
class IGKFFAGEKPF;
class JCKGBFJJFFC;
class JMPJCAPKNGI;
class KHNBFDNKLHE;
class LHAKNKHBLBI;
class PEOKJEOOOJD;
class PHKPDMEAMBP;
class PMMOFOBCINL;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILDNJGBJGPF_ADD_ONENDED_OFFSET UNITYSDK_OFFSET(0x1747F0E0)
#define ILDNJGBJGPF_AIGDAOCGPMF_OFFSET UNITYSDK_OFFSET(0x1747FFE0)
#define ILDNJGBJGPF_CDIDPIDJJAN_OFFSET UNITYSDK_OFFSET(0x1747F840)
#define ILDNJGBJGPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1747F1A0)
#define ILDNJGBJGPF_DHJGKPEAHHA_OFFSET UNITYSDK_OFFSET(0x1747F0A0)
#define ILDNJGBJGPF_ELGBCKDMKIP_OFFSET UNITYSDK_OFFSET(0x1747F950)
#define ILDNJGBJGPF_GCOODGGOHKE_OFFSET UNITYSDK_OFFSET(0x1747EC90)
#define ILDNJGBJGPF_GET_CACHEDSETTLE_OFFSET UNITYSDK_OFFSET(0x1747F060)
#define ILDNJGBJGPF_GET_PENDINGSETTLE_OFFSET UNITYSDK_OFFSET(0x1747F080)
#define ILDNJGBJGPF_GET_STAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1747EC20)
#define ILDNJGBJGPF_GET_TIERCEREF_OFFSET UNITYSDK_OFFSET(0x1747EC10)
#define ILDNJGBJGPF_GLDEBFOKEMJ_OFFSET UNITYSDK_OFFSET(0x1747F7E0)
#define ILDNJGBJGPF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1747F4F0)
#define ILDNJGBJGPF_HDBFLOEPFDK_OFFSET UNITYSDK_OFFSET(0x1747FCA0)
#define ILDNJGBJGPF_IBBMFPPLHJB_OFFSET UNITYSDK_OFFSET(0x174805D0)
#define ILDNJGBJGPF_MLNMJJMCFGP_OFFSET UNITYSDK_OFFSET(0x1747EC40)
#define ILDNJGBJGPF_NDFLOOMPPHE_OFFSET UNITYSDK_OFFSET(0x1747FBC0)
#define ILDNJGBJGPF_NPCMNFKKDDH_OFFSET UNITYSDK_OFFSET(0x17480500)
#define ILDNJGBJGPF_OEDOPKOEMJN_OFFSET UNITYSDK_OFFSET(0x1747FB40)
#define ILDNJGBJGPF_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1747FA60)
#define ILDNJGBJGPF_REMOVE_ONENDED_OFFSET UNITYSDK_OFFSET(0x1747F140)
#define ILDNJGBJGPF_SET_CACHEDSETTLE_OFFSET UNITYSDK_OFFSET(0x1747F070)
#define ILDNJGBJGPF_SET_PENDINGSETTLE_OFFSET UNITYSDK_OFFSET(0x1747F090)
#define ILDNJGBJGPF_SET_STAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1747EC30)
#define ILDNJGBJGPF__CONFIRMSTAGESETTLE_B__33_0_OFFSET UNITYSDK_OFFSET(0x17480A30)
#define ILDNJGBJGPF__CONTINUEWITHNEXTSTAGE_B__29_0_OFFSET UNITYSDK_OFFSET(0x17480980)
#define ILDNJGBJGPF__RESTARTFROMCURRENTSTAGE_B__30_0_OFFSET UNITYSDK_OFFSET(0x174809F0)
#define ILDNJGBJGPF___HANDLESESSIONSETTLE_B__36_0_OFFSET UNITYSDK_OFFSET(0x17480A40)

inline static constexpr unsigned int ILDNJGBJGPF_TypeDefinitionIndex = 84229;

	class ILDNJGBJGPF : public ::System::Object
	{
	public:
		::FHJBODEGFNP* _CachedSettle_k__BackingField; // 0x10
		::System::Action* OnEnded; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* DKKBOCFDPLN; // 0x20
		::CKCJOCJGHKC* _TierceRef_k__BackingField; // 0x28
		::IGKFFAGEKPF* _PendingSettle_k__BackingField; // 0x30
		::PHKPDMEAMBP* ECKBBFILCDB; // 0x38
		::System::Int32 _StageIndex_k__BackingField; // 0x40
		::System::Boolean EKMIJIPKEIG; // 0x44
		::System::Boolean GFAMGLFOMGI; // 0x45
		::System::Void _ctor(::PHKPDMEAMBP* a1, ::CKCJOCJGHKC* a2, ::CLAKIACAACO* a3, ::KHNBFDNKLHE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PHKPDMEAMBP*, ::CKCJOCJGHKC*, ::CLAKIACAACO*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::CKCJOCJGHKC* get_TierceRef()
		{
			return ((::CKCJOCJGHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GET_TIERCEREF_OFFSET))(this);
		}

		::System::Int32 get_StageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GET_STAGEINDEX_OFFSET))(this);
		}

		::System::Void set_StageIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_SET_STAGEINDEX_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> MLNMJJMCFGP()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_MLNMJJMCFGP_OFFSET))(this);
		}

		::FHJBODEGFNP* get_CachedSettle()
		{
			return ((::FHJBODEGFNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GET_CACHEDSETTLE_OFFSET))(this);
		}

		::System::Void set_CachedSettle(::FHJBODEGFNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHJBODEGFNP*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_SET_CACHEDSETTLE_OFFSET))(this, a1);
		}

		::IGKFFAGEKPF* get_PendingSettle()
		{
			return ((::IGKFFAGEKPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GET_PENDINGSETTLE_OFFSET))(this);
		}

		::System::Void set_PendingSettle(::IGKFFAGEKPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFFAGEKPF*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_SET_PENDINGSETTLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* DHJGKPEAHHA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_DHJGKPEAHHA_OFFSET))(this);
		}

		::System::Void add_OnEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_ADD_ONENDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_REMOVE_ONENDED_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GLDEBFOKEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GLDEBFOKEMJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CDIDPIDJJAN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_CDIDPIDJJAN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ELGBCKDMKIP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_ELGBCKDMKIP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OPCKNBHNBOA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void OEDOPKOEMJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_OEDOPKOEMJN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NDFLOOMPPHE(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_NDFLOOMPPHE_OFFSET))(this, a1);
		}

		::System::Void HDBFLOEPFDK(::JCKGBFJJFFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_HDBFLOEPFDK_OFFSET))(this, a1);
		}

		::System::Void NPCMNFKKDDH(::PEOKJEOOOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEOKJEOOOJD*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_NPCMNFKKDDH_OFFSET))(this, a1);
		}

		::System::Void IBBMFPPLHJB(::GEKNAKDAMJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKNAKDAMJF*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_IBBMFPPLHJB_OFFSET))(this, a1);
		}

		::System::Void AIGDAOCGPMF(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_AIGDAOCGPMF_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::Int32> GCOODGGOHKE()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF_GCOODGGOHKE_OFFSET))(this);
		}

		::System::Void _ContinueWithNextStage_b__29_0(::LHAKNKHBLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHAKNKHBLBI*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF__CONTINUEWITHNEXTSTAGE_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _RestartFromCurrentStage_b__30_0(::JMPJCAPKNGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPJCAPKNGI*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF__RESTARTFROMCURRENTSTAGE_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _ConfirmStageSettle_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF__CONFIRMSTAGESETTLE_B__33_0_OFFSET))(this);
		}

		::System::Boolean __HandleSessionSettle_b__36_0(::PMMOFOBCINL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___HANDLESESSIONSETTLE_B__36_0_OFFSET))(this, a1);
		}

	};
