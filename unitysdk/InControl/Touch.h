#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Touch.h"

#define INCONTROL_TOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC00030)
#define INCONTROL_TOUCH_GET_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x1CC00130)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x1CC000D0)
#define INCONTROL_TOUCH_GET_NORMALIZEDPRESSURE_OFFSET UNITYSDK_OFFSET(0x1CC00100)
#define INCONTROL_TOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x1CC00040)
#define INCONTROL_TOUCH_SETWITHMOUSEDATA_OFFSET UNITYSDK_OFFSET(0x1CC002A0)
#define INCONTROL_TOUCH_SETWITHTOUCHDATA_OFFSET UNITYSDK_OFFSET(0x1CC00140)

namespace InControl
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 41856;

	class Touch : public ::System::Object
	{
	public:
		::System::Int32 tapCount; // 0x10
		::UnityEngine::Vector2 startPosition; // 0x14
		::System::Single radius; // 0x1C
		::System::Int32 mouseButton; // 0x20
		::System::Single altitudeAngle; // 0x24
		::System::Single radiusVariance; // 0x28
		::UnityEngine::Vector2 lastPosition; // 0x2C
		::System::Single pressure; // 0x34
		::UnityEngine::Vector2 deltaPosition; // 0x38
		::InControl::TouchType type; // 0x40
		::System::Int32 fingerId; // 0x44
		::System::Single deltaTime; // 0x48
		::System::Byte _padding0[0x4];
		::System::UInt64 updateTick; // 0x50
		::UnityEngine::Vector2 position; // 0x58
		::UnityEngine::TouchPhase phase; // 0x60
		::System::Single azimuthAngle; // 0x64
		::System::Single maximumPossiblePressure; // 0x68
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
