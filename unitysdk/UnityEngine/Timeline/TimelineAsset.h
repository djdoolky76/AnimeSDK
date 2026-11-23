#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/TimelineAsset_AF818431D193AAA4.h"
#include "unitysdk/BC8642FD702CE6CC.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/B98D7A2DC3621144.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

class F85D883F5D6BA0DA;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class MarkerTrack; }
namespace UnityEngine::Timeline { class TimelineAsset_EditorSettings; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x40DA7F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x40DAA30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET UNITYSDK_OFFSET(0x40DAAD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEITEMSDURATION_OFFSET UNITYSDK_OFFSET(0x40DAE70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET UNITYSDK_OFFSET(0x40DB0D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x40DB1E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x40DB3D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0x40DB720)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x40DBA30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0x40DBB90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET UNITYSDK_OFFSET(0x40DBCF0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x40DC390)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET UNITYSDK_OFFSET(0x40DC5E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET UNITYSDK_OFFSET(0x40DC590)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET UNITYSDK_OFFSET(0x40DC660)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET UNITYSDK_OFFSET(0x40DC600)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET UNITYSDK_OFFSET(0x40DC680)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x40DD320)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x16A7BD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x40DD4E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x40DD5B0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET UNITYSDK_OFFSET(0x40DD6C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET UNITYSDK_OFFSET(0x18CFCA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x40DD860)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x40DD830)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x40DD8E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x40DC730)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x40DC780)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x40DC980)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0x40DC9C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0x16A7C90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0x40DD930)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x40DCB40)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2769960)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEFIXEDDURATIONWITHITEMSDURATION_OFFSET UNITYSDK_OFFSET(0x40DCB90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x40DCC30)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x40DCE20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x40DD260)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x40DD0E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_TypeDefinitionIndex = 20202;

	class TimelineAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Int32 m_Version; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Tracks; // 0x20
		::System::Double m_FixedDuration; // 0x28
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* m_CacheOutputTracks; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheRootTracks; // 0x38
		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* m_CacheFlattenedTracks; // 0x40
		::UnityEngine::Timeline::TimelineAsset_EditorSettings* m_EditorSettings; // 0x48
		::UnityEngine::Timeline::TimelineAsset_AF818431D193AAA4 m_DurationMode; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::Timeline::MarkerTrack* m_MarkerTrack; // 0x58

		::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FA1EDF0909FD0302::B98D7A2DC3621144>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET))(this);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* get_flattenedTracks()
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* get_trackObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET))(this);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* B286159CFDC40A9F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET))(this, B286159CFDC40A9F);
		}

		::System::Void DeleteRecordedAnimation(::UnityEngine::Timeline::TimelineClip* AD43DEAB8304398A)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET))(this, AD43DEAB8304398A);
		}

		::UnityEngine::Timeline::TimelineAsset_AF818431D193AAA4 get_durationMode()
		{
			return ((::UnityEngine::Timeline::TimelineAsset_AF818431D193AAA4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 CreatePlayable(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* AD1247287D2D9217)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET))(this, FF3BC15A84BE456D, AD1247287D2D9217);
		}

		::UnityEngine::Timeline::TimelineAsset_EditorSettings* get_editorSettings()
		{
			return ((::UnityEngine::Timeline::TimelineAsset_EditorSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetRootTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET))(this);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 get_clipCaps()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* GetOutputTrack(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void set_durationMode(::UnityEngine::Timeline::TimelineAsset_AF818431D193AAA4 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset_AF818431D193AAA4))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::BC8642FD702CE6CC CalculateItemsDuration()
		{
			return ((::BC8642FD702CE6CC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEITEMSDURATION_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8, ::F85D883F5D6BA0DA* A9BAF281B87EFA01)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::F85D883F5D6BA0DA*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET))(this, A9F0E1077186BAC8, A9BAF281B87EFA01);
		}

		::System::Void __internalAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET))(this);
		}

		static ::System::Void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*& B8A5BB1C38EC29A3)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET))(B630861FBF48C2ED, B8A5BB1C38EC29A3);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrack(::System::Type* A288CB28FC2A6DA3, ::UnityEngine::Timeline::TrackAsset* EFE497ABF6BF98D8, ::System::String* F79B4D487F303AB2)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(this, A288CB28FC2A6DA3, EFE497ABF6BF98D8, F79B4D487F303AB2);
		}

		::System::Void UpdateOutputTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET))(this);
		}

		::System::Int32 get_outputTrackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET))(this);
		}

		::System::Boolean DeleteTrack(::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET))(this, B630861FBF48C2ED);
		}

		::UnityEngine::Timeline::TrackAsset* GetRootTrack(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET))(this, B48C66E5FB2449C6);
		}

		static ::System::Double GetValidFrameRate(::System::Double A944836D0C9F23CF)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET))(A944836D0C9F23CF);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetOutputTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET))(this);
		}

		::System::Boolean DeleteClip(::UnityEngine::Timeline::TimelineClip* AD43DEAB8304398A)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET))(this, AD43DEAB8304398A);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void set_fixedDuration(::System::Double E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Timeline::TrackAsset* AllocateTrack(::UnityEngine::Timeline::TrackAsset* BE5F24B161A11998, ::System::String* BE9815EB6CBDA405, ::System::Type* BAFB11FDE4FBD0B7)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET))(this, BE5F24B161A11998, BE9815EB6CBDA405, BAFB11FDE4FBD0B7);
		}

		::System::Void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET))(this, B630861FBF48C2ED);
		}

		::System::Void UpdateFixedDurationWithItemsDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEFIXEDDURATIONWITHITEMSDURATION_OFFSET))(this);
		}

		::System::Void RemoveTrack(::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET))(this, B630861FBF48C2ED);
		}

		::System::Void CreateMarkerTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET))(this);
		}

		::System::Int32 get_rootTrackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET__CTOR_OFFSET))(this);
		}

		::System::Double get_fixedDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::MarkerTrack* get_markerTrack()
		{
			return ((::UnityEngine::Timeline::MarkerTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET))(this);
		}

		::System::Void DeleteRecordedAnimation_1(::UnityEngine::Timeline::TrackAsset* B630861FBF48C2ED)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_1_OFFSET))(this, B630861FBF48C2ED);
		}

		::System::Void UpdateRootTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET))(this);
		}
	};
}
