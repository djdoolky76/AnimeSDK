#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BlinkPhase;
class NumberBlinkInfos;
namespace UnityEngine { class AnimationCurve; }

#define NUMBERBLINKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FDF60)

inline static constexpr unsigned int NumberBlinkConfig_TypeDefinitionIndex = 53446;

class NumberBlinkConfig : public ::System::Object
{
public:
	::BlinkPhase* SlowPhase; // 0x10
	::BlinkPhase* FastPhase; // 0x18
	::UnityEngine::AnimationCurve* Curve; // 0x20
	::NumberBlinkInfos* LeftInfos; // 0x28
	::NumberBlinkInfos* RightInfos; // 0x30
	::System::Single Duration; // 0x38
	::System::Single BlinkFrequencyThreshold; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NUMBERBLINKCONFIG__CTOR_OFFSET))(this);
	}
};
