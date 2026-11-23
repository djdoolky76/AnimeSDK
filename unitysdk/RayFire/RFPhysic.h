#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/B0F5C6D9FFA2FAED.h"
#include "unitysdk/E33DBE3D45A5731A/E2EEE0C6FA205E04.h"
#include "unitysdk/E33DBE3D45A5731A/E46A0C3D63E1BC03.h"
#include "unitysdk/E33DBE3D45A5731A/EA13F019F5C08611.h"
#include "unitysdk/E33DBE3D45A5731A/FAA1550E94DEA92B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFCluster; }
namespace RayFire { class RFShard; }
namespace RayFire { class RayfireDebris; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireRigidRoot; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class PhysicMaterial; }
namespace UnityEngine { class Rigidbody; }

#define RAYFIRE_RFPHYSIC_COLLECTCLUSTERCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x2958BE0)
#define RAYFIRE_RFPHYSIC_COLLECTDEEPCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x2958D00)
#define RAYFIRE_RFPHYSIC_COLLIDERSREMOVENULL_OFFSET UNITYSDK_OFFSET(0x2958E80)
#define RAYFIRE_RFPHYSIC_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2958FD0)
#define RAYFIRE_RFPHYSIC_GET_DESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x295B3A0)
#define RAYFIRE_RFPHYSIC_GET_HASCLUSTERCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x295B410)
#define RAYFIRE_RFPHYSIC_GET_PHYSMATERIAL_OFFSET UNITYSDK_OFFSET(0x295B460)
#define RAYFIRE_RFPHYSIC_GET_SOLIDITY_OFFSET UNITYSDK_OFFSET(0x295B4E0)
#define RAYFIRE_RFPHYSIC_MASSLIMIT_OFFSET UNITYSDK_OFFSET(0x2959040)
#define RAYFIRE_RFPHYSIC_PHYSICSDATACOR_OFFSET UNITYSDK_OFFSET(0x29591B0)
#define RAYFIRE_RFPHYSIC_RESET_OFFSET UNITYSDK_OFFSET(0x2959240)
#define RAYFIRE_RFPHYSIC_SETCLUSTERCOLLIDERSBYSHARDS_OFFSET UNITYSDK_OFFSET(0x2959250)
#define RAYFIRE_RFPHYSIC_SETCOLLIDERCONVEX_OFFSET UNITYSDK_OFFSET(0x2959500)
#define RAYFIRE_RFPHYSIC_SETCOLLIDERMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x29597C0)
#define RAYFIRE_RFPHYSIC_SETCOLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x2959630)
#define RAYFIRE_RFPHYSIC_SETDEEPSHARDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x29598D0)
#define RAYFIRE_RFPHYSIC_SETDENSITY_1_OFFSET UNITYSDK_OFFSET(0x2959E30)
#define RAYFIRE_RFPHYSIC_SETDENSITY_OFFSET UNITYSDK_OFFSET(0x29599D0)
#define RAYFIRE_RFPHYSIC_SETDRAG_1_OFFSET UNITYSDK_OFFSET(0x2959F20)
#define RAYFIRE_RFPHYSIC_SETDRAG_OFFSET UNITYSDK_OFFSET(0x2959F80)
#define RAYFIRE_RFPHYSIC_SETDYNAMIC_OFFSET UNITYSDK_OFFSET(0x295A080)
#define RAYFIRE_RFPHYSIC_SETFRAGMENTMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x295A0C0)
#define RAYFIRE_RFPHYSIC_SETFRAGMENTSVELOCITY_OFFSET UNITYSDK_OFFSET(0x295A2A0)
#define RAYFIRE_RFPHYSIC_SETINACTIVE_OFFSET UNITYSDK_OFFSET(0x295A610)
#define RAYFIRE_RFPHYSIC_SETKINEMATIC_OFFSET UNITYSDK_OFFSET(0x295A650)
#define RAYFIRE_RFPHYSIC_SETMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x295A6A0)
#define RAYFIRE_RFPHYSIC_SETPARTICLECOLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x295ABC0)
#define RAYFIRE_RFPHYSIC_SETSHARDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x295ACC0)
#define RAYFIRE_RFPHYSIC_SETSIMULATIONTYPE_OFFSET UNITYSDK_OFFSET(0x295AF00)
#define RAYFIRE_RFPHYSIC_SETSLEEPING_OFFSET UNITYSDK_OFFSET(0x295B160)
#define RAYFIRE_RFPHYSIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x295B1B0)
#define RAYFIRE_RFPHYSIC__CTOR_OFFSET UNITYSDK_OFFSET(0x295B1F0)

namespace RayFire
{
	inline static constexpr unsigned int RFPhysic_TypeDefinitionIndex = 15435;

