#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MONOEFFECTPARTICLEGUIDELINE_GUIDELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xEB3B970)

inline static constexpr unsigned int MonoEffectParticleGuideLine_GuideLineData_TypeDefinitionIndex = 91135;

class MonoEffectParticleGuideLine_GuideLineData : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* segments; // 0x10
	::System::Single sumLength; // 0x18

	::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* testGuideLines)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_GUIDELINEDATA__CTOR_OFFSET))(this, testGuideLines);
	}
};
