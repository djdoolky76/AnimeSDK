#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace HedgehogTeam::EasyTouch { class Finger; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96EAA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETCOMPLEX2FINGER_OFFSET UNITYSDK_OFFSET(0x1E97E3C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETMOUSETOUCH_OFFSET UNITYSDK_OFFSET(0x1E9731B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETPINCHTWIST2FINGER_OFFSET UNITYSDK_OFFSET(0x1E97E4B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1E97DFE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETSECONDFINGERPOSITION_OFFSET UNITYSDK_OFFSET(0x1E97E020)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E97DD30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E96F1D0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchInput_TypeDefinitionIndex = 41313;

	class EasyTouchInput : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* startActionTime; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* oldMousePosition; // 0x18
		::Il2CppArray<::System::Single>* tapeTime; // 0x20
		::Il2CppArray<::System::Int32>* tapCount; // 0x28
		::Il2CppArray<::System::Single>* deltaTime; // 0x30
		::System::Boolean bComplex; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 oldFinger2Position; // 0x3C
		::UnityEngine::Vector2 complexCenter; // 0x44
		::UnityEngine::Vector2 deltaFingerPosition; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_CTOR_OFFSET))(this);
		}

		::System::Int32 TouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Int32 getTouchCount(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETTOUCHCOUNT_OFFSET))(this, a1);
		}

		::HedgehogTeam::EasyTouch::Finger* GetMouseTouch(::System::Int32 a1, ::HedgehogTeam::EasyTouch::Finger* a2)
		{
			return ((::HedgehogTeam::EasyTouch::Finger*(*)(::PVOID, ::System::Int32, ::HedgehogTeam::EasyTouch::Finger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETMOUSETOUCH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetSecondFingerPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETSECONDFINGERPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPointerPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETPOINTERPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetPinchTwist2Finger(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETPINCHTWIST2FINGER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetComplex2finger()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHINPUT_GETCOMPLEX2FINGER_OFFSET))(this);
		}

	};
}
