#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"

namespace UnityEngine { class TerrainData; }

#define UNITYENGINE_TERRAINCOLLIDER_A4CCD77D02C7A66A_OFFSET UNITYSDK_OFFSET(0x41CA6E0)
#define UNITYENGINE_TERRAINCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainCollider_TypeDefinitionIndex = 21558;

	class TerrainCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void A4CCD77D02C7A66A(::UnityEngine::TerrainData* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINCOLLIDER_A4CCD77D02C7A66A_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
