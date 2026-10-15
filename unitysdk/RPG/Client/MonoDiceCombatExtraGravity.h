#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_AWAKE_OFFSET UNITYSDK_OFFSET(0xD750030)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_CHHAFOANCCB_OFFSET UNITYSDK_OFFSET(0xD750930)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_CTOR_OFFSET UNITYSDK_OFFSET(0xD792D20)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD750250)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_KMDIHCODHBC_OFFSET UNITYSDK_OFFSET(0xD792CD0)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_NABBEFMOCAA_OFFSET UNITYSDK_OFFSET(0xD750800)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD750880)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_OPKCHDKBDBF_OFFSET UNITYSDK_OFFSET(0xD750A30)
#define RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_START_OFFSET UNITYSDK_OFFSET(0xD750150)

namespace RPG::Client
{
	class MonoDiceCombatExtraGravity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoAnimationTrigger* AnimationTrigger; // 0x18
		::System::Boolean UseGroundCheck; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single GroundCheckDistance; // 0x24
		::RPG::Client::MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode GravitySimulateForceMode; // 0x28
		::System::Boolean UseHeightBasedAcceleration; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single TargetHeight; // 0x30
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* HeightAccelerationCurve; // 0x38
		::System::Single MinForce; // 0x40
		::System::Single MaxForce; // 0x44
		::System::Single MinAcceleration; // 0x48
		::System::Single MaxAcceleration; // 0x4C
		::System::Boolean AddInitialVelocity; // 0x50
		::System::Byte _padding3[0x3];
		::System::Single Pitch; // 0x54
		::System::Single Yaw; // 0x58
		::System::Single MinVelocity; // 0x5C
		::System::Single MaxVelocity; // 0x60
		::System::Single IKKNPIKFBNL; // 0x64
		::UnityEngine::Vector3 FBNAMPAIIOK; // 0x68
		::System::Byte _padding4[0x4];
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x78
		::UnityEngine::Rigidbody* PANDMEPOLJP; // 0x80
		::System::Single ECPJCNDHMPP; // 0x88
		::System::Single DMJPMIOHAPK; // 0x8C
		::System::Single BFNOBDDKBOD; // 0x90
		::System::Single HNIAFEPEPHP; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean NABBEFMOCAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_NABBEFMOCAA_OFFSET))(this);
		}

		::System::Void CHHAFOANCCB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_CHHAFOANCCB_OFFSET))(this, a1);
		}

		::System::Boolean OPKCHDKBDBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_OPKCHDKBDBF_OFFSET))(this);
		}

		::System::Boolean KMDIHCODHBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATEXTRAGRAVITY_KMDIHCODHBC_OFFSET))(this);
		}

	};
}
