#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x175877D0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x17587AB0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x175805B0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 41318;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedObject; // 0x10
		::UnityEngine::GameObject* oldPickedObject; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* pickedUIElement; // 0x28
		::UnityEngine::Vector2 deltaPosition; // 0x30
		::System::Single lastPinch; // 0x38
		::System::Int32 finger1; // 0x3C
		::System::Single oldFingerDistance; // 0x40
		::System::Int32 finger0; // 0x44
		::System::Single tapCurentTime; // 0x48
		::System::Single timeSinceStartAction; // 0x4C
		::System::Single lastTwistAngle; // 0x50
		::UnityEngine::Vector2 startPosition; // 0x54
		::UnityEngine::Vector2 oldStartPosition; // 0x5C
		::System::Single fingerDistance; // 0x64
		::System::Boolean dragStart; // 0x68
		::System::Boolean isOverGui; // 0x69
		::System::Boolean swipeStart; // 0x6A
		::System::Byte _padding0[0x1];
		::System::Single startDistance; // 0x6C
		::UnityEngine::Vector2 position; // 0x70
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x78
		::System::Single startTimeAction; // 0x7C
		::System::Boolean inSingleDoubleTaps; // 0x80
		::System::Boolean lockTwist; // 0x81
		::System::Boolean lockPinch; // 0x82
		::System::Boolean isGuiCamera; // 0x83
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CTOR_OFFSET))(this);
		}

		::System::Void ClearPickedObjectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET))(this);
		}

		::System::Void ClearPickedUIData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET))(this);
		}

	};
}
