#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Audio/AudioMixerUpdateMode.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }

#define UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET UNITYSDK_OFFSET(0x1FD9CE80)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET UNITYSDK_OFFSET(0x1FD9CB80)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1FD9CB70)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1FD9CE90)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1FD9CB50)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1FD9CE50)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1FD9CE70)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0x1FD9CB60)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1FD9CE60)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FD9CE30)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1FD9CE40)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1FD9CB90)
#define UNITYENGINE_AUDIO_AUDIOMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9CB00)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixer_TypeDefinitionIndex = 17918;

	class AudioMixer : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup()
		{
			return ((::UnityEngine::Audio::AudioMixerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this);
		}

		::System::Void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET))(this, value);
		}

		::UnityEngine::Audio::AudioMixerSnapshot* FindSnapshot(::System::String* name)
		{
			return ((::UnityEngine::Audio::AudioMixerSnapshot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Audio::AudioMixerGroup*>* FindMatchingGroups(::System::String* subPath)
		{
			return ((::Il2CppArray<::UnityEngine::Audio::AudioMixerGroup*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET))(this, subPath);
		}

		::System::Void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET))(this, snapshot, timeToReach);
		}

		::System::Void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET))(this, snapshot, timeToReach);
		}

		::System::Void TransitionToSnapshots(::Il2CppArray<::UnityEngine::Audio::AudioMixerSnapshot*>* snapshots, ::Il2CppArray<::System::Single>* weights, ::System::Single timeToReach)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Audio::AudioMixerSnapshot*>*, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET))(this, snapshots, weights, timeToReach);
		}

		::UnityEngine::Audio::AudioMixerUpdateMode get_updateMode()
		{
			return ((::UnityEngine::Audio::AudioMixerUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Audio::AudioMixerUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Boolean SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Boolean ClearFloat(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET))(this, name);
		}

		::System::Boolean GetFloat(::System::String* name, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET))(this, name, value);
		}
	};
}
