#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ABC_CUSTOMRENDERPIPELINE_REFLECTIONPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x27C5260)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ReflectionPlane_TypeDefinitionIndex = 16667;

	class ReflectionPlane : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion planeRotation; // 0x10
		::UnityEngine::Vector3 planeLocation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_REFLECTIONPLANE__CTOR_OFFSET))(this);
		}
	};
}
