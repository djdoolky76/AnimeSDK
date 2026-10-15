#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MFFGCMFIFNA;
namespace System { class Object; }

#define MNHIJBBMFBE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA09670)
#define MNHIJBBMFBE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBA09030)
#define MNHIJBBMFBE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBA09190)

	class MNHIJBBMFBE : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MFFGCMFIFNA* ENNACIEALGC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHIJBBMFBE_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MNHIJBBMFBE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MNHIJBBMFBE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
