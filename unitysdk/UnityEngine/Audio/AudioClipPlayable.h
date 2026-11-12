#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x20672BE0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x20672980)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x3EB9ED0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EB8910)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xEABF0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20672DB0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x20672DE0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20672DD0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET UNITYSDK_OFFSET(0x3EBA010)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x206732D0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET UNITYSDK_OFFSET(0x20673190)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET UNITYSDK_OFFSET(0x3EBA000)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x206732C0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET UNITYSDK_OFFSET(0x206730D0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET UNITYSDK_OFFSET(0x3EB9FF0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x20673000)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x3EB9FE0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioClipPlayable_TypeDefinitionIndex = 5155;

	struct alignas(4) AudioClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10
		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CTOR_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}
		*/

		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Audio::AudioClipPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Audio::AudioClipPlayable op_Explicit(::UnityEngine::Playables::Playable a1)
		{
			return ((::UnityEngine::Audio::AudioClipPlayable(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Audio::AudioClipPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Audio::AudioClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetStereoPan(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET))(this, a1);
		}

		::System::Void SetSpatialBlend(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET))(this, a1);
		}

		::System::Void Seek(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetVolumeInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetStereoPanInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetSpatialBlendInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetStartDelayInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetPauseDelayInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean InternalCreateAudioClipPlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AudioClip* a2, ::System::Boolean a3, ::UnityEngine::Playables::PlayableHandle a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
