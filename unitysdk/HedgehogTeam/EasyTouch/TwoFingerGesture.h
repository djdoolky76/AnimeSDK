#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E975D60)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x1E976040)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96EB20)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 41318;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* pickedObject; // 0x18
		::UnityEngine::GameObject* oldPickedObject; // 0x20
		::UnityEngine::Camera* pickedCamera; // 0x28
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x30
		::UnityEngine::Vector2 deltaPosition; // 0x34
		::System::Single startDistance; // 0x3C
		::System::Single tapCurentTime; // 0x40
		::UnityEngine::Vector2 oldStartPosition; // 0x44
		::System::Single fingerDistance; // 0x4C
		::UnityEngine::Vector2 startPosition; // 0x50
		::System::Single lastTwistAngle; // 0x58
		::System::Single lastPinch; // 0x5C
		::System::Single timeSinceStartAction; // 0x60
		::System::Int32 finger0; // 0x64
		::UnityEngine::Vector2 position; // 0x68
		::System::Boolean lockPinch; // 0x70
		::System::Boolean inSingleDoubleTaps; // 0x71
		::System::Boolean isGuiCamera; // 0x72
		::System::Byte _padding0[0x1];
		::System::Int32 finger1; // 0x74
		::System::Single oldFingerDistance; // 0x78
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x7C
		::System::Boolean isOverGui; // 0x80
		::System::Boolean lockTwist; // 0x81
		::System::Boolean swipeStart; // 0x82
		::System::Boolean dragStart; // 0x83
		::System::Single startTimeAction; // 0x84
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
