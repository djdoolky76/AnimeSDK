#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTrack.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class BaseEmoTimelineTrackV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_AADMKJCLFLO_OFFSET UNITYSDK_OFFSET(0xE8DA840)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ADIFBNAHKBF_OFFSET UNITYSDK_OFFSET(0xE8DA640)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_AKLALPLIFIK_OFFSET UNITYSDK_OFFSET(0xE8DBF00)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CCAKILLMFNP_OFFSET UNITYSDK_OFFSET(0xE8DA570)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0xE8DA720)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xE8DB800)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8DAAE0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CTOR_OFFSET UNITYSDK_OFFSET(0xE8DD7B0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xE8DA4E0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xE8DA530)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_MONOEMOPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xE8DA3F0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xE8DA600)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_TRACKTYPE_OFFSET UNITYSDK_OFFSET(0xE8DA520)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xE8DA500)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xE8DB5C0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_HFJKPIEJHFC_OFFSET UNITYSDK_OFFSET(0xE8DD750)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_JCGCEENJMHN_1_OFFSET UNITYSDK_OFFSET(0xE8DC990)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_JCGCEENJMHN_OFFSET UNITYSDK_OFFSET(0xE8DC600)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_NIFEFPDKLMM_OFFSET UNITYSDK_OFFSET(0xE8DA5C0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE8DB6C0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0xE8DA4F0)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xE8DA510)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET UNITYSDK_OFFSET(0xE8DBE00)
#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0xE8DBEC0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int BaseEmoTimelineTrackV2_TypeDefinitionIndex = 48744;

	class BaseEmoTimelineTrackV2 : public ::RPGTools::Timeline::Emotion::BaseEmoTrack
	{
	public:
		::UnityEngine::Animations::AnimationLayerMixerPlayable _ExclusiveFinalAnimLayerMixer; // 0xC8
		::RPG::Client::MonoEmoPlayableGraph* _MonoEmoPlayableGraph; // 0xD8
		::UnityEngine::AnimationBlendMode _BlendMode; // 0xE0
		::System::Single _Weight; // 0xE4
		// static const ::System::String* BrowTrackName; // 0x0
		// static const ::System::String* EyeTrackName; // 0x0
		// static const ::System::String* MouthTrackName; // 0x0
		// static const ::System::String* EyeCtrlTrackName; // 0x0
		// static const ::System::String* WwiseEventTrackName; // 0x0
		// static const ::System::String* FaceBlusherTrackName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoEmoPlayableGraph* get_MonoEmoPlayableGraph()
		{
			return ((::RPG::Client::MonoEmoPlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_MONOEMOPLAYABLEGRAPH_OFFSET))(this);
		}

		::UnityEngine::AnimationBlendMode get_BlendMode()
		{
			return ((::UnityEngine::AnimationBlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_BlendMode(::UnityEngine::AnimationBlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationBlendMode))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_BLENDMODE_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET_WEIGHT_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::Emotion::EmoTrackType get_TrackType()
		{
			return ((::RPGTools::Timeline::Emotion::EmoTrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_TRACKTYPE_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_DefaultClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_DEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* CCAKILLMFNP(::System::Int32 a1)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CCAKILLMFNP_OFFSET))(this, a1);
		}

		::System::Boolean NIFEFPDKLMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_NIFEFPDKLMM_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Positions()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* ADIFBNAHKBF(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ADIFBNAHKBF_OFFSET))(this, a1);
		}

		::System::Void CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_CREATELAYERMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UnityEngine_Timeline_ILayerable_ShowDefaultLayeredTrackCommands()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET))(this);
		}

		::System::Void AKLALPLIFIK(::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2* a1, ::UnityEngine::Animations::AnimationMixerPlayable a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::BaseEmoTimelineTrackV2*, ::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_AKLALPLIFIK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable JCGCEENJMHN(::UnityEngine::Timeline::TimelineClip* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_JCGCEENJMHN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable JCGCEENJMHN_1(::UnityEngine::Timeline::TimelineClip* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_JCGCEENJMHN_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationClip* HFJKPIEJHFC(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_HFJKPIEJHFC_OFFSET))(this, a1);
		}

		::System::Void AADMKJCLFLO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_AADMKJCLFLO_OFFSET))(this, a1);
		}

		::UnityEngine::Animations::AnimationLayerMixerPlayable get__FinalAnimLayerMixer()
		{
			return ((::UnityEngine::Animations::AnimationLayerMixerPlayable(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_GET__FINALANIMLAYERMIXER_OFFSET))(this);
		}

		::System::Void set__FinalAnimLayerMixer(::UnityEngine::Animations::AnimationLayerMixerPlayable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTIMELINETRACKV2_SET__FINALANIMLAYERMIXER_OFFSET))(this, a1);
		}

	};
}
