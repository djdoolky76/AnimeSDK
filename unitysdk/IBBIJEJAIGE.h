#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CameraData; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }

#define IBBIJEJAIGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2AB90)
#define IBBIJEJAIGE_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0x15E2AAE0)
#define IBBIJEJAIGE_HNJEPKLPIDH_OFFSET UNITYSDK_OFFSET(0x15E2A100)
#define IBBIJEJAIGE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15E2A580)
#define IBBIJEJAIGE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15E2AA50)
#define IBBIJEJAIGE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15E2A860)
#define IBBIJEJAIGE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15E2A050)

inline static constexpr unsigned int IBBIJEJAIGE_TypeDefinitionIndex = 48445;

	class IBBIJEJAIGE : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::UnityEngine::Animation* KECNBLFGCAL; // 0x18
		::RPGTools::Timeline::CameraData* IJDAJGKLAKH; // 0x20
		::UnityEngine::AnimationClip* EHAGPHLMPEJ; // 0x28
		::UnityEngine::Camera* FGAEINFODPA; // 0x30
		::System::Single IPOMOEDEBGI; // 0x38
		::System::Single PFECIOFGLKM; // 0x3C
		::System::Single IGHOFMLBICF; // 0x40
		::System::Byte _padding0[0x4];
		::System::Double LLICGDGPMJL; // 0x48
		::System::Double EPOLJCOBFFC; // 0x50
		::System::Single MFIKOOOBMFL; // 0x58
		::System::Boolean DACMFGDHIMN; // 0x5C
		// static const ::System::Object PNIJINJNLOI; // 0x0
		// static const ::System::Object ABJLMHCJJPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void HNJEPKLPIDH(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IBBIJEJAIGE_HNJEPKLPIDH_OFFSET))(this, a1);
		}

	};
