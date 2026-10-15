#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define IFJHFAIAGMM_AOKMJCJFKGM_OFFSET UNITYSDK_OFFSET(0x15F1D560)
#define IFJHFAIAGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1DBD0)
#define IFJHFAIAGMM_FOILLOKMKPG_OFFSET UNITYSDK_OFFSET(0x15F1D7C0)
#define IFJHFAIAGMM_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15F1D990)
#define IFJHFAIAGMM_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15F1DB20)
#define IFJHFAIAGMM_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15F1DA70)
#define IFJHFAIAGMM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15F1D160)

	class IFJHFAIAGMM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::AnimationClip* EHAGPHLMPEJ; // 0x10
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x18
		::UnityEngine::GameObject* KNGMBOLJFPN; // 0x20
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x28
		::System::Boolean DNFOKAPGFHA; // 0x30
		::System::Boolean NINHNNILLLF; // 0x31
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34
		::System::Double NPINECOCALC; // 0x40
		::System::Single GJDEGANOCCO; // 0x48
		::System::Single ELCCJDOLGNG; // 0x4C
		// static const ::System::Object HPJADEGEGDB; // 0x0
		// static const ::System::Object BBAINMDMALF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void AOKMJCJFKGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_AOKMJCJFKGM_OFFSET))(this);
		}

		::System::Void FOILLOKMKPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_FOILLOKMKPG_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IFJHFAIAGMM_ONGRAPHSTOP_OFFSET))(this, a1);
		}

	};
