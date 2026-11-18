#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class Object; }

#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F7C4BE0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_BUILDREACHCONES_OFFSET UNITYSDK_OFFSET(0x1F7C4D10)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETREACHCONE_OFFSET UNITYSDK_OFFSET(0x1F7C7360)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETSCALAR_OFFSET UNITYSDK_OFFSET(0x1F7C71E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0x1F7C5370)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITSWING_OFFSET UNITYSDK_OFFSET(0x1F7C58E0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F7C4B40)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F7C4AF0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_POINTTOTANGENTPLANE_OFFSET UNITYSDK_OFFSET(0x1F7C7210)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1F7C5E40)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SETLIMITPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7C4C30)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SMOOTHPOINTS_OFFSET UNITYSDK_OFFSET(0x1F7C68F0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_START_OFFSET UNITYSDK_OFFSET(0x1F7C5420)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F7C4B90)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_TANGENTPOINTTOSPHERE_OFFSET UNITYSDK_OFFSET(0x1F7C72C0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C74D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitPolygonal_TypeDefinitionIndex = 36791;

	class RotationLimitPolygonal : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Single twistLimit; // 0x40
		::System::Int32 smoothIterations; // 0x44
		::Il2CppArray<::System::Object*>* points; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* P; // 0x50
		::Il2CppArray<::System::Object*>* reachCones; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_ASTHREAD_OFFSET))(this);
		}

		::System::Void SetLimitPoints(::Il2CppArray<::System::Object*>* points)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SETLIMITPOINTS_OFFSET))(this, points);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITROTATION_OFFSET))(this, rotation);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_START_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void BuildReachCones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_BUILDREACHCONES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* SmoothPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_SMOOTHPOINTS_OFFSET))(this);
		}

		::System::Single GetScalar(::System::Int32 k)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETSCALAR_OFFSET))(this, k);
		}

		::UnityEngine::Vector3 PointToTangentPlane(::UnityEngine::Vector3 p, ::System::Single r)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_POINTTOTANGENTPLANE_OFFSET))(this, p, r);
		}

		::UnityEngine::Vector3 TangentPointToSphere(::UnityEngine::Vector3 q, ::System::Single r)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_TANGENTPOINTTOSPHERE_OFFSET))(this, q, r);
		}

		::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITSWING_OFFSET))(this, rotation);
		}

		::System::Int32 GetReachCone(::UnityEngine::Vector3 L)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_GETREACHCONE_OFFSET))(this, L);
		}
	};
}
