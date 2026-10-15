#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CapsuleOcclusion_bonePos.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::CustomRP { class CapsuleOcclusion_CapsuleTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CAPSULEOCCLUSION_CAPSULETRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xE483710)
#define RPG_CUSTOMRP_CAPSULEOCCLUSION_CAPSULETRANSFORM_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0xE483740)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleOcclusion_CapsuleTransform_TypeDefinitionIndex = 51885;

	class CapsuleOcclusion_CapsuleTransform : public ::System::Object
	{
	public:
		::System::Single length; // 0x10
		::System::Single radius; // 0x14
		::System::Single radiusZ; // 0x18
		::UnityEngine::Vector3 center; // 0x1C
		::UnityEngine::Vector3 direction; // 0x28
		::RPG::CustomRP::CapsuleOcclusion_bonePos bone; // 0x34
		::UnityEngine::Transform* boneTrans; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_CAPSULETRANSFORM_CTOR_OFFSET))(this);
		}

		::System::Void EOCEFJFIJLK(::RPG::CustomRP::CapsuleOcclusion_CapsuleTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CapsuleOcclusion_CapsuleTransform*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEOCCLUSION_CAPSULETRANSFORM_EOCEFJFIJLK_OFFSET))(this, a1);
		}

	};
}
