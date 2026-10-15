#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define HPPNJDAKAKO_HBIFBJENIIK_OFFSET UNITYSDK_OFFSET(0x2E809A0)
#define HPPNJDAKAKO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x2E80990)

inline static constexpr unsigned int HPPNJDAKAKO_TypeDefinitionIndex = 73326;

	struct alignas(4) HPPNJDAKAKO
	{
		::System::Int32 HEFPHPPEPJM; // 0x10
		::UnityEngine::AnimatorControllerParameterType MPDOMNOHGJK; // 0x14
		::System::Single OLJIPFOPPKP; // 0x18
		::System::Int32 BOMGKHMFMGC; // 0x18
		::System::Boolean OAOEIEDKCGL; // 0x18
		::System::Void PPEGOIODAKI(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorControllerParameter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + HPPNJDAKAKO_PPEGOIODAKI_OFFSET))(this, a1, a2);
		}

		::System::Boolean HBIFBJENIIK(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HPPNJDAKAKO_HBIFBJENIIK_OFFSET))(this, a1);
		}

	};
