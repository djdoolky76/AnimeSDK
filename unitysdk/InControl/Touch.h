#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Touch.h"

#define INCONTROL_TOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15633F20)
#define INCONTROL_TOUCH_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x15634010)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x15633FB0)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x15633FE0)
#define INCONTROL_TOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x15633F30)
#define INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET UNITYSDK_OFFSET(0x15634180)
#define INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET UNITYSDK_OFFSET(0x15634020)

namespace InControl
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 41856;

	class Touch : public ::System::Object
	{
	public:
		::System::Single altitudeAngle; // 0x10
		::System::Single deltaTime; // 0x14
		::System::Int32 fingerId; // 0x18
		::System::Single radiusVariance; // 0x1C
		::System::Single radius; // 0x20
		::InControl::TouchType type; // 0x24
		::System::Int32 mouseButton; // 0x28
		::UnityEngine::Vector2 startPosition; // 0x2C
		::UnityEngine::Vector2 position; // 0x34
		::UnityEngine::Vector2 deltaPosition; // 0x3C
		::System::Single maximumPossiblePressure; // 0x44
		::UnityEngine::Vector2 lastPosition; // 0x48
		::System::UInt64 updateTick; // 0x50
		::System::Int32 tapCount; // 0x58
		::System::Single pressure; // 0x5C
		::UnityEngine::TouchPhase phase; // 0x60
		::System::Single azimuthAngle; // 0x64
		// static const ::System::Object FingerID_None; // 0x0
		// static const ::System::Object FingerID_Mouse; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_RESET_OFFSET))(this);
		}

		::System::Single get_normalizedPressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET))(this);
		}

		::System::Single get_NormalizedPressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET))(this);
		}

		::System::Boolean get_IsMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_GET_ISMOUSE_OFFSET))(this);
		}

		::System::Void SetWithTouchData(::UnityEngine::Touch a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Touch, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetWithMouseData(::System::Int32 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET))(this, a1, a2, a3);
		}

	};
}
