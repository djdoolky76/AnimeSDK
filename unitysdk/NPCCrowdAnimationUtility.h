#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

#define NPCCROWDANIMATIONUTILITY_RESIZETRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0xB2F4860)
#define NPCCROWDANIMATIONUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F49F0)

inline static constexpr unsigned int NPCCrowdAnimationUtility_TypeDefinitionIndex = 91813;

class NPCCrowdAnimationUtility : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDANIMATIONUTILITY__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Jobs::TransformAccessArray ResizeTransformAccessArray(::UnityEngine::Jobs::TransformAccessArray previousArray, ::System::Int32 newSize)
	{
		return ((::UnityEngine::Jobs::TransformAccessArray(*)(::UnityEngine::Jobs::TransformAccessArray, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWDANIMATIONUTILITY_RESIZETRANSFORMACCESSARRAY_OFFSET))(previousArray, newSize);
	}
};
