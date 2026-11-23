#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/E2EEE0C6FA205E04.h"
#include "unitysdk/E33DBE3D45A5731A/E4B3ACAD5A9792E3.h"
#include "unitysdk/E33DBE3D45A5731A/EA13F019F5C08611.h"
#include "unitysdk/RayFire/RayfireRigid_E8A1E5BB691974C3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A61327B7FA5DEDD8;
class A691754963E04BF0;
class A693FA192F61C7CB;
namespace RayFire { class RFActivation; }
namespace RayFire { class RFDamage; }
namespace RayFire { class RFDemolitionCluster; }
namespace RayFire { class RFDemolitionMesh; }
namespace RayFire { class RFDictionary; }
namespace RayFire { class RFFade; }
namespace RayFire { class RFLimitations; }
namespace RayFire { class RFMesh; }
namespace RayFire { class RFPhysic; }
namespace RayFire { class RFReferenceDemolition; }
namespace RayFire { class RFReset; }
namespace RayFire { class RFSurface; }
namespace RayFire { class RayfireDebris; }
namespace RayFire { class RayfireDust; }
namespace RayFire { class RayfireRestriction; }
namespace RayFire { class RayfireSound; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class A0522E4C9CA72129; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRERIGID_A021B1BE2BC086C2_OFFSET UNITYSDK_OFFSET(0x29C7BB0)
#define RAYFIRE_RAYFIRERIGID_A234C1AEB53911F0_OFFSET UNITYSDK_OFFSET(0x29C9740)
#define RAYFIRE_RAYFIRERIGID_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x29C9B40)
#define RAYFIRE_RAYFIRERIGID_A34A6C23D3B4993D_OFFSET UNITYSDK_OFFSET(0x29CB2C0)
#define RAYFIRE_RAYFIRERIGID_A59DFBF2B6127940_OFFSET UNITYSDK_OFFSET(0x29C7C30)
#define RAYFIRE_RAYFIRERIGID_A68B14859FCEDEDF_OFFSET UNITYSDK_OFFSET(0x29C98E0)
#define RAYFIRE_RAYFIRERIGID_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x29C9A40)
#define RAYFIRE_RAYFIRERIGID_A8D6288880D938DA_OFFSET UNITYSDK_OFFSET(0x29C9ED0)
#define RAYFIRE_RAYFIRERIGID_A8F21E419EBF0540_OFFSET UNITYSDK_OFFSET(0x29CA640)
#define RAYFIRE_RAYFIRERIGID_A9102E2367C7116B_OFFSET UNITYSDK_OFFSET(0x29C9EE0)
#define RAYFIRE_RAYFIRERIGID_AA09D5804318FE96_OFFSET UNITYSDK_OFFSET(0x29CA750)
#define RAYFIRE_RAYFIRERIGID_AB1441CA4D0BDD1D_OFFSET UNITYSDK_OFFSET(0x29C9AF0)
#define RAYFIRE_RAYFIRERIGID_AC28706C2A12CE1A_OFFSET UNITYSDK_OFFSET(0x29C82B0)
#define RAYFIRE_RAYFIRERIGID_AEDBA4A4CA293AB1_OFFSET UNITYSDK_OFFSET(0x29CB380)
#define RAYFIRE_RAYFIRERIGID_B00E4137AA67505C_OFFSET UNITYSDK_OFFSET(0x29C9830)
#define RAYFIRE_RAYFIRERIGID_B19BC22BD783B492_OFFSET UNITYSDK_OFFSET(0x29CB360)
#define RAYFIRE_RAYFIRERIGID_B4096F16994E3C08_OFFSET UNITYSDK_OFFSET(0x29C96F0)
#define RAYFIRE_RAYFIRERIGID_B58CAF4A18D694BD_OFFSET UNITYSDK_OFFSET(0x29C8870)
#define RAYFIRE_RAYFIRERIGID_B71964E73A6DC739_OFFSET UNITYSDK_OFFSET(0x29C93D0)
#define RAYFIRE_RAYFIRERIGID_B7F6031F2EDF5050_OFFSET UNITYSDK_OFFSET(0x29C97E0)
#define RAYFIRE_RAYFIRERIGID_B91DAD7646D5EC01_OFFSET UNITYSDK_OFFSET(0x29C9BD0)
#define RAYFIRE_RAYFIRERIGID_BA4F597E6822876C_OFFSET UNITYSDK_OFFSET(0x29C8160)
#define RAYFIRE_RAYFIRERIGID_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x29C9B80)
#define RAYFIRE_RAYFIRERIGID_E0AE08CA063AB631_OFFSET UNITYSDK_OFFSET(0x29C9F80)
#define RAYFIRE_RAYFIRERIGID_E33053AA80B65866_OFFSET UNITYSDK_OFFSET(0x29C8010)
#define RAYFIRE_RAYFIRERIGID_E37FFAC52F2A5DAF_OFFSET UNITYSDK_OFFSET(0x29C8CF0)
#define RAYFIRE_RAYFIRERIGID_E7568203E2437848_OFFSET UNITYSDK_OFFSET(0x29CA510)
#define RAYFIRE_RAYFIRERIGID_E7C7057A9EF069B7_OFFSET UNITYSDK_OFFSET(0x29CB310)
#define RAYFIRE_RAYFIRERIGID_E884EEADB8F7729F_OFFSET UNITYSDK_OFFSET(0x29C8DB0)
#define RAYFIRE_RAYFIRERIGID_E8D1E345B5CCA4CE_OFFSET UNITYSDK_OFFSET(0x29CABD0)
#define RAYFIRE_RAYFIRERIGID_EE394D34B7EAC5FC_OFFSET UNITYSDK_OFFSET(0x29C9A90)
#define RAYFIRE_RAYFIRERIGID_EF2E6918210D1E4E_OFFSET UNITYSDK_OFFSET(0x29C8B70)
#define RAYFIRE_RAYFIRERIGID_EFE4D6111C0D3562_OFFSET UNITYSDK_OFFSET(0x29CAB30)
#define RAYFIRE_RAYFIRERIGID_F44AAE1A189DB295_OFFSET UNITYSDK_OFFSET(0x29CB270)
#define RAYFIRE_RAYFIRERIGID_F4729B50BC507256_OFFSET UNITYSDK_OFFSET(0x29CAD30)
#define RAYFIRE_RAYFIRERIGID_F4751C68542F1385_OFFSET UNITYSDK_OFFSET(0x29CA290)
#define RAYFIRE_RAYFIRERIGID_F5295FB3D82F7051_OFFSET UNITYSDK_OFFSET(0x29C7AE0)
#define RAYFIRE_RAYFIRERIGID_F56FC1C045ED6238_OFFSET UNITYSDK_OFFSET(0x29CB1F0)
#define RAYFIRE_RAYFIRERIGID_F5BA36D8513AC5CE_OFFSET UNITYSDK_OFFSET(0x29C7C60)
#define RAYFIRE_RAYFIRERIGID_F793EBF4E3935F0E_OFFSET UNITYSDK_OFFSET(0x29C81A0)
#define RAYFIRE_RAYFIRERIGID_F8EE656876D878A2_OFFSET UNITYSDK_OFFSET(0x29C8070)
#define RAYFIRE_RAYFIRERIGID_FA4602E5C3585760_OFFSET UNITYSDK_OFFSET(0x29CB3A0)
#define RAYFIRE_RAYFIRERIGID_FB7A652BA2590B0A_OFFSET UNITYSDK_OFFSET(0x29C8EF0)
#define RAYFIRE_RAYFIRERIGID_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29C80E0)
#define RAYFIRE_RAYFIRERIGID_FE01C187E7B4C143_OFFSET UNITYSDK_OFFSET(0x29C9790)
#define RAYFIRE_RAYFIRERIGID__CTOR_OFFSET UNITYSDK_OFFSET(0x29CAED0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireRigid_TypeDefinitionIndex = 15650;

