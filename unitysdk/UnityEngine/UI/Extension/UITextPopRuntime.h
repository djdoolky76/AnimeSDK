#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class IUITextPopRuntimeHost; }
namespace UnityEngine::UI::Extension { class IUITextTypewriterBindingSource; }
namespace UnityEngine::UI::Extension { class UITextTypewriterBinding; }
namespace UnityEngine::UI::Extension { class UITextTypewriterPlayer; }

#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ACQUIRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C689940)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_APPLYMESH_OFFSET UNITYSDK_OFFSET(0x1C689240)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_APPLYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1C6897B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1C688CE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_FINISHPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1C688730)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C688220)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1C688240)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6882A0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_INVALIDATEBINDING_OFFSET UNITYSDK_OFFSET(0x1C6885D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C688ED0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C688D60)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PLAYBACKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C689A50)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PLAY_OFFSET UNITYSDK_OFFSET(0x1C6882C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PREPARESTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C688620)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_RELEASESOURCE_OFFSET UNITYSDK_OFFSET(0x1C689130)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_RESTOREOBJECTS_OFFSET UNITYSDK_OFFSET(0x1C688580)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C688C80)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_STARTPLAYBACKIFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1C688980)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_STOPPLAYBACKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C688FA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6880B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextPopRuntime_TypeDefinitionIndex = 54771;

	class UITextPopRuntime : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* _playbackCoroutine; // 0x10
		::UnityEngine::UI::Extension::IUITextPopRuntimeHost* _host; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* _outputVertices; // 0x20
		::UnityEngine::UI::Extension::UITextTypewriterBinding* _binding; // 0x28
		::UnityEngine::MonoBehaviour* _owner; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* _sourceVertices; // 0x38
		::UnityEngine::UI::Extension::IUITextTypewriterBindingSource* _source; // 0x40
		::UnityEngine::UI::Extension::UITextTypewriterPlayer* _player; // 0x48
		::System::Int32 _bindingStepRevision; // 0x50
		::System::Int32 _bindingTopologyKey; // 0x54
		::System::Boolean _sourceAcquired; // 0x58
		::System::Boolean _bindingValid; // 0x59
		::System::Byte _padding0[0x2];
		::System::Int32 _bindingFinalQuadCount; // 0x5C

		::System::Void _ctor(::UnityEngine::MonoBehaviour* owner, ::UnityEngine::UI::Extension::IUITextPopRuntimeHost* host, ::UnityEngine::UI::Extension::IUITextTypewriterBindingSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::UnityEngine::UI::Extension::IUITextPopRuntimeHost*, ::UnityEngine::UI::Extension::IUITextTypewriterBindingSource*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME__CTOR_OFFSET))(this, owner, host, source);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Void Play(::System::Single maxDurationSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PLAY_OFFSET))(this, maxDurationSeconds);
		}

		::System::Void SetCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_SETCOMPLETED_OFFSET))(this);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_COMPLETE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplyMesh(::UnityEngine::UI::VertexHelper* vertexHelper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_APPLYMESH_OFFSET))(this, vertexHelper);
		}

		::System::Void ApplyObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_APPLYOBJECTS_OFFSET))(this);
		}

		::System::Void StartPlaybackIfPossible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_STARTPLAYBACKIFPOSSIBLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlaybackCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PLAYBACKCOROUTINE_OFFSET))(this);
		}

		::System::Void FinishPlayback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_FINISHPLAYBACK_OFFSET))(this);
		}

		::System::Void RestoreObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_RESTOREOBJECTS_OFFSET))(this);
		}

		::System::Int32 PrepareStepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_PREPARESTEPCOUNT_OFFSET))(this);
		}

		::System::Void InvalidateBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_INVALIDATEBINDING_OFFSET))(this);
		}

		::System::Void AcquireSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_ACQUIRESOURCE_OFFSET))(this);
		}

		::System::Void ReleaseSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_RELEASESOURCE_OFFSET))(this);
		}

		::System::Void StopPlaybackCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRUNTIME_STOPPLAYBACKCOROUTINE_OFFSET))(this);
		}
	};
}
