#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/EA13F019F5C08611.h"
#include "unitysdk/E33DBE3D45A5731A/F65B394BF159CB9F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/EBE7541DAF0BA279.h"

namespace RayFire { class RFCluster; }
namespace RayFire { class RFTriangle; }
namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFSHARD_CLEARNEIB_OFFSET UNITYSDK_OFFSET(0x2A0DCF0)
#define RAYFIRE_RFSHARD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2A0DDC0)
#define RAYFIRE_RFSHARD_GETSHARDBYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2A0DE00)
#define RAYFIRE_RFSHARD_GETSHARDSBYCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x2A0DEE0)
#define RAYFIRE_RFSHARD_GETSLICEPLANE_OFFSET UNITYSDK_OFFSET(0x2A0E040)
#define RAYFIRE_RFSHARD_GET_STRESSSTATE_OFFSET UNITYSDK_OFFSET(0x2A10670)
#define RAYFIRE_RFSHARD_NEIBAREA_OFFSET UNITYSDK_OFFSET(0x2A0E290)
#define RAYFIRE_RFSHARD_REINITNEIBS_OFFSET UNITYSDK_OFFSET(0x2A0E5A0)
#define RAYFIRE_RFSHARD_REMOVENEIBAT_OFFSET UNITYSDK_OFFSET(0x2A0E700)
#define RAYFIRE_RFSHARD_SETSHARDNEIBS_OFFSET UNITYSDK_OFFSET(0x2A0E820)
#define RAYFIRE_RFSHARD_SETSHARDSBYRIGIDLIST_OFFSET UNITYSDK_OFFSET(0x2A0F000)
#define RAYFIRE_RFSHARD_SETSHARDSBYTRANSFORMLIST_OFFSET UNITYSDK_OFFSET(0x2A0F2A0)
#define RAYFIRE_RFSHARD_SETSHARDS_OFFSET UNITYSDK_OFFSET(0x2A0F5A0)
#define RAYFIRE_RFSHARD_SETUNCHECKED_OFFSET UNITYSDK_OFFSET(0x2A0F6A0)
#define RAYFIRE_RFSHARD_SORTBYDISTANCETOPLANE_OFFSET UNITYSDK_OFFSET(0x2A0F720)
#define RAYFIRE_RFSHARD_SORTBYDISTANCETOPOINT_OFFSET UNITYSDK_OFFSET(0x2A0FC30)
#define RAYFIRE_RFSHARD_UNYIELDINGBYSHARD_OFFSET UNITYSDK_OFFSET(0x2A100A0)
#define RAYFIRE_RFSHARD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2A10130)
#define RAYFIRE_RFSHARD__CTOR_OFFSET UNITYSDK_OFFSET(0x2A10330)

namespace RayFire
{
	inline static constexpr unsigned int RFShard_TypeDefinitionIndex = 15912;

	class RFShard : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Single sz; // 0x14
		::System::Boolean uny; // 0x18
		::System::Boolean act; // 0x19
		::System::Byte _padding0[0x2];
		::UnityEngine::B3A7F113FE1DE383 bnd; // 0x1C
		::UnityEngine::Vector3 pos; // 0x34
		::UnityEngine::Quaternion rot; // 0x40
		::E33DBE3D45A5731A::EA13F019F5C08611 sm; // 0x50
		::System::Int32 nAm; // 0x54
		::System::Collections::Generic::List_1<::System::Int32>* nIds; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* nArea; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* sIds; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* nSt; // 0x70
		::System::Single sSt; // 0x78
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* tm; // 0x80
		::UnityEngine::Collider* col; // 0x88
		::UnityEngine::Rigidbody* rb; // 0x90
		::RayFire::RayfireRigid* rigid; // 0x98
		::UnityEngine::MeshFilter* mf; // 0xA0
		::System::Collections::Generic::List_1<::RayFire::RFTriangle*>* tris; // 0xA8
		::RayFire::RFCluster* cluster; // 0xB0
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* neibShards; // 0xB8
		::System::Boolean check; // 0xC0
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Boolean>* sCheck; // 0xC8

