#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_SPLINES_DISTANCETOINTERPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x4045FE0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int DistanceToInterpolation_TypeDefinitionIndex = 20637;

	struct alignas(4) DistanceToInterpolation
	{
		static ::UnityEngine::Splines::DistanceToInterpolation* StaticGet_Invalid()
		{
			return (::UnityEngine::Splines::DistanceToInterpolation*)Il2CppClass::FromTypeDefinitionIndex(DistanceToInterpolation_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single Distance; // 0x10
		::System::Single T; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_DISTANCETOINTERPOLATION__CCTOR_OFFSET))();
		}
	};
}
