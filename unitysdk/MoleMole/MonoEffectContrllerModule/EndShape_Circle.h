#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CLPEHLLCADI;

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_CIRCLE_SAMPLE_OFFSET UNITYSDK_OFFSET(0x770040)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int EndShape_Circle_TypeDefinitionIndex = 83072;

	struct alignas(4) EndShape_Circle
	{
		// static const ::System::Int32 RadiusRandomPersion = 0x2710; // 0x0
		// static const ::System::Int32 SqrRadiusRandomPersion = 0x5F5E100; // 0x0
		::System::Single Radius; // 0x10
		::UnityEngine::Quaternion Rotate; // 0x14
		::System::Boolean OnlyEndge; // 0x24

		::UnityEngine::Vector3 Sample(::CLPEHLLCADI* randomGenerator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::CLPEHLLCADI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_CIRCLE_SAMPLE_OFFSET))(this, randomGenerator);
		}
	};
}
