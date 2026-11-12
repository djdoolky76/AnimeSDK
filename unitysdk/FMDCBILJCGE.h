#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define FMDCBILJCGE_CTOR_OFFSET UNITYSDK_OFFSET(0x167BE780)

inline static constexpr unsigned int FMDCBILJCGE_TypeDefinitionIndex = 77294;

	class FMDCBILJCGE : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Transform* GFFOINAIAME; // 0x10
		::UnityEngine::AnimationCurve* PIPHLJNPIAL; // 0x18
		::UnityEngine::Transform* OGOGACIALLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCBILJCGE_CTOR_OFFSET))(this);
		}

	};
