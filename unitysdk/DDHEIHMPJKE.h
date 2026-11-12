#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBMMGODFEEO;
class EKAFJOGBCFA;
namespace RPG::GameCore { class BattlePerformTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define DDHEIHMPJKE_BCKPOJLNGKJ_OFFSET UNITYSDK_OFFSET(0xEE201D0)
#define DDHEIHMPJKE_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xEE1E4A0)
#define DDHEIHMPJKE_CTOR_OFFSET UNITYSDK_OFFSET(0xEE1E430)
#define DDHEIHMPJKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE1E440)
#define DDHEIHMPJKE_DLEJGLFOMNC_OFFSET UNITYSDK_OFFSET(0xEE1FF00)
#define DDHEIHMPJKE_FCOFJNPEBEF_OFFSET UNITYSDK_OFFSET(0xEE1EB00)
#define DDHEIHMPJKE_FHOBEDMEJAN_OFFSET UNITYSDK_OFFSET(0xEE1E5B0)
#define DDHEIHMPJKE_GNIDPHMGDNH_OFFSET UNITYSDK_OFFSET(0xEE20010)
#define DDHEIHMPJKE_IJOODEBFPCB_OFFSET UNITYSDK_OFFSET(0xEE20170)
#define DDHEIHMPJKE_JMJCNNOIAKK_OFFSET UNITYSDK_OFFSET(0xEE1FF50)
#define DDHEIHMPJKE_JOHHFOEIANC_OFFSET UNITYSDK_OFFSET(0xEE1EAB0)
#define DDHEIHMPJKE_OJAGHJAKJBO_OFFSET UNITYSDK_OFFSET(0xEE1F600)
#define DDHEIHMPJKE_ONONFIMKGLL_OFFSET UNITYSDK_OFFSET(0xEE20100)
#define DDHEIHMPJKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEE1E560)
#define DDHEIHMPJKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEE1EA00)
#define DDHEIHMPJKE_TICK_OFFSET UNITYSDK_OFFSET(0xEE1EA50)

inline static constexpr unsigned int DDHEIHMPJKE_TypeDefinitionIndex = 59190;

	class DDHEIHMPJKE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* LANHALCJKIM; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* LFJHEDFDPJL; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* OKPEAPOAJGJ; // 0x28
		::EBMMGODFEEO* PDOJELJJHCO; // 0x30
		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* ILEIMNFOACP; // 0x38
		::RPG::GameCore::BattlePerformTimeline* OFKGLJOAMLD; // 0x40
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x48
		::System::Int32 NCLHJFDIAFL; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePerformTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePerformTimeline*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_TICK_OFFSET))(this, a1);
		}

		::System::Void FHOBEDMEJAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_FHOBEDMEJAN_OFFSET))(this);
		}

		::System::Void DLEJGLFOMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_DLEJGLFOMNC_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void IJOODEBFPCB(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_IJOODEBFPCB_OFFSET))(this, a1);
		}

		::System::Void JOHHFOEIANC(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_JOHHFOEIANC_OFFSET))(this, a1);
		}

		::System::Void FCOFJNPEBEF(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_FCOFJNPEBEF_OFFSET))(this, a1);
		}

		::System::Void JMJCNNOIAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_JMJCNNOIAKK_OFFSET))(this);
		}

		::System::Void BCKPOJLNGKJ(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_BCKPOJLNGKJ_OFFSET))(this, a1, a2);
		}

		::System::Void OJAGHJAKJBO(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_OJAGHJAKJBO_OFFSET))(this, a1);
		}

		::System::Void ONONFIMKGLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_ONONFIMKGLL_OFFSET))(this);
		}

		::System::Void GNIDPHMGDNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE_GNIDPHMGDNH_OFFSET))(this);
		}

	};
