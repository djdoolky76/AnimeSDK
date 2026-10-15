#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }

#define GGGNJBLJDFC_CTOR_OFFSET UNITYSDK_OFFSET(0x159F8BF0)
#define GGGNJBLJDFC_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x159F8820)
#define GGGNJBLJDFC_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x159F8840)
#define GGGNJBLJDFC_JJJOBHLJPAK_OFFSET UNITYSDK_OFFSET(0x159F8900)
#define GGGNJBLJDFC_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x159F8860)
#define GGGNJBLJDFC_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x159F8A70)
#define GGGNJBLJDFC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x159F8B10)
#define GGGNJBLJDFC_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x159F8830)
#define GGGNJBLJDFC_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x159F8850)

inline static constexpr unsigned int GGGNJBLJDFC_TypeDefinitionIndex = 48858;

	class GGGNJBLJDFC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _EventName_k__BackingField; // 0x10
		::System::Double GLHFPIGMBLN; // 0x18
		::System::Boolean _IsLoop_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void set_EventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_SET_EVENTNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_GET_ISLOOP_OFFSET))(this);
		}

		::System::Void set_IsLoop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_SET_ISLOOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JJJOBHLJPAK(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GGGNJBLJDFC_JJJOBHLJPAK_OFFSET))(this, a1);
		}

	};
