#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class TransformVersionTracker;
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define TRANSFORMVERSIONTRACKEREXTENSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F636E80)
#define TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F636D50)
#define TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET UNITYSDK_OFFSET(0x1F636580)

	class TransformVersionTrackerExtension : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__ToRemoveTrackerList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "TransformVersionTrackerExtension")->GetStaticField(0x11CC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>** StaticGet__TrackerDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference*>**)UnitySDK::FromName("", "TransformVersionTrackerExtension")->GetStaticField(0x11CC8);
		}

		static ::System::Int32* StaticGet__AllocTrackerCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("", "TransformVersionTrackerExtension")->GetStaticField(0x3B20);
		}

		// static const ::System::Object RemoveInvalidTrackerInterval; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_CCTOR_OFFSET))();
		}

		static ::TransformVersionTracker* GetTracker(::UnityEngine::Transform* a1)
		{
			return ((::TransformVersionTracker*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET))(a1);
		}

		static ::System::Boolean CheckRecentlyChanged(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET))(a1);
		}

	};
