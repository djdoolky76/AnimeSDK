#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShapeType.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShape_Circle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CLPEHLLCADI;

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_SAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0x62BD90)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int EndShape_TypeDefinitionIndex = 71550;

	struct alignas(4) EndShape
	{
		::MoleMole::MonoEffectContrllerModule::EndShapeType ShapeType; // 0x10
		::MoleMole::MonoEffectContrllerModule::EndShape_Circle Circle; // 0x14

		::UnityEngine::Vector3 SamplePoint(::CLPEHLLCADI* randomGenerator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::CLPEHLLCADI*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_SAMPLEPOINT_OFFSET))(this, randomGenerator);
		}
	};
}
