#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/F65B394BF159CB9F.h"
#include "unitysdk/RayFire/RFDemolitionCluster_A0C6FAF7B572B50E.h"
#include "unitysdk/System/Object.h"

class F66811657C4804CD;
namespace RayFire { class RFCluster; }
namespace RayFire { class RFCollapse; }
namespace RayFire { class RFShard; }
namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFDEMOLITIONCLUSTER_ADDRIGIDCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x29DD430)
#define RAYFIRE_RFDEMOLITIONCLUSTER_ADDRIGIDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x29DD030)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZECONNECTED_OFFSET UNITYSDK_OFFSET(0x29DD500)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZEDETACHSHARDS_OFFSET UNITYSDK_OFFSET(0x29DD790)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZENESTEDRECURSIVE_OFFSET UNITYSDK_OFFSET(0x29DDC50)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZENESTED_OFFSET UNITYSDK_OFFSET(0x29DDFE0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZE_OFFSET UNITYSDK_OFFSET(0x29DE2D0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29DE510)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CREATECHILDCLUSTERS_OFFSET UNITYSDK_OFFSET(0x29DE590)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CREATECLUSTERRUNTIME_OFFSET UNITYSDK_OFFSET(0x29DE680)
#define RAYFIRE_RFDEMOLITIONCLUSTER_CREATERIGIDSHARDS_OFFSET UNITYSDK_OFFSET(0x29DEF70)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCLUSTERNESTED_OFFSET UNITYSDK_OFFSET(0x29DF160)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCLUSTER_OFFSET UNITYSDK_OFFSET(0x29DF300)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCONNECTEDCLUSTER_OFFSET UNITYSDK_OFFSET(0x29DF590)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DETACHONENEIBSHARDS_OFFSET UNITYSDK_OFFSET(0x29DFA50)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DETACHONENEIBSHARD_OFFSET UNITYSDK_OFFSET(0x29DF780)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DETACHSHARDSBYCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x29DFB50)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DIVIDEALLSHARDS_OFFSET UNITYSDK_OFFSET(0x29E00F0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_DIVIDESHARDS_OFFSET UNITYSDK_OFFSET(0x29E0850)
#define RAYFIRE_RFDEMOLITIONCLUSTER_GETDETACHCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x29E0CD0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_GET_HASMINORCLUSTERS_OFFSET UNITYSDK_OFFSET(0x29E2B70)
#define RAYFIRE_RFDEMOLITIONCLUSTER_POSTDEMOLITIONCLUSTER_OFFSET UNITYSDK_OFFSET(0x29E0EF0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_RESET_OFFSET UNITYSDK_OFFSET(0x29E1190)
#define RAYFIRE_RFDEMOLITIONCLUSTER_SETUPPLANESHARDS_OFFSET UNITYSDK_OFFSET(0x29E11A0)
#define RAYFIRE_RFDEMOLITIONCLUSTER_SLICECONNECTEDCLUSTER_OFFSET UNITYSDK_OFFSET(0x29E1570)
#define RAYFIRE_RFDEMOLITIONCLUSTER_UPDATEORIGINALCLUSTER_OFFSET UNITYSDK_OFFSET(0x29E2720)
#define RAYFIRE_RFDEMOLITIONCLUSTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x29E2AB0)
#define RAYFIRE_RFDEMOLITIONCLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x29E2B10)

namespace RayFire
{
	inline static constexpr unsigned int RFDemolitionCluster_TypeDefinitionIndex = 15734;

	class RFDemolitionCluster : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_nameApp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RFDemolitionCluster_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::E33DBE3D45A5731A::F65B394BF159CB9F connectivity; // 0x10
		::System::Single minimumArea; // 0x14
		::System::Single minimumSize; // 0x18
		::System::Int32 percentage; // 0x1C
		::System::Int32 seed; // 0x20
		::RayFire::RFDemolitionCluster_A0C6FAF7B572B50E type; // 0x24
		::System::Int32 ratio; // 0x28
		::System::Single units; // 0x2C
		::System::Int32 shardArea; // 0x30
		::System::Boolean shardDemolition; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 minAmount; // 0x38
		::System::Int32 maxAmount; // 0x3C
		::System::Boolean demolishable; // 0x40
		::System::Byte _padding1[0x7];
		::RayFire::RFCollapse* collapse; // 0x48
		::System::Int32 clsCount; // 0x50
		::System::Byte _padding2[0x4];
		::RayFire::RFCluster* cluster; // 0x58
		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* minorClusters; // 0x60
		::System::Boolean cn; // 0x68
		::System::Boolean nd; // 0x69
		::System::Byte _padding3[0x2];
		::System::Int32 am; // 0x6C
		::F66811657C4804CD* backup; // 0x70
		::System::Single damageRadius; // 0x78