	class RFPhysic : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_coplanarVertLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RFPhysic_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::E33DBE3D45A5731A::B0F5C6D9FFA2FAED materialType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::PhysicMaterial* material; // 0x18
		::E33DBE3D45A5731A::E46A0C3D63E1BC03 massBy; // 0x20
		::System::Single mass; // 0x24
		::E33DBE3D45A5731A::FAA1550E94DEA92B colliderType; // 0x28
		::System::Boolean planarCheck; // 0x2C
		::System::Boolean useGravity; // 0x2D
		::System::Byte _padding1[0x2];
		::System::Single dampening; // 0x30
		::System::Byte _padding2[0x4];
		::UnityEngine::Rigidbody* rigidBody; // 0x38
		::UnityEngine::Collider* meshCollider; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* clusterColliders; // 0x48
		::System::Boolean rec; // 0x50
		::System::Boolean exclude; // 0x51
		::System::Byte _padding3[0x2];
		::System::Int32 solidity; // 0x54
		::System::Boolean destructible; // 0x58
		::System::Boolean physicsDataCorState; // 0x59
		::System::Byte _padding4[0x2];
		::UnityEngine::Quaternion rotation; // 0x5C
		::UnityEngine::Vector3 position; // 0x6C
		::UnityEngine::Vector3 velocity; // 0x78
		::UnityEngine::Vector3 initScale; // 0x84
		::UnityEngine::Vector3 initPosition; // 0x90
		::UnityEngine::Quaternion initRotation; // 0x9C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC__CCTOR_OFFSET))();
		}

		::System::Void CollidersRemoveNull(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_COLLIDERSREMOVENULL_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void SetParticleColliderMaterial(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* B339D225BCBFDE30)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETPARTICLECOLLIDERMATERIAL_OFFSET))(B339D225BCBFDE30);
		}

		static ::System::Void SetSimulationType(::UnityEngine::Rigidbody* B95004E2EDA16D16, ::E33DBE3D45A5731A::EA13F019F5C08611 F6226127DC109D15, ::E33DBE3D45A5731A::E2EEE0C6FA205E04 A45745FB9DD90642, ::System::Boolean EAC69775045A8A7D)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::E33DBE3D45A5731A::EA13F019F5C08611, ::E33DBE3D45A5731A::E2EEE0C6FA205E04, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETSIMULATIONTYPE_OFFSET))(B95004E2EDA16D16, F6226127DC109D15, A45745FB9DD90642, EAC69775045A8A7D);
		}

		::System::Void CopyFrom(::RayFire::RFPhysic* A10380137CC9580E)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFPhysic*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_COPYFROM_OFFSET))(this, A10380137CC9580E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Solidity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_GET_SOLIDITY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_RESET_OFFSET))(this);
		}

		static ::System::Void SetDensity(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDENSITY_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void CollectDeepColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_COLLECTDEEPCOLLIDERS_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		static ::System::Void SetDensity_1(::RayFire::RayfireRigidRoot* F2C7FF5A19F78852, ::RayFire::RFShard* A9B58EA01420571C, ::System::Single A855A2BD85572975)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDENSITY_1_OFFSET))(F2C7FF5A19F78852, A9B58EA01420571C, A855A2BD85572975);
		}

		static ::System::Void SetColliderMaterial(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETCOLLIDERMATERIAL_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetSleeping(::UnityEngine::Rigidbody* B95004E2EDA16D16, ::System::Boolean EAC69775045A8A7D)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETSLEEPING_OFFSET))(B95004E2EDA16D16, EAC69775045A8A7D);
		}

		static ::System::Void SetInactive(::UnityEngine::Rigidbody* B95004E2EDA16D16)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETINACTIVE_OFFSET))(B95004E2EDA16D16);
		}

		static ::System::Boolean SetClusterCollidersByShards(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETCLUSTERCOLLIDERSBYSHARDS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetMeshCollider(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::Mesh* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETMESHCOLLIDER_OFFSET))(F2C7FF5A19F78852, FF762A0FE86505A5);
		}

		static ::System::Void SetKinematic(::UnityEngine::Rigidbody* B95004E2EDA16D16, ::System::Boolean EAC69775045A8A7D)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETKINEMATIC_OFFSET))(B95004E2EDA16D16, EAC69775045A8A7D);
		}

		::UnityEngine::PhysicMaterial* get_PhysMaterial()
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_GET_PHYSMATERIAL_OFFSET))(this);
		}

		static ::System::Single MassLimit(::System::Single B8A196AEAF73E28B)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_MASSLIMIT_OFFSET))(B8A196AEAF73E28B);
		}

		static ::System::Void CollectClusterColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_COLLECTCLUSTERCOLLIDERS_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		static ::System::Void SetFragmentMeshCollider(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::Mesh* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETFRAGMENTMESHCOLLIDER_OFFSET))(F2C7FF5A19F78852, FF762A0FE86505A5);
		}

		static ::System::Void SetFragmentsVelocity(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETFRAGMENTSVELOCITY_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Boolean get_Destructible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_GET_DESTRUCTIBLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PhysicsDataCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_PHYSICSDATACOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void SetColliderConvex(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETCOLLIDERCONVEX_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetDynamic(::UnityEngine::Rigidbody* B95004E2EDA16D16, ::System::Boolean EAC69775045A8A7D)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDYNAMIC_OFFSET))(B95004E2EDA16D16, EAC69775045A8A7D);
		}

		static ::System::Void SetDeepShardColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDEEPSHARDCOLLIDERS_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		static ::System::Void SetShardColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETSHARDCOLLIDERS_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		static ::System::Void SetDrag(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDRAG_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetDrag_1(::RayFire::RFShard* A9B58EA01420571C, ::System::Single F86939EE5D190C10, ::System::Single EB051CC3E7C54F79)
		{
			return ((::System::Void(*)(::RayFire::RFShard*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETDRAG_1_OFFSET))(A9B58EA01420571C, F86939EE5D190C10, EB051CC3E7C54F79);
		}

		static ::System::Void SetColliderMaterial_1(::RayFire::RayfireRigidRoot* F2C7FF5A19F78852, ::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigidRoot*, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_SETCOLLIDERMATERIAL_1_OFFSET))(F2C7FF5A19F78852, A9B58EA01420571C);
		}

		::System::Boolean get_HasClusterColliders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPHYSIC_GET_HASCLUSTERCOLLIDERS_OFFSET))(this);
		}
	};
}
