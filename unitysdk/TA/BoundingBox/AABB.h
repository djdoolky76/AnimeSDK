#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TA_BOUNDINGBOX_AABB_CONTAINS_OFFSET UNITYSDK_OFFSET(0x28D5FF0)
#define TA_BOUNDINGBOX_AABB__CTOR_OFFSET UNITYSDK_OFFSET(0x28D6090)

namespace TA::BoundingBox
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 16383;

	class AABB : public ::System::Object
	{
	public:
		::UnityEngine::B3A7F113FE1DE383 Bound; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_AABB__CTOR_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_AABB_CONTAINS_OFFSET))(this, FF9A37DE513AC35B);
		}
	};
}
