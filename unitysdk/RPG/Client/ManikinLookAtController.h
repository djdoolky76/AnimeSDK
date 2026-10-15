#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PNMFPMHFFPM;
class SkirtIK;
namespace RPG::Client { class EmoEyeCtrl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::Client { class StateIdleTimer; }
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ADDGEAEDKCJ_OFFSET UNITYSDK_OFFSET(0xD5157A0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD513360)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD515CC0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DISABLELOOKAT_OFFSET UNITYSDK_OFFSET(0xD515B00)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DNHCDEFEAOD_OFFSET UNITYSDK_OFFSET(0xD513850)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD5158B0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ENABLELOOKAT_OFFSET UNITYSDK_OFFSET(0xD515A40)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_ISLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xD515CA0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD5137A0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD513690)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET UNITYSDK_OFFSET(0xD513310)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_SET_ISLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xD515CB0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD5135D0)

namespace RPG::Client
{
	class ManikinLookAtController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsLookAtActive_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* LookAtStates; // 0x20
		::System::Single lookWaitTime; // 0x28
		::System::Single idleShowWaitTime; // 0x2C
		::System::Boolean RequireTargetMoveAfterAnimForbid; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single upWeight; // 0x34
		::System::Single forwardWeight; // 0x38
		::System::Single rightWeight; // 0x3C
		::System::Single OutOfConstraintTimer; // 0x40
		::System::Byte _padding2[0x4];
		::RPG::Client::LookAtTargetConstraint* Constraint; // 0x48
		::RPG::Client::LookAtTargetConstraint* AnotherConstraint; // 0x50
		::System::Single ConstraintSpeed; // 0x58
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* ConstraintCurve; // 0x60
		::System::Single OutConstraintSpeed; // 0x68
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* OutConstraintCurve; // 0x70
		::PNMFPMHFFPM* MIPMCEJIAMC; // 0x78
		::RPG::Client::LookAtIK* FJLAEGFIMCK; // 0x80
		::RPG::Client::EmoEyeCtrl* KNOIJPMAFOB; // 0x88
		::SkirtIK* KOOBIGFLPKI; // 0x90
		::UnityChan::SpringManager* GKJGKIPPAIP; // 0x98
		::UnityEngine::Animator* NAHOHKAHBPK; // 0xA0
		::RPG::Client::StateIdleTimer* CPNEGCNHMLA; // 0xA8
		::System::Single JCJAPHGBLPB; // 0xB0
		::System::Byte _padding5[0x4];
		::UnityEngine::Transform* DEKAPAGCCGL; // 0xB8
		::System::Single JBCLEIBCDJO; // 0xC0
		::System::Byte _padding6[0x4];
		::Il2CppArray<::System::Int32>* HILDHBAKDFJ; // 0xC8
		::System::Single CBLICFGIKAC; // 0xD0
		::System::Nullable* IPEKFACFJGG; // 0xD4
		::System::Byte _padding7[0x8];
		::System::Nullable* IIBBCLPNNDE; // 0xE4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void SetOwner(::PNMFPMHFFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMFPMHFFPM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void DNHCDEFEAOD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_DNHCDEFEAOD_OFFSET))(this, a1);
		}

		::System::Boolean ADDGEAEDKCJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ADDGEAEDKCJ_OFFSET))(this, a1);
		}

		::System::Void DoLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_DOLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EnableLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ENABLELOOKAT_OFFSET))(this, a1);
		}

		::System::Void DisableLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_DISABLELOOKAT_OFFSET))(this);
		}

		::System::Boolean get_IsLookAtActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_ISLOOKATACTIVE_OFFSET))(this);
		}

		::System::Void set_IsLookAtActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_SET_ISLOOKATACTIVE_OFFSET))(this, a1);
		}

	};
}
