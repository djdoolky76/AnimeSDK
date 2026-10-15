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

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8ACFF0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DCBHFMPFOMH_OFFSET UNITYSDK_OFFSET(0xE8ACCD0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DNIHFNGCPMH_OFFSET UNITYSDK_OFFSET(0xE8AC780)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8AC3B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GMANNLOIAML_OFFSET UNITYSDK_OFFSET(0xE8ACE40)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GPHGCBMKEPD_OFFSET UNITYSDK_OFFSET(0xE8ACAF0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_NLCNPLKLNEO_OFFSET UNITYSDK_OFFSET(0xE8ACB50)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8AC3D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8AC3C0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyBehaviour_TypeDefinitionIndex = 48804;

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

		static ::System::Void GPHGCBMKEPD(::UnityEngine::GameObject* a1, ::RPG::Client::MonoFullBodyIK* a2, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_GPHGCBMKEPD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DNIHFNGCPMH(::UnityEngine::GameObject* a1, ::RPG::Client::MonoFullBodyIK* a2, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::MonoFullBodyIK*, ::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYBEHAVIOUR_DNIHFNGCPMH_OFFSET))(a1, a2, a3, a4);
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
