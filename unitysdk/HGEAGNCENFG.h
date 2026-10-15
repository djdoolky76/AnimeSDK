#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGEAGNCENFG_IBHDBBFKKNP.h"
#include "unitysdk/HGEAGNCENFG_KJKFDMILFAC.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"
class HGEAGNCENFG;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define HGEAGNCENFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C94210)
#define HGEAGNCENFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C947A0)
#define HGEAGNCENFG_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15C944A0)
#define HGEAGNCENFG_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15C943C0)
#define HGEAGNCENFG_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15C94640)
#define HGEAGNCENFG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15C946C0)
#define HGEAGNCENFG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15C94550)

inline static constexpr unsigned int HGEAGNCENFG_TypeDefinitionIndex = 47734;

	class HGEAGNCENFG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* ICIMIPJLMJJ; // 0x10
		::HGEAGNCENFG_IBHDBBFKKNP PHNPJJCOPKO; // 0x18
		::HGEAGNCENFG_KJKFDMILFAC KOOMFLNHMHL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAGNCENFG_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::HGEAGNCENFG*> BPLPBPMEODA(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::HGEAGNCENFG_KJKFDMILFAC a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::HGEAGNCENFG*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::HGEAGNCENFG_KJKFDMILFAC))((::PBYTE)hIl2Cpp + HGEAGNCENFG_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HGEAGNCENFG_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HGEAGNCENFG_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HGEAGNCENFG_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HGEAGNCENFG_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HGEAGNCENFG_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

	};