	class RayfireRigid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireRigid_E8A1E5BB691974C3 initialization; // 0x20
		::E33DBE3D45A5731A::EA13F019F5C08611 simulationType; // 0x24
		::E33DBE3D45A5731A::E2EEE0C6FA205E04 objectType; // 0x28
		::E33DBE3D45A5731A::E4B3ACAD5A9792E3 demolitionType; // 0x2C
		::RayFire::RFPhysic* physics; // 0x30
		::RayFire::RFActivation* activation; // 0x38
		::RayFire::RFLimitations* limitations; // 0x40
		::RayFire::RFDemolitionMesh* meshDemolition; // 0x48
		::RayFire::RFDemolitionCluster* clusterDemolition; // 0x50
		::RayFire::RFReferenceDemolition* referenceDemolition; // 0x58
		::RayFire::RFSurface* materials; // 0x60
		::RayFire::RFDamage* damage; // 0x68
		::RayFire::RFFade* fading; // 0x70
		::RayFire::RFReset* reset; // 0x78
		::System::Boolean initialized; // 0x80
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Mesh*>* meshes; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* pivots; // 0x90
		::Il2CppArray<::RayFire::RFMesh*>* rfMeshes; // 0x98
		::System::Collections::Generic::List_1<::RayFire::RFDictionary*>* subIds; // 0xA0
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* fragments; // 0xA8
		::UnityEngine::Quaternion cacheRotation; // 0xB0
		::UnityEngine::Transform* transForm; // 0xC0
		::UnityEngine::Transform* rootChild; // 0xC8
		::UnityEngine::Transform* rootParent; // 0xD0
		::UnityEngine::MeshFilter* meshFilter; // 0xD8
		::UnityEngine::MeshRenderer* meshRenderer; // 0xE0
		::UnityEngine::SkinnedMeshRenderer* skinnedMeshRend; // 0xE8
		::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* debrisList; // 0xF0
		::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* dustList; // 0xF8
		::RayFire::RayfireRestriction* restriction; // 0x100
		::RayFire::RayfireSound* sound; // 0x108
		::A61327B7FA5DEDD8* demolitionEvent; // 0x110
		::A693FA192F61C7CB* activationEvent; // 0x118
		::A691754963E04BF0* restrictionEvent; // 0x120

