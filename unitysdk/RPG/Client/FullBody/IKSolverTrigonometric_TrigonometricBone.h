#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver_Bone.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD084C40)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_CTOR_OFFSET UNITYSDK_OFFSET(0xD089CA0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0xD089A60)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_HNONNHOAFLK_OFFSET UNITYSDK_OFFSET(0xD084A90)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverTrigonometric_TrigonometricBone_TypeDefinitionIndex = 74269;

	class IKSolverTrigonometric_TrigonometricBone : public ::RPG::Client::FullBody::IKSolver_Bone
	{
	public:
		::UnityEngine::Quaternion targetToLocalSpace; // 0x70
		::UnityEngine::Vector3 defaultLocalBendNormal; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_CTOR_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_ACDPBPKPKGE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion HNEADNPJHEB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_HNEADNPJHEB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 HNONNHOAFLK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_HNONNHOAFLK_OFFSET))(this);
		}

	};
}
