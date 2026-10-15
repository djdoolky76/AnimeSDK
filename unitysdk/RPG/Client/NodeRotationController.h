#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_NODEROTATIONCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD9D47A0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_ENDCALCROTATION_OFFSET UNITYSDK_OFFSET(0xD9D4750)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0xD9D4270)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_GET_ADDOBJ_OFFSET UNITYSDK_OFFSET(0xD9D41B0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_IJLCFPOFCEO_OFFSET UNITYSDK_OFFSET(0xD9D42D0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_SET_ADDOBJ_OFFSET UNITYSDK_OFFSET(0xD9D41C0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_STARTCALCROTATION_OFFSET UNITYSDK_OFFSET(0xD9D4650)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD9D43E0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD9D4430)

namespace RPG::Client
{
	inline static constexpr unsigned int NodeRotationController_TypeDefinitionIndex = 68634;

	class NodeRotationController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MovingHeight; // 0x18
		::System::Single FinalRotationAngle; // 0x1C
		::UnityEngine::Vector3 RotationAxis; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* RotationNode; // 0x30
		::System::String* RotationNodeRelativePath; // 0x38
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x40
		::System::Single PGKHPNDAPJI; // 0x50
		::System::Single JAHJOMINLCK; // 0x54
		::UnityEngine::GameObject* LHPAGLALFNL; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AddObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_GET_ADDOBJ_OFFSET))(this);
		}

		::System::Void set_AddObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_SET_ADDOBJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* IJLCFPOFCEO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_IJLCFPOFCEO_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartCalcRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_STARTCALCROTATION_OFFSET))(this);
		}

		::System::Void EndCalcRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_ENDCALCROTATION_OFFSET))(this);
		}

		::System::String* EOJBCLHBEGA(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_EOJBCLHBEGA_OFFSET))(this, a1, a2);
		}

	};
}
