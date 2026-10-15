#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKKFJLFMPFK;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define OKKFJLFMPFK___C__DISPLAYCLASS4_2_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE16D0)
#define OKKFJLFMPFK___C__DISPLAYCLASS4_2__ONTASKBEGIN_B__2_OFFSET UNITYSDK_OFFSET(0xBEE8DA0)

	template <typename T1, typename T2>
	class OKKFJLFMPFK___c__DisplayClass4_2 : public ::System::Object
	{
	public:
		::OKKFJLFMPFK* __4__this; // 0x10
		::UnityEngine::Timeline::TimelineAsset* timelineAsset; // 0x18
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_2_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_2__ONTASKBEGIN_B__2_OFFSET))(this, a1, a2);
		}

	};
