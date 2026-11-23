#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFE47AD60EB94A25/FF90BDB4EE8EAF23.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/DistanceToInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_SPLINES_SPLINE_METADATA_GET_DISTANCETOINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x4046A90)
#define UNITYENGINE_SPLINES_SPLINE_METADATA_GET_UPVECTORS_OFFSET UNITYSDK_OFFSET(0x4046B00)
#define UNITYENGINE_SPLINES_SPLINE_METADATA_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x40468A0)
#define UNITYENGINE_SPLINES_SPLINE_METADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x40469F0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int Spline_MetaData_TypeDefinitionIndex = 20656;

	class Spline_MetaData : public ::System::Object
	{
	public:
		::BFE47AD60EB94A25::FF90BDB4EE8EAF23 Mode; // 0x10
		::System::Single Tension; // 0x14
		::Il2CppArray<::UnityEngine::Splines::DistanceToInterpolation>* m_DistanceToInterpolation; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* m_UpVectors; // 0x20

		::Il2CppArray<::UnityEngine::Splines::DistanceToInterpolation>* get_DistanceToInterpolation()
		{
			return ((::Il2CppArray<::UnityEngine::Splines::DistanceToInterpolation>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_METADATA_GET_DISTANCETOINTERPOLATION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_UpVectors()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_METADATA_GET_UPVECTORS_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_METADATA__CTOR_OFFSET))(this);
		}

		::System::Void InvalidateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_METADATA_INVALIDATECACHE_OFFSET))(this);
		}
	};
}
