#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TRACKASSET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A75C0)
#define UNITYENGINE_TIMELINE_TRACKASSET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A75F0)
#define UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__164_0_OFFSET UNITYSDK_OFFSET(0x1F3A7600)

namespace UnityEngine::Timeline
{
	class TrackAsset___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Timeline", "<>c")->GetStaticField(0x4D690);
		}

		static ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>** StaticGet___9__164_0()
		{
			return (::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>**)UnitySDK::FromName("UnityEngine.Timeline", "<>c")->GetStaticField(0x4D698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortClips_b__164_0(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___C__SORTCLIPS_B__164_0_OFFSET))(this, a1, a2);
		}

	};
}
