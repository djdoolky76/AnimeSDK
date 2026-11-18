#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_FJNAONCCHHG.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_HNCGEJNKKIH.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_LBINNDJGGNN.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/Cameras/VCameraTargetGroup_Target.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ABKFIPFDHAH_OFFSET UNITYSDK_OFFSET(0x165123F0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x16511710)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_BEIFHACHGPP_OFFSET UNITYSDK_OFFSET(0x16512780)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOAFCDJGCCF_OFFSET UNITYSDK_OFFSET(0x16513AF0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x16512280)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FINDMEMBER_OFFSET UNITYSDK_OFFSET(0x165119B0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16513090)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0x16513190)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x16511E40)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET UNITYSDK_OFFSET(0x16511AB0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x16511340)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16511460)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0x16511360)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16511330)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_KLADGJAPHNL_OFFSET UNITYSDK_OFFSET(0x16511B80)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16513140)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_OIFHKMMJBHB_OFFSET UNITYSDK_OFFSET(0x16512BF0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16512FD0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x16511840)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x165118C0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_SETMEMBERSRADIUS_OFFSET UNITYSDK_OFFSET(0x16511680)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x165130E0)
#define MOLEMOLE_CAMERAS_VCAMERATARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16513A70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraTargetGroup_TypeDefinitionIndex = 92647;

	class VCameraTargetGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Cameras::VCameraTargetGroup_HNCGEJNKKIH m_PositionMode; // 0x18
		::MoleMole::Cameras::VCameraTargetGroup_FJNAONCCHHG m_RotationMode; // 0x1C
		::MoleMole::Cameras::VCameraTargetGroup_LBINNDJGGNN m_UpdateMethod; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* m_Targets; // 0x28
		::UnityEngine::Bounds _OMEEICOFLNJ_k__BackingField; // 0x30
		::System::Single OGICAGGBCMC; // 0x48
		::UnityEngine::Vector3 INLKGDALMJJ; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Bounds get_BoundingBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_BOUNDINGBOX_OFFSET))(this);
		}

		::UnityEngine::BoundingSphere get_Sphere()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_SPHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void SetMembersRadius(::System::Single NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_SETMEMBERSRADIUS_OFFSET))(this, NCCDJLDKFGA);
		}

		::System::Void AddMember(::UnityEngine::Transform* IMLLDOHDCNC, ::System::Single IECOJPMPJMP, ::System::Single NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ADDMEMBER_OFFSET))(this, IMLLDOHDCNC, IECOJPMPJMP, NCCDJLDKFGA);
		}

		::System::Void RemoveAllMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEALLMEMBERS_OFFSET))(this);
		}

		::System::Void RemoveMember(::UnityEngine::Transform* IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_REMOVEMEMBER_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Int32 FindMember(::UnityEngine::Transform* IMLLDOHDCNC)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FINDMEMBER_OFFSET))(this, IMLLDOHDCNC);
		}

		::UnityEngine::BoundingSphere GetWeightedBoundsForMember(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4 FHJNHDKHPLG)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(this, FHJNHDKHPLG);
		}

		::System::Void DoUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ONVALIDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4 FHJNHDKHPLG, ::UnityEngine::Vector2& FLFANKEBFAK, ::UnityEngine::Vector2& NNLMBHLDCAI, ::UnityEngine::Vector2& EMFHDPIEBLN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(this, FHJNHDKHPLG, FLFANKEBFAK, NNLMBHLDCAI, EMFHDPIEBLN);
		}

		::System::Void DOAFCDJGCCF(::UnityEngine::Bounds EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_DOAFCDJGCCF_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::UnityEngine::BoundingSphere KLADGJAPHNL(::MoleMole::Cameras::VCameraTargetGroup_Target IMLLDOHDCNC, ::UnityEngine::Vector3 OOEAGOBMEFO, ::System::Single PMGAHEECCFB)
		{
			return ((::UnityEngine::BoundingSphere(*)(::MoleMole::Cameras::VCameraTargetGroup_Target, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_KLADGJAPHNL_OFFSET))(IMLLDOHDCNC, OOEAGOBMEFO, PMGAHEECCFB);
		}

		::UnityEngine::Vector3 ABKFIPFDHAH(::System::Single& PMGAHEECCFB)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_ABKFIPFDHAH_OFFSET))(this, PMGAHEECCFB);
		}

		::UnityEngine::Bounds BEIFHACHGPP(::UnityEngine::Vector3 OOEAGOBMEFO, ::System::Single PMGAHEECCFB)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_BEIFHACHGPP_OFFSET))(this, OOEAGOBMEFO, PMGAHEECCFB);
		}

		::UnityEngine::Quaternion OIFHKMMJBHB()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERATARGETGROUP_OIFHKMMJBHB_OFFSET))(this);
		}
	};
}
