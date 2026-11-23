#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_GETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x289CF20)
#define ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_START_OFFSET UNITYSDK_OFFSET(0x289D0B0)
#define ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x289D130)
#define ABC_TECHART_DISTANCEADAPTIVEBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x289D570)

namespace ABC::TechArt
{
	inline static constexpr unsigned int DistanceAdaptiveBillboard_TypeDefinitionIndex = 16217;

	class DistanceAdaptiveBillboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single referenceDistance; // 0x20
		::UnityEngine::Vector3 originalScale; // 0x24

		::UnityEngine::Camera* GetActiveCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_GETACTIVECAMERA_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_DISTANCEADAPTIVEBILLBOARD__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_DISTANCEADAPTIVEBILLBOARD_START_OFFSET))(this);
		}
	};
}
