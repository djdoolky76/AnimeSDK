#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class IKKJJHHENJB;
namespace RPGTools::Timeline { class LockActorStencilClip; }

#define HCLBCGGJGBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B4C30)
#define HCLBCGGJGBK_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B7B4730)
#define HCLBCGGJGBK_KFFHPLFFPGM_OFFSET UNITYSDK_OFFSET(0x1B7B48E0)
#define HCLBCGGJGBK_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B7B4A70)
#define HCLBCGGJGBK_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B7B4750)
#define HCLBCGGJGBK_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B7B4740)

inline static constexpr unsigned int HCLBCGGJGBK_TypeDefinitionIndex = 49221;

	class HCLBCGGJGBK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LockActorStencilClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LockActorStencilClip* get_Clip()
		{
			return ((::RPGTools::Timeline::LockActorStencilClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::LockActorStencilClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LockActorStencilClip*))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::IKKJJHHENJB* KFFHPLFFPGM()
		{
			return ((::IKKJJHHENJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLBCGGJGBK_KFFHPLFFPGM_OFFSET))(this);
		}

	};
