#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/BaseFinger.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_SwipeDirection.h"
#include "unitysdk/UnityEngine/TouchPhase.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define HEDGEHOGTEAM_EASYTOUCH_FINGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9731A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int Finger_TypeDefinitionIndex = 41314;

	class Finger : public ::HedgehogTeam::EasyTouch::BaseFinger
	{
	public:
		::System::Int32 tapCount; // 0x78
		::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection oldSwipeType; // 0x7C
		::UnityEngine::Vector2 oldPosition; // 0x80
		::UnityEngine::TouchPhase phase; // 0x88
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType gesture; // 0x8C
		::System::Single startTimeAction; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_FINGER_CTOR_OFFSET))(this);
		}

	};
}
