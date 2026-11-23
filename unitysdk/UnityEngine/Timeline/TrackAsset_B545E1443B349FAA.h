#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class E9BF0C87287F5F69;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TRACKASSET_B545E1443B349FAA_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x40E8A00)
#define UNITYENGINE_TIMELINE_TRACKASSET_B545E1443B349FAA_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x40E8AD0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_B545E1443B349FAA_TypeDefinitionIndex = 20254;

	struct alignas(8) TrackAsset_B545E1443B349FAA
	{
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* F8C4983129BB783F; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* F3C11B7781E1F92E; // 0x18
		::System::Collections::Generic::List_1<::E9BF0C87287F5F69*>* A09D6769A31DD2EE; // 0x20

		/*
		static ::UnityEngine::Timeline::TrackAsset_B545E1443B349FAA BD9CD726F874B523()
		{
			return ((::UnityEngine::Timeline::TrackAsset_B545E1443B349FAA(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_B545E1443B349FAA_BD9CD726F874B523_OFFSET))();
		}
		*/

		::System::Void A765A1D14770A303()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_B545E1443B349FAA_A765A1D14770A303_OFFSET))(this);
		}
	};
}
