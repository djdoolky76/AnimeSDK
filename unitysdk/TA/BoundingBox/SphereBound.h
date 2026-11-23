#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TA_BOUNDINGBOX_SPHEREBOUND_CONTAINS_OFFSET UNITYSDK_OFFSET(0x28E8FB0)
#define TA_BOUNDINGBOX_SPHEREBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x28E9070)

namespace TA::BoundingBox
{
	inline static constexpr unsigned int SphereBound_TypeDefinitionIndex = 16435;

	class SphereBound : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _center; // 0x10
		::System::Single radius; // 0x1C

		::System::Boolean Contains(::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_SPHEREBOUND_CONTAINS_OFFSET))(this, FF9A37DE513AC35B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_SPHEREBOUND__CTOR_OFFSET))(this);
		}
	};
}
