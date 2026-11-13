#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoFullBodyIK; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyChainData; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyClip; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB130)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DCBHFMPFOMH_OFFSET UNITYSDK_OFFSET(0x1E3DAE10)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DNIHFNGCPMH_OFFSET UNITYSDK_OFFSET(0x1E3DA860)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E3DA400)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GMANNLOIAML_OFFSET UNITYSDK_OFFSET(0x1E3DAF80)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GPHGCBMKEPD_OFFSET UNITYSDK_OFFSET(0x1E3DAC20)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_NLCNPLKLNEO_OFFSET UNITYSDK_OFFSET(0x1E3DAC90)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1E3DA420)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1E3DA410)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyBehaviour_TypeDefinitionIndex = 49850;

	class BPCharacterFullBodyBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		static ::System::Void GPHGCBMKEPD(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::MonoFullBodyIK* a3, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GPHGCBMKEPD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DNIHFNGCPMH(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::MonoFullBodyIK* a3, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DNIHFNGCPMH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::AnimationCurve* DCBHFMPFOMH(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DCBHFMPFOMH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* GMANNLOIAML(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GMANNLOIAML_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* NLCNPLKLNEO(::UnityEngine::GameObject* a1, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_NLCNPLKLNEO_OFFSET))(a1, a2);
		}

	};
}
