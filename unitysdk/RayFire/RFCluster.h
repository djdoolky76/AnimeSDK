#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFCLUSTER_ADDCHILDCLUSTER_OFFSET UNITYSDK_OFFSET(0x29D8BE0)
#define RAYFIRE_RFCLUSTER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x29D8CA0)
#define RAYFIRE_RFCLUSTER_CONNECTIVITYCHECK_OFFSET UNITYSDK_OFFSET(0x29D8E50)
#define RAYFIRE_RFCLUSTER_CONNECTIVITYUNYCHECK_OFFSET UNITYSDK_OFFSET(0x29D92B0)
#define RAYFIRE_RFCLUSTER_CREATECLUSTERROOT_OFFSET UNITYSDK_OFFSET(0x29D97B0)
#define RAYFIRE_RFCLUSTER_GETBIGGESTCLUSTER_OFFSET UNITYSDK_OFFSET(0x29D98C0)
#define RAYFIRE_RFCLUSTER_GETBOUNDSBOUND_OFFSET UNITYSDK_OFFSET(0x29D99A0)
#define RAYFIRE_RFCLUSTER_GETCHILDRENBOUND_OFFSET UNITYSDK_OFFSET(0x29D9E60)
#define RAYFIRE_RFCLUSTER_GETCLUSTERBOUND_OFFSET UNITYSDK_OFFSET(0x29DA040)
#define RAYFIRE_RFCLUSTER_GETNEIBCLUSTERAREA_OFFSET UNITYSDK_OFFSET(0x29DA2D0)
#define RAYFIRE_RFCLUSTER_GETNEIBINDAREA_OFFSET UNITYSDK_OFFSET(0x29DA650)
#define RAYFIRE_RFCLUSTER_GETNESTEDSHARDS_OFFSET UNITYSDK_OFFSET(0x29DA7A0)
#define RAYFIRE_RFCLUSTER_GETSHARDSBOUND_OFFSET UNITYSDK_OFFSET(0x29DA950)
#define RAYFIRE_RFCLUSTER_GETSOLOSHARDS_OFFSET UNITYSDK_OFFSET(0x29DAE80)
#define RAYFIRE_RFCLUSTER_GETUNIQCLUSTERID_OFFSET UNITYSDK_OFFSET(0x29DAFE0)
#define RAYFIRE_RFCLUSTER_GET_HASCHILDCLUSTERS_OFFSET UNITYSDK_OFFSET(0x29DCE90)
#define RAYFIRE_RFCLUSTER_GET_UNYIELDINGBYRIGID_OFFSET UNITYSDK_OFFSET(0x29DCEE0)
#define RAYFIRE_RFCLUSTER_GET_UNYIELDINGBYSHARD_OFFSET UNITYSDK_OFFSET(0x29DCF90)
#define RAYFIRE_RFCLUSTER_INITCLUSTER_OFFSET UNITYSDK_OFFSET(0x29DB0C0)
#define RAYFIRE_RFCLUSTER_INTEGRITYCHECK_OFFSET UNITYSDK_OFFSET(0x29DB340)
#define RAYFIRE_RFCLUSTER_NEIBAREA_OFFSET UNITYSDK_OFFSET(0x29DB430)
#define RAYFIRE_RFCLUSTER_NEWCLUSTERBYSHARDS_OFFSET UNITYSDK_OFFSET(0x29DB7B0)
#define RAYFIRE_RFCLUSTER_REDUCECHILDCLUSTERS_OFFSET UNITYSDK_OFFSET(0x29DB940)
#define RAYFIRE_RFCLUSTER_SETCLUSTERNEIB_OFFSET UNITYSDK_OFFSET(0x29DBB40)
#define RAYFIRE_RFCLUSTER_TRISNEIB_OFFSET UNITYSDK_OFFSET(0x29DC420)
#define RAYFIRE_RFCLUSTER_UNFOLDNESTEDCLUSTER_OFFSET UNITYSDK_OFFSET(0x29DC740)
#define RAYFIRE_RFCLUSTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29DCD90)
#define RAYFIRE_RFCLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x29DCA40)

namespace RayFire
{
	inline static constexpr unsigned int RFCluster_TypeDefinitionIndex = 15732;

	class RFCluster : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* tm; // 0x18
		::System::Int32 depth; // 0x20
		::UnityEngine::Vector3 pos; // 0x24
		::UnityEngine::Quaternion rot; // 0x30
		::UnityEngine::B3A7F113FE1DE383 bound; // 0x40
		::System::Boolean demolishable; // 0x58
		::System::Byte _padding1[0x7];
		::RayFire::RayfireRigid* rigid; // 0x60
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* shards; // 0x68
		::System::Single areaCollapse; // 0x70
		::System::Single minimumArea; // 0x74
		::System::Single maximumArea; // 0x78
		::System::Single sizeCollapse; // 0x7C
		::System::Single minimumSize; // 0x80
		::System::Single maximumSize; // 0x84
		::System::Int32 randomCollapse; // 0x88
		::System::Int32 randomSeed; // 0x8C
		::System::Boolean initialized; // 0x90
		::System::Byte _padding2[0x7];
		::RayFire::RFCluster* mainCluster; // 0x98
		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* childClusters; // 0xA0
		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* neibClusters; // 0xA8
		::System::Collections::Generic::List_1<::System::Single>* neibArea; // 0xB0
		::System::Collections::Generic::List_1<::System::Single>* neibPerc; // 0xB8

