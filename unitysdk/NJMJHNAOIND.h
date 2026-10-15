#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline::VFX { class VFXAnimatorCrossFadeClip; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define NJMJHNAOIND_CTOR_OFFSET UNITYSDK_OFFSET(0xBC19690)
#define NJMJHNAOIND_FMPJPKANFNJ_OFFSET UNITYSDK_OFFSET(0xBC195F0)
#define NJMJHNAOIND_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xBC192F0)
#define NJMJHNAOIND_JOIMKOHOFJM_OFFSET UNITYSDK_OFFSET(0xBC194C0)
#define NJMJHNAOIND_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xBC19390)
#define NJMJHNAOIND_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBC19310)
#define NJMJHNAOIND_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBC19410)
#define NJMJHNAOIND_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xBC19300)

inline static constexpr unsigned int NJMJHNAOIND_TypeDefinitionIndex = 48663;

	class NJMJHNAOIND : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* _Clip_k__BackingField; // 0x10
		::System::Boolean KMCJDCACOFB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMJHNAOIND_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMJHNAOIND_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXAnimatorCrossFadeClip*))((::PBYTE)hIl2Cpp + NJMJHNAOIND_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NJMJHNAOIND_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NJMJHNAOIND_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NJMJHNAOIND_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOIMKOHOFJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJMJHNAOIND_JOIMKOHOFJM_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* FMPJPKANFNJ(::System::Object* a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJMJHNAOIND_FMPJPKANFNJ_OFFSET))(this, a1);
		}

	};
