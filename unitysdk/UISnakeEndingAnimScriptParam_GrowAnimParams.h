#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET UNITYSDK_OFFSET(0x1EFC19B0)
#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1EFC1A20)
#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC1A90)

inline static constexpr unsigned int UISnakeEndingAnimScriptParam_GrowAnimParams_TypeDefinitionIndex = 96568;

class UISnakeEndingAnimScriptParam_GrowAnimParams : public ::System::Object
{
public:
	::System::Single normalHeight; // 0x10
	::System::Single maxHeight; // 0x14
	::System::Single duration; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* curve; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS__CTOR_OFFSET))(this);
	}

	::System::Single CalValueByEvaluateCurve(::System::Single ratio)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET))(this, ratio);
	}

	::System::Single Evaluate(::System::Single ratio)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_EVALUATE_OFFSET))(this, ratio);
	}
};
