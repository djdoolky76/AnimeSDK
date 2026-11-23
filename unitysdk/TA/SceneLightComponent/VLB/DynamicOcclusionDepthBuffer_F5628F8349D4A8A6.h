#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6_B3AE0380A0CD8411_OFFSET UNITYSDK_OFFSET(0x2897D20)
#define TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2898020)
#define TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int DynamicOcclusionDepthBuffer_F5628F8349D4A8A6_TypeDefinitionIndex = 16190;

	class DynamicOcclusionDepthBuffer_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TA::SceneLightComponent::VLB::DynamicOcclusionDepthBuffer_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TA::SceneLightComponent::VLB::DynamicOcclusionDepthBuffer_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(DynamicOcclusionDepthBuffer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::UnityEngine::Camera*>** StaticGet_E7075C39E6B63936()
		{
			return (::System::Action_1<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicOcclusionDepthBuffer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void B3AE0380A0CD8411(::UnityEngine::Camera* A98EBC175E852459)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_DYNAMICOCCLUSIONDEPTHBUFFER_F5628F8349D4A8A6_B3AE0380A0CD8411_OFFSET))(this, A98EBC175E852459);
		}
	};
}
