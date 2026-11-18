#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycaster.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOGRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1043B1A0)
#define MOLEMOLE_MONOGRAPHICRAYCASTER_MMMBBLIEGKP_OFFSET UNITYSDK_OFFSET(0x1043B370)
#define MOLEMOLE_MONOGRAPHICRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1043B310)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGraphicRaycaster_TypeDefinitionIndex = 72696;

	class MonoGraphicRaycaster : public ::UnityEngine::UI::GraphicRaycaster
	{
	public:
		::UnityEngine::Camera* NHMBBMINMHH; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* MMMBBLIEGKP()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRAPHICRAYCASTER_MMMBBLIEGKP_OFFSET))(this);
		}
	};
}
