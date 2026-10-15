#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DGDCNMMBMKA;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPGTools { class MonoTimelineEffect; }
namespace RPGTools::Timeline::VFX { class MiniEmotionClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_AFGHLIMKEAC_OFFSET UNITYSDK_OFFSET(0xE950C10)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_CONECKKGNJM_OFFSET UNITYSDK_OFFSET(0xE951C20)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE952670)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE9506B0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_HLNLBFKMBDC_OFFSET UNITYSDK_OFFSET(0xE951CC0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_JGJFEPPABOP_OFFSET UNITYSDK_OFFSET(0xE950880)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_JKGFAGBNLAC_OFFSET UNITYSDK_OFFSET(0xE951D90)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MGAJCJPEKGL_OFFSET UNITYSDK_OFFSET(0xE952500)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MKCIKFOPFJB_OFFSET UNITYSDK_OFFSET(0xE950E10)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MKLPNKIGNBP_OFFSET UNITYSDK_OFFSET(0xE9523F0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_NOELJCEPAPE_OFFSET UNITYSDK_OFFSET(0xE950A40)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE951930)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE9506D0)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PDDANNNEDAL_OFFSET UNITYSDK_OFFSET(0xE952200)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PKCJHGFBCAB_OFFSET UNITYSDK_OFFSET(0xE952300)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE951A00)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE9506C0)

namespace RPGTools::Timeline::VFX
{
	class MiniEmotionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::MiniEmotionClip* _Clip_k__BackingField; // 0x10
		::UnityEngine::Object* _PrefabAsset; // 0x18
		::RPGTools::MonoTimelineEffect* _TimelineEffect; // 0x20
		::RPG::Client::MonoEffect* _MonoEffect; // 0x28
		::RPG::Client::MonoEffectPluginMiniEmotion* _MiniEmoPlugin; // 0x30
		::UnityEngine::Transform* _TimelineOrigin; // 0x38
		::System::Boolean _MiniEmoStopped; // 0x40
		::System::Byte _padding0[0x7];
		::DGDCNMMBMKA* _EffectMgr; // 0x48
		::System::Single _playableTime; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::MiniEmotionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::MiniEmotionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::MiniEmotionClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::MiniEmotionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::DGDCNMMBMKA* JGJFEPPABOP()
		{
			return ((::DGDCNMMBMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_JGJFEPPABOP_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AFGHLIMKEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_AFGHLIMKEAC_OFFSET))(this);
		}

		::System::Boolean NOELJCEPAPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_NOELJCEPAPE_OFFSET))(this);
		}

		::UnityEngine::GameObject* CONECKKGNJM(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_CONECKKGNJM_OFFSET))(this, a1);
		}

		::System::Void HLNLBFKMBDC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_HLNLBFKMBDC_OFFSET))(this, a1);
		}

		::System::Boolean MGAJCJPEKGL(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MGAJCJPEKGL_OFFSET))(this, a1);
		}

		::System::Void PDDANNNEDAL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PDDANNNEDAL_OFFSET))(this, a1);
		}

		::System::Void JKGFAGBNLAC(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_JKGFAGBNLAC_OFFSET))(this, a1, a2);
		}

		::System::Void PKCJHGFBCAB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_PKCJHGFBCAB_OFFSET))(this, a1);
		}

		::System::Void MKLPNKIGNBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MKLPNKIGNBP_OFFSET))(this);
		}

		::System::Void MKCIKFOPFJB(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONBEHAVIOUR_MKCIKFOPFJB_OFFSET))(this, a1);
		}

	};
}
