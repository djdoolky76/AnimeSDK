#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverLimb_BendModifier.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverTrigonometric.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CPHOCCHLJOJ_OFFSET UNITYSDK_OFFSET(0xD07E4C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD07E7A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CTOR_OFFSET UNITYSDK_OFFSET(0xD07E5E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_EFMBPPNCEAN_OFFSET UNITYSDK_OFFSET(0xD07D380)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0xD07E820)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_IELOPFIKFBB_OFFSET UNITYSDK_OFFSET(0xD07CBE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LAKJEIDOCAE_OFFSET UNITYSDK_OFFSET(0xD07D220)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LJLNCOLHLJF_OFFSET UNITYSDK_OFFSET(0xD07C300)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LLFCNLEAGLP_OFFSET UNITYSDK_OFFSET(0xD07C270)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_NEJALJCBDGA_OFFSET UNITYSDK_OFFSET(0xD07D060)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverLimb_TypeDefinitionIndex = 74264;

	class IKSolverLimb : public ::RPG::Client::FullBody::IKSolverTrigonometric
	{
	public:
		::UnityEngine::AvatarIKGoal goal; // 0xA8
		::RPG::Client::FullBody::IKSolverLimb_BendModifier bendModifier; // 0xAC
		::System::Single maintainRotationWeight; // 0xB0
		::System::Single bendModifierWeight; // 0xB4
		::UnityEngine::Transform* bendGoal; // 0xB8
		::System::Boolean maintainBendFor1Frame; // 0xC0
		::System::Boolean maintainRotationFor1Frame; // 0xC1
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion defaultRootRotation; // 0xC4
		::UnityEngine::Quaternion parentDefaultRotation; // 0xD4
		::UnityEngine::Quaternion bone3RotationBeforeSolve; // 0xE4
		::UnityEngine::Quaternion maintainRotation; // 0xF4
		::UnityEngine::Quaternion bone3DefaultRotation; // 0x104
		::UnityEngine::Vector3 _bendNormal; // 0x114
		::UnityEngine::Vector3 animationNormal; // 0x120
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* axisDirectionsLeft; // 0x130
		::Il2CppArray<::System::Object*>* axisDirectionsRight; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::AvatarIKGoal a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LLFCNLEAGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LLFCNLEAGLP_OFFSET))(this);
		}

		::System::Void LJLNCOLHLJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LJLNCOLHLJF_OFFSET))(this);
		}

		::System::Void IELOPFIKFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_IELOPFIKFBB_OFFSET))(this);
		}

		::System::Void LAKJEIDOCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_LAKJEIDOCAE_OFFSET))(this);
		}

		::System::Void CPHOCCHLJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_CPHOCCHLJOJ_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_axisDirections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET))(this);
		}

		::System::Void NEJALJCBDGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_NEJALJCBDGA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EFMBPPNCEAN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_EFMBPPNCEAN_OFFSET))(this);
		}

	};
}