		::System::Single NeibArea(::RayFire::RFShard* FE9A7D1409106CE7)
		{
			return ((::System::Single(*)(::PVOID, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_NEIBAREA_OFFSET))(this, FE9A7D1409106CE7);
		}

		::System::Void RemoveNeibAt(::System::Int32 FB0600271A2C2AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_REMOVENEIBAT_OFFSET))(this, FB0600271A2C2AE8);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RFShard*>* SortByDistanceToPoint(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SORTBYDISTANCETOPOINT_OFFSET))(BB1C78C5B2F8C7AD, FF9A37DE513AC35B, FCB91636572348CF);
		}

		static ::RayFire::RFShard* GetShardByCollider(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::UnityEngine::Collider* AED9F3D0814B967F)
		{
			return ((::RayFire::RFShard*(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_GETSHARDBYCOLLIDER_OFFSET))(BB1C78C5B2F8C7AD, AED9F3D0814B967F);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RFShard*>* GetShardsByColliders(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* F80D66EF12955EEB)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_GETSHARDSBYCOLLIDERS_OFFSET))(BB1C78C5B2F8C7AD, F80D66EF12955EEB);
		}

		static ::System::Boolean UnyieldingByShard(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_UNYIELDINGBYSHARD_OFFSET))(BB1C78C5B2F8C7AD);
		}

		::System::Void _ctor(::RayFire::RFShard* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD__CTOR_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void ClearNeib()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_CLEARNEIB_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RayFire::RFShard* FE9A7D1409106CE7)
		{
			return ((::System::Int32(*)(::PVOID, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_COMPARETO_OFFSET))(this, FE9A7D1409106CE7);
		}

		static ::System::Void ReinitNeibs(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_REINITNEIBS_OFFSET))(BB1C78C5B2F8C7AD);
		}

		::System::Boolean get_StressState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_GET_STRESSSTATE_OFFSET))(this);
		}

		static ::System::Void SetShards(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::E33DBE3D45A5731A::F65B394BF159CB9F B4EF92D0FD50125B, ::System::Boolean E45541412E3B2ECD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::E33DBE3D45A5731A::F65B394BF159CB9F, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SETSHARDS_OFFSET))(BE27CDF41D2DFAAD, B4EF92D0FD50125B, E45541412E3B2ECD);
		}

		static ::System::Collections::Generic::List_1<::RayFire::RFShard*>* SortByDistanceToPlane(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::UnityEngine::Vector3 FF9A37DE513AC35B, ::UnityEngine::Vector3 B41A0C11273E0D9E, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFShard*>*(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SORTBYDISTANCETOPLANE_OFFSET))(BB1C78C5B2F8C7AD, FF9A37DE513AC35B, B41A0C11273E0D9E, FCB91636572348CF);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* AE02D674238F1107, ::System::Int32 EA7CFF2710F5BB56)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD__CTOR_1_OFFSET))(this, AE02D674238F1107, EA7CFF2710F5BB56);
		}

		static ::System::Void SetUnchecked(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SETUNCHECKED_OFFSET))(BB1C78C5B2F8C7AD);
		}

		static ::System::Void SetShardsByTransformList(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FD2D89AE277D129E, ::E33DBE3D45A5731A::F65B394BF159CB9F B4EF92D0FD50125B, ::System::Boolean E45541412E3B2ECD)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::E33DBE3D45A5731A::F65B394BF159CB9F, ::System::Boolean))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SETSHARDSBYTRANSFORMLIST_OFFSET))(BE27CDF41D2DFAAD, FD2D89AE277D129E, B4EF92D0FD50125B, E45541412E3B2ECD);
		}

		static ::UnityEngine::EBE7541DAF0BA279 GetSlicePlane(::UnityEngine::B3A7F113FE1DE383 E6C1D9569865F7A5)
		{
			return ((::UnityEngine::EBE7541DAF0BA279(*)(::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_GETSLICEPLANE_OFFSET))(E6C1D9569865F7A5);
		}

		static ::System::Void SetShardNeibs(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::E33DBE3D45A5731A::F65B394BF159CB9F A288CB28FC2A6DA3, ::System::Single E2663FD988F995F0, ::System::Single A70F1BE5E1251A4A, ::System::Int32 AF4A9DC5E5FCE29D, ::System::Int32 AF9A63638B456161)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::E33DBE3D45A5731A::F65B394BF159CB9F, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SETSHARDNEIBS_OFFSET))(BB1C78C5B2F8C7AD, A288CB28FC2A6DA3, E2663FD988F995F0, A70F1BE5E1251A4A, AF4A9DC5E5FCE29D, AF9A63638B456161);
		}

		static ::System::Void SetShardsByRigidList(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* B7FA98F778C25381, ::E33DBE3D45A5731A::F65B394BF159CB9F B4EF92D0FD50125B)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*, ::E33DBE3D45A5731A::F65B394BF159CB9F))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHARD_SETSHARDSBYRIGIDLIST_OFFSET))(BE27CDF41D2DFAAD, B7FA98F778C25381, B4EF92D0FD50125B);
		}
	};
}
