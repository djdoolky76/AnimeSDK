#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD74D7F0)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xD74E460)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD74E200)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_LIDHHFMGKDI_OFFSET UNITYSDK_OFFSET(0xD74D910)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xD74DC90)
#define RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_SETSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xD74D370)

namespace RPG::Client
{
	class MonoDestructibleObjectProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 collisionLimit; // 0x18
		::System::Single angularDecaySpeed; // 0x1C
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x20
		::System::Single ADIKIODKIBN; // 0x28
		::UnityEngine::Vector3 LBMIBPCGFBI; // 0x2C
		::UnityEngine::Vector3 FJFEGHMLCBC; // 0x38
		::System::Boolean CJDMCDJHGJD; // 0x44
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 CFJHLILPEHI; // 0x48
		::UnityEngine::Vector3 EJAOEBGHCHD; // 0x54
		// static const ::System::Object GALIKECOAFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_AWAKE_OFFSET))(this);
		}

		::System::Void SetSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_SETSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LIDHHFMGKDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODESTRUCTIBLEOBJECTPROP_LIDHHFMGKDI_OFFSET))(this);
		}

	};
}