		::System::Void E33053AA80B65866()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E33053AA80B65866_OFFSET))(this);
		}

		::System::Void EE394D34B7EAC5FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_EE394D34B7EAC5FC_OFFSET))(this);
		}

		::System::Void A68B14859FCEDEDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A68B14859FCEDEDF_OFFSET))(this);
		}

		::System::Void AB1441CA4D0BDD1D(::UnityEngine::A0522E4C9CA72129* A93B84CCFFF2684D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::A0522E4C9CA72129*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_AB1441CA4D0BDD1D_OFFSET))(this, A93B84CCFFF2684D);
		}

		::System::Boolean B19BC22BD783B492()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B19BC22BD783B492_OFFSET))(this);
		}

		::System::Void F5BA36D8513AC5CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F5BA36D8513AC5CE_OFFSET))(this);
		}

		::System::Boolean B71964E73A6DC739()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B71964E73A6DC739_OFFSET))(this);
		}

		::System::Void E0AE08CA063AB631()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E0AE08CA063AB631_OFFSET))(this);
		}

		::System::Boolean A34A6C23D3B4993D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A34A6C23D3B4993D_OFFSET))(this);
		}

		::System::Boolean F4729B50BC507256()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F4729B50BC507256_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A788EA8D7C189191_OFFSET))(this);
		}

		::System::Void F5295FB3D82F7051(::System::Boolean E9AAE645E1CD3B09)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F5295FB3D82F7051_OFFSET))(this, E9AAE645E1CD3B09);
		}

		::System::Void A9102E2367C7116B(::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A9102E2367C7116B_OFFSET))(this, E5EB06E4FD2C32F7);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void B4096F16994E3C08(::UnityEngine::Collider* E955C02910D334F4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B4096F16994E3C08_OFFSET))(this, E955C02910D334F4);
		}

		::System::Boolean AA09D5804318FE96()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_AA09D5804318FE96_OFFSET))(this);
		}

		::System::Boolean AC28706C2A12CE1A(::UnityEngine::A0522E4C9CA72129* A93B84CCFFF2684D)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::A0522E4C9CA72129*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_AC28706C2A12CE1A_OFFSET))(this, A93B84CCFFF2684D);
		}

		::System::Void FB7A652BA2590B0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_FB7A652BA2590B0A_OFFSET))(this);
		}

		::System::Void F793EBF4E3935F0E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F793EBF4E3935F0E_OFFSET))(this);
		}

		::System::Void F4751C68542F1385()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F4751C68542F1385_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E37FFAC52F2A5DAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E37FFAC52F2A5DAF_OFFSET))(this);
		}

		::System::Void B7F6031F2EDF5050(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B7F6031F2EDF5050_OFFSET))(this, E9D1ABA13C0D414F);
		}

		::System::Boolean FA4602E5C3585760()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_FA4602E5C3585760_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Single F56FC1C045ED6238()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F56FC1C045ED6238_OFFSET))(this);
		}

		::System::Void A8F21E419EBF0540()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A8F21E419EBF0540_OFFSET))(this);
		}

		::System::Void FE01C187E7B4C143(::UnityEngine::Rigidbody* B95004E2EDA16D16)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_FE01C187E7B4C143_OFFSET))(this, B95004E2EDA16D16);
		}

		::System::Void E884EEADB8F7729F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E884EEADB8F7729F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID__CTOR_OFFSET))(this);
		}

		::System::Void A021B1BE2BC086C2(::Il2CppArray<::UnityEngine::Vector3>* EA2F00A6757C737E)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A021B1BE2BC086C2_OFFSET))(this, EA2F00A6757C737E);
		}

		::System::Void EFE4D6111C0D3562()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_EFE4D6111C0D3562_OFFSET))(this);
		}

		::System::Void B91DAD7646D5EC01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B91DAD7646D5EC01_OFFSET))(this);
		}

		::System::Void E8D1E345B5CCA4CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E8D1E345B5CCA4CE_OFFSET))(this);
		}

		::System::Void EF2E6918210D1E4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_EF2E6918210D1E4E_OFFSET))(this);
		}

		::System::Boolean A59DFBF2B6127940(::System::Single EF0556457E94F108, ::UnityEngine::Vector3 E3B3B74A1052390C, ::System::Single BB4CC9C82411811E)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A59DFBF2B6127940_OFFSET))(this, EF0556457E94F108, E3B3B74A1052390C, BB4CC9C82411811E);
		}

		::System::Void A8D6288880D938DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A8D6288880D938DA_OFFSET))(this);
		}

		::System::Void A234C1AEB53911F0(::UnityEngine::GameObject* AD1247287D2D9217)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_A234C1AEB53911F0_OFFSET))(this, AD1247287D2D9217);
		}

		::System::Void B00E4137AA67505C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B00E4137AA67505C_OFFSET))(this);
		}

		::System::Boolean E7C7057A9EF069B7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E7C7057A9EF069B7_OFFSET))(this);
		}

		::System::Void B58CAF4A18D694BD(::RayFire::RayfireRigid* FEA8E87C1F9B53C4)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_B58CAF4A18D694BD_OFFSET))(this, FEA8E87C1F9B53C4);
		}

		::System::Void E7568203E2437848()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_E7568203E2437848_OFFSET))(this);
		}

		::System::Void F8EE656876D878A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F8EE656876D878A2_OFFSET))(this);
		}

		::System::Void BA4F597E6822876C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_BA4F597E6822876C_OFFSET))(this);
		}

		::System::Boolean AEDBA4A4CA293AB1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_AEDBA4A4CA293AB1_OFFSET))(this);
		}

		::System::Boolean F44AAE1A189DB295()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERIGID_F44AAE1A189DB295_OFFSET))(this);
		}
	};
}
