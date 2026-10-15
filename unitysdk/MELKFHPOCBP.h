#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class MFFGCMFIFNA;
namespace System { class Object; }

#define MELKFHPOCBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9D60)
#define MELKFHPOCBP_OCBKFFLLMKA_OFFSET UNITYSDK_OFFSET(0xB8D9AE0)
#define MELKFHPOCBP_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8D92C0)
#define MELKFHPOCBP_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8D8E20)
#define MELKFHPOCBP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8D93F0)

inline static constexpr unsigned int MELKFHPOCBP_TypeDefinitionIndex = 47902;

	class MELKFHPOCBP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MFFGCMFIFNA* ENNACIEALGC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELKFHPOCBP_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MELKFHPOCBP_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MELKFHPOCBP_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MELKFHPOCBP_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCBKFFLLMKA(::UnityEngine::Playables::Playable a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Boolean))((::PBYTE)hIl2Cpp + MELKFHPOCBP_OCBKFFLLMKA_OFFSET))(this, a1, a2);
		}

	};
