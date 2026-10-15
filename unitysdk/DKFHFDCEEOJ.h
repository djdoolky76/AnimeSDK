#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }

#define DKFHFDCEEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF87B060)
#define DKFHFDCEEOJ_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF87AF50)

inline static constexpr unsigned int DKFHFDCEEOJ_TypeDefinitionIndex = 48256;

	class DKFHFDCEEOJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* BJCBMNHOAGO; // 0x10
		::System::String* PODFJDMHFMK; // 0x18
		::System::Boolean BMANOLMNHBK; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single CCAOGMEFNLB; // 0x24
		::System::Single JIHLNPHKEEP; // 0x28
		::System::Int32 BIKLAFLEIOC; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFHFDCEEOJ_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + DKFHFDCEEOJ_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
