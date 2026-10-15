#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/Grounding_Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class Grounding_BELNPMHCADA; }
namespace RPG::Client::FullBody { class Grounding_FDIMCLFAMBM; }
namespace RPG::Client::FullBody { class Grounding_JGJCNOBMEOJ; }
namespace RPG::Client::FullBody { class Grounding_KEHPPILGEFG; }
namespace RPG::Client::FullBody { class Grounding_PLHFOJLFMGK; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_GROUNDING_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD0610E0)
#define RPG_CLIENT_FULLBODY_GROUNDING_AENJNFKJLBC_OFFSET UNITYSDK_OFFSET(0xD066DF0)
#define RPG_CLIENT_FULLBODY_GROUNDING_ANMLJPDPDJJ_OFFSET UNITYSDK_OFFSET(0xD0664F0)
#define RPG_CLIENT_FULLBODY_GROUNDING_APNGEFIOCEH_OFFSET UNITYSDK_OFFSET(0xD066C70)
#define RPG_CLIENT_FULLBODY_GROUNDING_CTOR_OFFSET UNITYSDK_OFFSET(0xD05F770)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xD064790)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_LEGS_OFFSET UNITYSDK_OFFSET(0xD064750)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0xD064770)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0xD064830)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0xD0647D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xD0647B0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_UP_OFFSET UNITYSDK_OFFSET(0xD064CB0)
#define RPG_CLIENT_FULLBODY_GROUNDING_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0xD066A90)
#define RPG_CLIENT_FULLBODY_GROUNDING_JJHBHDFAPLP_OFFSET UNITYSDK_OFFSET(0xD064890)
#define RPG_CLIENT_FULLBODY_GROUNDING_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xD060200)
#define RPG_CLIENT_FULLBODY_GROUNDING_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD064F90)
#define RPG_CLIENT_FULLBODY_GROUNDING_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0xD065220)
#define RPG_CLIENT_FULLBODY_GROUNDING_NOIBBPDBKHA_OFFSET UNITYSDK_OFFSET(0xD067090)
#define RPG_CLIENT_FULLBODY_GROUNDING_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD0631C0)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xD0647A0)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_LEGS_OFFSET UNITYSDK_OFFSET(0xD064760)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_PELVIS_OFFSET UNITYSDK_OFFSET(0xD064780)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0xD064800)
#define RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xD0647C0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_TypeDefinitionIndex = 74237;

	class Grounding : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask layers; // 0x10
		::System::Single maxStep; // 0x14
		::System::Single heightOffset; // 0x18
		::System::Single footSpeed; // 0x1C
		::System::Single footLerpHalfTime; // 0x20
		::System::Single footRadius; // 0x24
		::System::Single footCenterOffset; // 0x28
		::System::Single prediction; // 0x2C
		::System::Single footRotationWeight; // 0x30
		::System::Single footRotationSpeed; // 0x34
		::System::Single maxFootRotationAngle; // 0x38
		::System::Boolean rotateSolver; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single pelvisSpeed; // 0x40
		::System::Single pelvisDamper; // 0x44
		::System::Single lowerPelvisWeight; // 0x48
		::System::Single liftPelvisWeight; // 0x4C
		::System::Single rootSphereCastRadius; // 0x50
		::System::Boolean overstepFallsDown; // 0x54
		::System::Byte _padding1[0x3];
		::RPG::Client::FullBody::Grounding_Quality quality; // 0x58
		::System::Boolean forceUseWorldRotateUp; // 0x5C
		::System::Byte _padding2[0x3];
		::Il2CppArray<::System::Object*>* _legs_k__BackingField; // 0x60
		::RPG::Client::FullBody::Grounding_JGJCNOBMEOJ* _pelvis_k__BackingField; // 0x68
		::System::Boolean _isGrounded_k__BackingField; // 0x70
		::System::Byte _padding3[0x7];
		::UnityEngine::Transform* _root_k__BackingField; // 0x78
		::UnityEngine::RaycastHit _rootHit_k__BackingField; // 0x80
		::RPG::Client::FullBody::Grounding_BELNPMHCADA* Raycast; // 0xB0
		::RPG::Client::FullBody::Grounding_PLHFOJLFMGK* CapsuleCast; // 0xB8
		::RPG::Client::FullBody::Grounding_FDIMCLFAMBM* SphereCast; // 0xC0
		::RPG::Client::FullBody::Grounding_KEHPPILGEFG* BoxCast; // 0xC8
		::System::Boolean initiated; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_legs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_LEGS_OFFSET))(this);
		}

		::System::Void set_legs(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_LEGS_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::Grounding_JGJCNOBMEOJ* get_pelvis()
		{
			return ((::RPG::Client::FullBody::Grounding_JGJCNOBMEOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_PELVIS_OFFSET))(this);
		}

		::System::Void set_pelvis(::RPG::Client::FullBody::Grounding_JGJCNOBMEOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::Grounding_JGJCNOBMEOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_PELVIS_OFFSET))(this, a1);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ISGROUNDED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOT_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit get_rootHit()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTHIT_OFFSET))(this);
		}

		::System::Void set_rootHit(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_SET_ROOTHIT_OFFSET))(this, a1);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::UnityEngine::RaycastHit JJHBHDFAPLP(::System::Single a1)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JJHBHDFAPLP_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void ACDPBPKPKGE(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ACDPBPKPKGE_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_PAGKOAEOLKA_OFFSET))(this);
		}

		::UnityEngine::Vector3 ANMLJPDPDJJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_ANMLJPDPDJJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_LFKJJELMNPK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_UP_OFFSET))(this);
		}

		::System::Single APNGEFIOCEH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_APNGEFIOCEH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AENJNFKJLBC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_AENJNFKJLBC_OFFSET))(this, a1);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_GET_USEROOTROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 NOIBBPDBKHA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_NOIBBPDBKHA_OFFSET))(this);
		}

	};
}
