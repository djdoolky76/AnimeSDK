#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6_E11351C9324F52F6_OFFSET UNITYSDK_OFFSET(0x40E8BF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40E8C90)
#define UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_F5628F8349D4A8A6_TypeDefinitionIndex = 20255;

	class TrackAsset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::TrackAsset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::Timeline::TrackAsset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::UnityEngine::Timeline::TimelineClip*>** StaticGet_B77F7495B00BCDD5()
		{
			return (::System::ADDF5F55A85EB950<::UnityEngine::Timeline::TimelineClip*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 E11351C9324F52F6(::UnityEngine::Timeline::TimelineClip* B70234A7D4AF49C9, ::UnityEngine::Timeline::TimelineClip* BF8D3D0DD0E2721E)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_F5628F8349D4A8A6_E11351C9324F52F6_OFFSET))(this, B70234A7D4AF49C9, BF8D3D0DD0E2721E);
		}
	};
}
