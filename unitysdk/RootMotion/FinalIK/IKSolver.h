#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_CONTAINSDUPLICATEBONE_OFFSET UNITYSDK_OFFSET(0xB7127A0)
#define ROOTMOTION_FINALIK_IKSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xB712EC0)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0xB7120B0)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITION_OFFSET UNITYSDK_OFFSET(0xB712080)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0xB712140)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATION_OFFSET UNITYSDK_OFFSET(0xB712130)
#define ROOTMOTION_FINALIK_IKSOLVER_GETROOT_OFFSET UNITYSDK_OFFSET(0xB712150)
#define ROOTMOTION_FINALIK_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xB712160)
#define ROOTMOTION_FINALIK_IKSOLVER_HIERARCHYISVALID_OFFSET UNITYSDK_OFFSET(0xB712870)
#define ROOTMOTION_FINALIK_IKSOLVER_INITIATE_OFFSET UNITYSDK_OFFSET(0xB710780)
#define ROOTMOTION_FINALIK_IKSOLVER_ISVALID_OFFSET UNITYSDK_OFFSET(0xB7109B0)
#define ROOTMOTION_FINALIK_IKSOLVER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xB712780)
#define ROOTMOTION_FINALIK_IKSOLVER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xB712180)
#define ROOTMOTION_FINALIK_IKSOLVER_PRESOLVEBONES_OFFSET UNITYSDK_OFFSET(0xB7129F0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0xB7120C0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITION_OFFSET UNITYSDK_OFFSET(0xB7120A0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0xB712100)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATION_OFFSET UNITYSDK_OFFSET(0xB7120F0)
#define ROOTMOTION_FINALIK_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xB712170)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB7106A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 47042;

	class IKSolver : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 IKPosition; // 0x10
		::System::Single IKPositionWeight; // 0x1C
		::System::Single IKRotationWeight; // 0x20
		::UnityEngine::Quaternion IKRotation; // 0x24
		::System::Boolean _initiated_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreInitiate; // 0x38
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostInitiate; // 0x40
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreUpdate; // 0x48
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostUpdate; // 0x50
		::System::Boolean firstInitiation; // 0x58
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* root; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ISVALID_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_INITIATE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetIKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITION_OFFSET))(this);
		}

		::System::Void SetIKPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITION_OFFSET))(this, a1);
		}

		::System::Single GetIKPositionWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITIONWEIGHT_OFFSET))(this);
		}

		::System::Void SetIKPositionWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITIONWEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetIKRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATION_OFFSET))(this, a1);
		}

		::System::Void SetIKRotationWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATIONWEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetIKRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATION_OFFSET))(this);
		}

		::System::Single GetIKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATIONWEIGHT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETROOT_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_LOGWARNING_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* ContainsDuplicateBone(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_CONTAINSDUPLICATEBONE_OFFSET))(a1);
		}

		static ::System::Boolean HierarchyIsValid(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_HIERARCHYISVALID_OFFSET))(a1);
		}

		static ::System::Single PreSolveBones(::System::Object* a1)
		{
			return ((::System::Single(*)(::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_PRESOLVEBONES_OFFSET))(a1);
		}

	};
}
