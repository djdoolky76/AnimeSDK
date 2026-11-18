#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"

namespace UnityEngine { class AnimationCurve; }

#define JOLGAOKBFHH_GOECHCHDKCH_OFFSET UNITYSDK_OFFSET(0x7AA4A0)

inline static constexpr unsigned int JOLGAOKBFHH_TypeDefinitionIndex = 65287;

struct alignas(8) JOLGAOKBFHH
{
	::System::Single CIJICAGMIOH; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* PKJPMBOKHPH; // 0x18
	::System::Boolean GPFNCKCJKIB; // 0x20
	::System::Byte _padding1[0x7];
	::UnityEngine::AnimationCurve* BBKCIJGHINL; // 0x28
	::System::Single CJLKFOGFONE; // 0x30

	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom GOECHCHDKCH()
	{
		return ((::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGAOKBFHH_GOECHCHDKCH_OFFSET))(this);
	}
};
