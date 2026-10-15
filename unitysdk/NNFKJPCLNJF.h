#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }
namespace System { class String; }

#define NNFKJPCLNJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA11B0)
#define NNFKJPCLNJF_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBCA0CA0)
#define NNFKJPCLNJF_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBCA0CC0)
#define NNFKJPCLNJF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xBCA0DF0)
#define NNFKJPCLNJF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBCA0E60)
#define NNFKJPCLNJF_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBCA0CB0)

inline static constexpr unsigned int NNFKJPCLNJF_TypeDefinitionIndex = 47868;

	class NNFKJPCLNJF : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::RPG::Client::MonoEmoPlayableGraph* HPFOHJJHBAJ; // 0x18
		::System::Boolean NOADJIAOJOP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NNFKJPCLNJF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

	};
