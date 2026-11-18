#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EasyPBD { class EasyPBDRope; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDCONTROLLER_ADDFORCETOALLROPES_OFFSET UNITYSDK_OFFSET(0x1D26CA30)
#define EASYPBD_EASYPBDCONTROLLER_ADDFORCETOROPE_OFFSET UNITYSDK_OFFSET(0x1D26C7D0)
#define EASYPBD_EASYPBDCONTROLLER_ADDRANDOMFORCETOALLROPES_OFFSET UNITYSDK_OFFSET(0x1D26C630)
#define EASYPBD_EASYPBDCONTROLLER_ADDRANDOMFORCETOROPE_OFFSET UNITYSDK_OFFSET(0x1D26C410)
#define EASYPBD_EASYPBDCONTROLLER_ADDROTATION_OFFSET UNITYSDK_OFFSET(0x1D26CC40)
#define EASYPBD_EASYPBDCONTROLLER_ATTACHPREFABTOROPE_OFFSET UNITYSDK_OFFSET(0x1D26BD70)
#define EASYPBD_EASYPBDCONTROLLER_ATTACHRANDOMPREFABTOALLROPES_OFFSET UNITYSDK_OFFSET(0x1D26C040)
#define EASYPBD_EASYPBDCONTROLLER_ATTACHRANDOMPREFABTOROPE_OFFSET UNITYSDK_OFFSET(0x1D26B700)
#define EASYPBD_EASYPBDCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D26B340)
#define EASYPBD_EASYPBDCONTROLLER_BINDANCHORSTOROPES_OFFSET UNITYSDK_OFFSET(0x1D26B390)
#define EASYPBD_EASYPBDCONTROLLER_ENSUREARRAYSIZES_OFFSET UNITYSDK_OFFSET(0x1D26B100)
#define EASYPBD_EASYPBDCONTROLLER_FACEROOTTOWARDS_OFFSET UNITYSDK_OFFSET(0x1D26D230)
#define EASYPBD_EASYPBDCONTROLLER_GETROPE_OFFSET UNITYSDK_OFFSET(0x1D26BD00)
#define EASYPBD_EASYPBDCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D26B090)
#define EASYPBD_EASYPBDCONTROLLER_RESETALLROPES_OFFSET UNITYSDK_OFFSET(0x1D26CE40)
#define EASYPBD_EASYPBDCONTROLLER_SETYAWROTATION_OFFSET UNITYSDK_OFFSET(0x1D26D070)
#define EASYPBD_EASYPBDCONTROLLER_SHAKEALLROPES_OFFSET UNITYSDK_OFFSET(0x1D26C0B0)
#define EASYPBD_EASYPBDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26D4F0)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDController_TypeDefinitionIndex = 26239;

	class EasyPBDController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::EasyPBD::EasyPBDRope*>* pbdRopes; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* ropeAnchors; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* attachmentPrefabs; // 0x28
		::UnityEngine::Vector2Int particleIndexRange; // 0x30
		::UnityEngine::Vector2 impulseXRange; // 0x38
		::UnityEngine::Vector2 impulseZRange; // 0x40
		::UnityEngine::Vector2 extraMassRange; // 0x48
		::UnityEngine::Vector3 attachmentLocalOffset; // 0x50
		::UnityEngine::Vector3 attachmentLocalEuler; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void AttachRandomPrefabToRope(::System::Int32 ropeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ATTACHRANDOMPREFABTOROPE_OFFSET))(this, ropeIndex);
		}

		::System::Void AttachPrefabToRope(::System::Int32 ropeIndex, ::UnityEngine::Transform* target, ::System::Int32 particleIndex, ::System::Single extraMass, ::UnityEngine::Vector3 impulseVelocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ATTACHPREFABTOROPE_OFFSET))(this, ropeIndex, target, particleIndex, extraMass, impulseVelocity);
		}

		::System::Void AttachRandomPrefabToAllRopes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ATTACHRANDOMPREFABTOALLROPES_OFFSET))(this);
		}

		::System::Void ShakeAllRopes(::System::Single strength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_SHAKEALLROPES_OFFSET))(this, strength);
		}

		::System::Void AddRandomForceToRope(::System::Int32 ropeIndex, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ADDRANDOMFORCETOROPE_OFFSET))(this, ropeIndex, level);
		}

		::System::Void AddRandomForceToAllRopes(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ADDRANDOMFORCETOALLROPES_OFFSET))(this, level);
		}

		::System::Void AddForceToRope(::System::Int32 ropeIndex, ::UnityEngine::Vector3 direction, ::System::Single strength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ADDFORCETOROPE_OFFSET))(this, ropeIndex, direction, strength);
		}

		::System::Void AddForceToAllRopes(::UnityEngine::Vector3 direction, ::System::Single strength)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ADDFORCETOALLROPES_OFFSET))(this, direction, strength);
		}

		::System::Void AddRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ADDROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void SetYawRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_SETYAWROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void FaceRootTowards(::UnityEngine::Vector3 worldPosition, ::System::Single yawOffsetDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_FACEROOTTOWARDS_OFFSET))(this, worldPosition, yawOffsetDegrees);
		}

		::System::Void ResetAllRopes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_RESETALLROPES_OFFSET))(this);
		}

		::EasyPBD::EasyPBDRope* GetRope(::System::Int32 ropeIndex)
		{
			return ((::EasyPBD::EasyPBDRope*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_GETROPE_OFFSET))(this, ropeIndex);
		}

		::System::Void BindAnchorsToRopes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_BINDANCHORSTOROPES_OFFSET))(this);
		}

		::System::Void EnsureArraySizes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDCONTROLLER_ENSUREARRAYSIZES_OFFSET))(this);
		}
	};
}