		static ::System::Void AddRigidComponent(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFShard* A9B58EA01420571C, ::UnityEngine::Transform* EFE497ABF6BF98D8)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFShard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_ADDRIGIDCOMPONENT_OFFSET))(F2C7FF5A19F78852, A9B58EA01420571C, EFE497ABF6BF98D8);
		}

		static ::System::Void PostDemolitionCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_POSTDEMOLITIONCLUSTER_OFFSET))(F2C7FF5A19F78852, AC87D190E883417A);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RFShard*>* DemolishConnectedCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::Il2CppArray<::UnityEngine::Collider*>* AFB89DA104B8E6F4)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::RayFire::RayfireRigid*, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCONNECTEDCLUSTER_OFFSET))(F2C7FF5A19F78852, AFB89DA104B8E6F4);
		}

		static ::System::Void ClusterizeNested(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZENESTED_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void DemolishClusterNested(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCLUSTERNESTED_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void DetachOneNeibShards(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* EC3AF7078E153F0F, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A, ::System::Int32 A3E7F77420C2481C, ::System::Int32 B11388950C465AE2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFCluster*>*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DETACHONENEIBSHARDS_OFFSET))(EC3AF7078E153F0F, AC87D190E883417A, A3E7F77420C2481C, B11388950C465AE2);
		}

		static ::System::Void AddRigidComponent_1(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* E9A1B4C47F1FFA0F, ::UnityEngine::Transform* EFE497ABF6BF98D8)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_ADDRIGIDCOMPONENT_1_OFFSET))(F2C7FF5A19F78852, E9A1B4C47F1FFA0F, EFE497ABF6BF98D8);
		}

		static ::System::Void ClusterizeNestedRecursive(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::Transform* E7A41DB667CBC570, ::RayFire::RFCluster* BE27CDF41D2DFAAD, ::E33DBE3D45A5731A::F65B394BF159CB9F B4EF92D0FD50125B)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::Transform*, ::RayFire::RFCluster*, ::E33DBE3D45A5731A::F65B394BF159CB9F))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZENESTEDRECURSIVE_OFFSET))(F2C7FF5A19F78852, E7A41DB667CBC570, BE27CDF41D2DFAAD, B4EF92D0FD50125B);
		}

		static ::System::Void SliceConnectedCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_SLICECONNECTEDCLUSTER_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void UpdateOriginalCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_UPDATEORIGINALCLUSTER_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetupPlaneShards(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* F7FCF3CC94FD997E, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_SETUPPLANESHARDS_OFFSET))(F2C7FF5A19F78852, F7FCF3CC94FD997E, AC87D190E883417A);
		}

		::System::Boolean get_HasMinorClusters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_GET_HASMINORCLUSTERS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RFShard*>* DetachShardsByColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::Il2CppArray<::UnityEngine::Collider*>* AFB89DA104B8E6F4)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::RayFire::RayfireRigid*, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DETACHSHARDSBYCOLLIDERS_OFFSET))(F2C7FF5A19F78852, AFB89DA104B8E6F4);
		}

		static ::System::Void CreateRigidShards(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CREATERIGIDSHARDS_OFFSET))(F2C7FF5A19F78852, AC87D190E883417A);
		}

		static ::System::Void ClusterizeConnected(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZECONNECTED_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER__CCTOR_OFFSET))();
		}

		::System::Void CopyFrom(::RayFire::RFDemolitionCluster* A271877B1AD84D9E)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFDemolitionCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_COPYFROM_OFFSET))(this, A271877B1AD84D9E);
		}

		static ::System::Void CreateChildClusters(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>* EC3AF7078E153F0F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CREATECHILDCLUSTERS_OFFSET))(F2C7FF5A19F78852, EC3AF7078E153F0F);
		}

		static ::System::Void DivideShards(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::RayFire::RFCluster* A9A93F3B0DD65831)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DIVIDESHARDS_OFFSET))(BE27CDF41D2DFAAD, A9A93F3B0DD65831);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* GetDetachColliders(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_GETDETACHCOLLIDERS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void DivideAllShards(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DIVIDEALLSHARDS_OFFSET))(BE27CDF41D2DFAAD, AC87D190E883417A, FCB91636572348CF);
		}

		static ::System::Boolean DemolishCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DEMOLISHCLUSTER_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void DetachOneNeibShard(::RayFire::RFCluster* A0E2DB9B6710F4BE, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_DETACHONENEIBSHARD_OFFSET))(A0E2DB9B6710F4BE, AC87D190E883417A);
		}

		static ::System::Void ClusterizeDetachShards(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AC87D190E883417A, ::System::Int32 A4C754808F4FA858, ::System::Int32 B106CAF25A0DC01C)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZEDETACHSHARDS_OFFSET))(F2C7FF5A19F78852, AC87D190E883417A, A4C754808F4FA858, B106CAF25A0DC01C);
		}

		static ::System::Boolean Clusterize(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CLUSTERIZE_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void CreateClusterRuntime(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_CREATECLUSTERRUNTIME_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONCLUSTER_RESET_OFFSET))(this);
		}
	};
}
