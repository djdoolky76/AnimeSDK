#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OGBPMPBLDNK;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class GuijiDiceRollClip; }
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AALDGLIFGIC_OFFSET UNITYSDK_OFFSET(0xE8FF130)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AGPEAOPALBI_OFFSET UNITYSDK_OFFSET(0xE8FF310)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AIBHFFGNAJA_OFFSET UNITYSDK_OFFSET(0xE8FE4A0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_BCBAGPEIBDG_OFFSET UNITYSDK_OFFSET(0xE8FF360)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xE8FEE60)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FF860)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8FE160)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GFMPKAGIMBI_OFFSET UNITYSDK_OFFSET(0xE8FEA50)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0xE8FF4A0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_HJIJNEFPEEN_OFFSET UNITYSDK_OFFSET(0xE8FE770)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_JIEEJKKNNNP_OFFSET UNITYSDK_OFFSET(0xE8FE580)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_OJBCPAFAMGP_OFFSET UNITYSDK_OFFSET(0xE8FEE10)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8FECD0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8FE180)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE8FF200)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PJBABIGBIFM_OFFSET UNITYSDK_OFFSET(0xE8FE620)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8FEF10)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8FE170)

namespace RPGTools::Timeline
{
	class GuijiDiceRollBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::GuijiDiceRollClip* _Clip_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::UnityEngine::Transform* _RootTrans; // 0x20
		::UnityEngine::Transform* _ArtTrans; // 0x28
		::UnityEngine::Animator* _Animator; // 0x30
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x38
		::UnityEngine::Transform* _ResultNode; // 0x40
		::OGBPMPBLDNK* _EffectController; // 0x48
		::UnityEngine::Playables::Playable _Playable; // 0x50
		::UnityEngine::Playables::FrameData _FrameData; // 0x60
		::UnityEngine::AnimationClip* _AnimationClip; // 0xA0
		::UnityEngine::Animations::AnimationClipPlayable _AnimationPlayable; // 0xA8
		::UnityEngine::Playables::PlayableGraph _AnimationGraph; // 0xB8
		::UnityEngine::Vector3 _TargetPosition; // 0xC8
		::UnityEngine::Quaternion _TargetRotation; // 0xD4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::GuijiDiceRollClip* get_Clip()
		{
			return ((::RPGTools::Timeline::GuijiDiceRollClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::GuijiDiceRollClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::GuijiDiceRollClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void AIBHFFGNAJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AIBHFFGNAJA_OFFSET))(this);
		}

		::System::Void JIEEJKKNNNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_JIEEJKKNNNP_OFFSET))(this);
		}

		::System::Void PJBABIGBIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PJBABIGBIFM_OFFSET))(this);
		}

		::System::Void HJIJNEFPEEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_HJIJNEFPEEN_OFFSET))(this);
		}

		::System::Void AALDGLIFGIC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AALDGLIFGIC_OFFSET))(this, a1);
		}

		::System::Void AGPEAOPALBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_AGPEAOPALBI_OFFSET))(this);
		}

		::System::Void BCBAGPEIBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_BCBAGPEIBDG_OFFSET))(this);
		}

		::System::Void OJBCPAFAMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_OJBCPAFAMGP_OFFSET))(this);
		}

		::System::Void GMLKMFDNNFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GMLKMFDNNFP_OFFSET))(this);
		}

		::System::Void GFMPKAGIMBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GFMPKAGIMBI_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_BNNKNIJBGPA_OFFSET))(this);
		}

	};
}
