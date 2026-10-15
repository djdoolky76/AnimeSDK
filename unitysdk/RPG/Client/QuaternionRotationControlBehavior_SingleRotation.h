#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0xDE044B0)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0xDE042A0)
#define RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDE03B10)

namespace RPG::Client
{
	inline static constexpr unsigned int QuaternionRotationControlBehavior_SingleRotation_TypeDefinitionIndex = 70756;

	class QuaternionRotationControlBehavior_SingleRotation : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion BaseRotation; // 0x10
		::UnityEngine::Vector3 RotateAxis; // 0x20
		::System::Single RotateSpeed; // 0x2C
		::System::Single _LastAngle; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_KPJGDHLENIP_OFFSET))(this);
		}

		::UnityEngine::Quaternion HNEADNPJHEB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUATERNIONROTATIONCONTROLBEHAVIOR_SINGLEROTATION_HNEADNPJHEB_OFFSET))(this, a1, a2);
		}

	};
}