		static ::System::Void GetSoloShards(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* AE8A8864D80707AE)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETSOLOSHARDS_OFFSET))(BE27CDF41D2DFAAD, AE8A8864D80707AE);
		}

		static ::System::Void NewClusterByShards(::RayFire::RFCluster* F7A3FD6C9C1D2F47, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_NEWCLUSTERBYSHARDS_OFFSET))(F7A3FD6C9C1D2F47, BB1C78C5B2F8C7AD);
		}

		static ::UnityEngine::B3A7F113FE1DE383 GetShardsBound(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD)
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETSHARDSBOUND_OFFSET))(BB1C78C5B2F8C7AD);
		}

		::System::Void AddChildCluster(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_ADDCHILDCLUSTER_OFFSET))(this, BE27CDF41D2DFAAD);
		}

		static ::System::Void SetClusterNeib(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133, ::System::Boolean B4EF92D0FD50125B)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFCluster*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_SETCLUSTERNEIB_OFFSET))(B0AC66CB75A55133, B4EF92D0FD50125B);
		}

		::System::Void _ctor(::RayFire::RFCluster* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER__CTOR_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Boolean get_HasChildClusters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GET_HASCHILDCLUSTERS_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER__CTOR_1_OFFSET))(this);
		}

		static ::UnityEngine::B3A7F113FE1DE383 GetBoundsBound(::System::Collections::Generic::List_1<::UnityEngine::B3A7F113FE1DE383>* BB64C3C370C6282A)
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::System::Collections::Generic::List_1<::UnityEngine::B3A7F113FE1DE383>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETBOUNDSBOUND_OFFSET))(BB64C3C370C6282A);
		}

		::System::Boolean get_UnyieldingByShard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GET_UNYIELDINGBYSHARD_OFFSET))(this);
		}

		static ::System::Void InitCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_INITCLUSTER_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		::System::Int32 CompareTo(::RayFire::RFCluster* BF68C9A299CF6061)
		{
			return ((::System::Int32(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_COMPARETO_OFFSET))(this, BF68C9A299CF6061);
		}

		static ::System::Int32 GetUniqClusterId(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Int32(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETUNIQCLUSTERID_OFFSET))(BE27CDF41D2DFAAD);
		}

		static ::RayFire::RFCluster* GetNeibClusterArea(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>* E66812180EE3F073)
		{
			return ((::RayFire::RFCluster*(*)(::System::Collections::Generic::List_1<::RayFire::RFCluster*>*, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETNEIBCLUSTERAREA_OFFSET))(B0AC66CB75A55133, E66812180EE3F073);
		}

		static ::System::Void CreateClusterRoot(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion FBF9C1F5AF32571D, ::System::Int32 A7443E7D25D3D43B, ::System::String* AE57FF5179B75168, ::System::String* B8E27A9A0B5FA8A3)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_CREATECLUSTERROOT_OFFSET))(BE27CDF41D2DFAAD, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D, A7443E7D25D3D43B, AE57FF5179B75168, B8E27A9A0B5FA8A3);
		}

		static ::System::Void UnfoldNestedCluster(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_UNFOLDNESTEDCLUSTER_OFFSET))(F2C7FF5A19F78852, BE27CDF41D2DFAAD);
		}

		static ::System::Void ReduceChildClusters(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_REDUCECHILDCLUSTERS_OFFSET))(BE27CDF41D2DFAAD);
		}

		::System::Collections::Generic::List_1<::RayFire::RFShard*>* GetNestedShards(::System::Boolean F1185386A09BBC47)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETNESTEDSHARDS_OFFSET))(this, F1185386A09BBC47);
		}

		static ::UnityEngine::B3A7F113FE1DE383 GetClusterBound(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETCLUSTERBOUND_OFFSET))(BE27CDF41D2DFAAD);
		}

		static ::System::Void ConnectivityUnyCheck(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_CONNECTIVITYUNYCHECK_OFFSET))(BE27CDF41D2DFAAD);
		}

		static ::System::Boolean IntegrityCheck(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Boolean(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_INTEGRITYCHECK_OFFSET))(BE27CDF41D2DFAAD);
		}

		::System::Int32 GetNeibIndArea(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* E66812180EE3F073)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETNEIBINDAREA_OFFSET))(this, E66812180EE3F073);
		}

		::System::Boolean TrisNeib(::RayFire::RFCluster* BF68C9A299CF6061)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_TRISNEIB_OFFSET))(this, BF68C9A299CF6061);
		}

		static ::System::Int32 GetBiggestCluster(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETBIGGESTCLUSTER_OFFSET))(B0AC66CB75A55133);
		}

		static ::UnityEngine::B3A7F113FE1DE383 GetChildrenBound(::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GETCHILDRENBOUND_OFFSET))(F64C72FFEBBF3A94);
		}

		::System::Boolean get_UnyieldingByRigid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_GET_UNYIELDINGBYRIGID_OFFSET))(this);
		}

		::System::Single NeibArea(::RayFire::RFCluster* BF68C9A299CF6061)
		{
			return ((::System::Single(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_NEIBAREA_OFFSET))(this, BF68C9A299CF6061);
		}

		static ::System::Void ConnectivityCheck(::RayFire::RFCluster* BE27CDF41D2DFAAD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCLUSTER_CONNECTIVITYCHECK_OFFSET))(BE27CDF41D2DFAAD);
		}
	};
}
