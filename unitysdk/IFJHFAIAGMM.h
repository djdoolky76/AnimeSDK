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

#define IFJHFAIAGMM_AOKMJCJFKGM_OFFSET UNITYSDK_OFFSET(0x16E8C660)
#define IFJHFAIAGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x16E8CD00)
#define IFJHFAIAGMM_FOILLOKMKPG_OFFSET UNITYSDK_OFFSET(0x16E8C8F0)
#define IFJHFAIAGMM_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x16E8CAC0)
#define IFJHFAIAGMM_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16E8CC50)
#define IFJHFAIAGMM_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16E8CBA0)
#define IFJHFAIAGMM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16E8C240)

inline static constexpr unsigned int IFJHFAIAGMM_TypeDefinitionIndex = 49088;

	class IFJHFAIAGMM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x10
		::UnityEngine::AnimationClip* EHAGPHLMPEJ; // 0x18
		::UnityEngine::GameObject* KNGMBOLJFPN; // 0x20
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x28
		::System::Single ELCCJDOLGNG; // 0x30
		::System::Single GJDEGANOCCO; // 0x34
		::System::Double NPINECOCALC; // 0x38
		::System::Boolean DNFOKAPGFHA; // 0x40
		::System::Boolean NINHNNILLLF; // 0x41
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x44
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
