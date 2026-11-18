#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class ISkeletonRenderer; }

#define MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_APPLYGRAVITY_OFFSET UNITYSDK_OFFSET(0x198D2A70)
#define MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_INITSKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x198D27D0)
#define MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x198D2930)
#define MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x198D2690)
#define MOLEMOLE_SPINEPHYSICSMOTIONKEEPER__CTOR_OFFSET UNITYSDK_OFFSET(0x198D2CA0)

namespace MoleMole
{
	inline static constexpr unsigned int SpinePhysicsMotionKeeper_TypeDefinitionIndex = 87691;

	class SpinePhysicsMotionKeeper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::ISkeletonRenderer* skeletonRender; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINEPHYSICSMOTIONKEEPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void InitSkeletonRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_INITSKELETONRENDERER_OFFSET))(this);
		}

		::System::Void ApplyGravity(::Spine::Unity::ISkeletonRenderer* OCFHGOGFGPE)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINEPHYSICSMOTIONKEEPER_APPLYGRAVITY_OFFSET))(this, OCFHGOGFGPE);
		}
	};
}
