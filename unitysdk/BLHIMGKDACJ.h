#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }

#define BLHIMGKDACJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA70070)
#define BLHIMGKDACJ_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBA6FF60)
#define BLHIMGKDACJ_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBA6FF80)
#define BLHIMGKDACJ_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBA6FF70)

inline static constexpr unsigned int BLHIMGKDACJ_TypeDefinitionIndex = 48093;

	class BLHIMGKDACJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _CharacterUniqueName_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHIMGKDACJ_CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHIMGKDACJ_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLHIMGKDACJ_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLHIMGKDACJ_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
