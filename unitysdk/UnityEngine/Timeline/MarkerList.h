#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class E9BF0C87287F5F69;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x40D70E0)
#define UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0x40D7170)
#define UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x40D73C0)
#define UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x40D7420)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET UNITYSDK_OFFSET(0x40D7750)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x40D7A80)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x40D7AD0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET UNITYSDK_OFFSET(0x40D7750)
#define UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x40D7770)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x40D7900)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x40D7790)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x38C12E0)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_TIMELINE_MARKERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x40D79B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerList_TypeDefinitionIndex = 20247;

	struct alignas(8) MarkerList
	{
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Objects; // 0x10
		::System::Collections::Generic::List_1<::E9BF0C87287F5F69*>* m_Cache; // 0x18
		::System::Boolean m_CacheDirty; // 0x20
		::System::Boolean m_HasNotifications; // 0x21

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Remove(::E9BF0C87287F5F69* EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::E9BF0C87287F5F69*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Collections::Generic::List_1<::E9BF0C87287F5F69*>* get_markers()
		{
			return ((::System::Collections::Generic::List_1<::E9BF0C87287F5F69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET))(this);
		}

		::E9BF0C87287F5F69* CreateMarker(::System::Type* A288CB28FC2A6DA3, ::System::Double FF0A37159A523E06, ::UnityEngine::Timeline::TrackAsset* B31D2A0991A78809)
		{
			return ((::E9BF0C87287F5F69*(*)(::PVOID, ::System::Type*, ::System::Double, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET))(this, A288CB28FC2A6DA3, FF0A37159A523E06, B31D2A0991A78809);
		}

		::System::Void _ctor(::System::Int32 B74B2FACA9F61AFB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST__CTOR_OFFSET))(this, B74B2FACA9F61AFB);
		}

		::System::Void Add(::UnityEngine::ScriptableObject* EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Boolean Remove_1(::UnityEngine::ScriptableObject* EC35F88C87A83BEB, ::UnityEngine::Timeline::TimelineAsset* FD7F20D8F1AA4E85, ::UnityEngine::Playables::PlayableAsset* B4855A255F4A1DB4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_1_OFFSET))(this, EC35F88C87A83BEB, FD7F20D8F1AA4E85, B4855A255F4A1DB4);
		}

		::E9BF0C87287F5F69* get_Item(::System::Int32 AA292D26F1CE96C4)
		{
			return ((::E9BF0C87287F5F69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET))(this, AA292D26F1CE96C4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* GetRawMarkerList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET))(this);
		}

		::System::Void BuildCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::E9BF0C87287F5F69*>* GetMarkers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::E9BF0C87287F5F69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET))(this);
		}

		::System::Boolean HasNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET))(this);
		}
	};
}
