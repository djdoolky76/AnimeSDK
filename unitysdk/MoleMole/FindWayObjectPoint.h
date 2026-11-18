#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMCLKFEPFCE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FINDWAYOBJECTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x119039F0)

namespace MoleMole
{
	inline static constexpr unsigned int FindWayObjectPoint_TypeDefinitionIndex = 70347;

	class FindWayObjectPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::GMCLKFEPFCE pointFuncType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FINDWAYOBJECTPOINT__CTOR_OFFSET))(this);
		}
	};
}
