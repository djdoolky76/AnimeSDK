#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/F65B394BF159CB9F.h"
#include "unitysdk/RayFire/RayfireCluster_A135D0D135420E44.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFCluster; }
namespace RayFire { class RFShard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRECLUSTER_A32049AC0918940F_OFFSET UNITYSDK_OFFSET(0x29A7110)
#define RAYFIRE_RAYFIRECLUSTER_A76F069BDA7E998B_OFFSET UNITYSDK_OFFSET(0x29AA030)
#define RAYFIRE_RAYFIRECLUSTER_AEF07E6E9DAFFB54_OFFSET UNITYSDK_OFFSET(0x29A8200)
#define RAYFIRE_RAYFIRECLUSTER_B1360E42257C685B_OFFSET UNITYSDK_OFFSET(0x29A7F20)
#define RAYFIRE_RAYFIRECLUSTER_B5E67FC360D07650_OFFSET UNITYSDK_OFFSET(0x29A7990)
#define RAYFIRE_RAYFIRECLUSTER_B7F09645C324197E_OFFSET UNITYSDK_OFFSET(0x29AB080)
#define RAYFIRE_RAYFIRECLUSTER_B9AA3AA59B5A8031_OFFSET UNITYSDK_OFFSET(0x29A74F0)
#define RAYFIRE_RAYFIRECLUSTER_E111AC1D8E97296C_OFFSET UNITYSDK_OFFSET(0x29A90A0)
#define RAYFIRE_RAYFIRECLUSTER_E2D8E128E25C9D7B_OFFSET UNITYSDK_OFFSET(0x29AAF50)
#define RAYFIRE_RAYFIRECLUSTER_E723FAAB6AEA0130_OFFSET UNITYSDK_OFFSET(0x29AAC80)
#define RAYFIRE_RAYFIRECLUSTER_EA14D7C31C76D975_OFFSET UNITYSDK_OFFSET(0x29A8D10)
#define RAYFIRE_RAYFIRECLUSTER_EAC227C40F2B2B12_OFFSET UNITYSDK_OFFSET(0x29AAAA0)
#define RAYFIRE_RAYFIRECLUSTER_ED0576EFDE53F2BF_OFFSET UNITYSDK_OFFSET(0x29AA8B0)
#define RAYFIRE_RAYFIRECLUSTER_F16A942E63E7673E_OFFSET UNITYSDK_OFFSET(0x29A93D0)
#define RAYFIRE_RAYFIRECLUSTER_F1A142DB9AB11C31_OFFSET UNITYSDK_OFFSET(0x29A97E0)
#define RAYFIRE_RAYFIRECLUSTER_F68A71867D1059EA_OFFSET UNITYSDK_OFFSET(0x29A8F60)
#define RAYFIRE_RAYFIRECLUSTER_F793EBF4E3935F0E_OFFSET UNITYSDK_OFFSET(0x29A8150)
#define RAYFIRE_RAYFIRECLUSTER_FC20651E356B9B6F_OFFSET UNITYSDK_OFFSET(0x29A67C0)
#define RAYFIRE_RAYFIRECLUSTER_FD33B212987D16C9_OFFSET UNITYSDK_OFFSET(0x29A8AF0)
#define RAYFIRE_RAYFIRECLUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x29AB360)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCluster_TypeDefinitionIndex = 15639;

	class RayfireCluster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireCluster_A135D0D135420E44 type; // 0x20
		::System::Int32 depth; // 0x24
		::System::Int32 seed; // 0x28
		::System::Int32 smoothPass; // 0x2C
		::System::Int32 baseAmount; // 0x30
		::System::Int32 depthAmount; // 0x34
		::E33DBE3D45A5731A::F65B394BF159CB9F connectivity; // 0x38
		::System::Int32 minimumAmount; // 0x3C
		::System::Int32 maximumAmount; // 0x40
		::System::Boolean showGizmo; // 0x44
		::System::Boolean colorPreview; // 0x45
		::System::Boolean scalePreview; // 0x46
		::System::Byte _padding0[0x1];
		::UnityEngine::E46B881AA2636190 wireColor; // 0x48
		::System::Single previewScale; // 0x58
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* allClusters; // 0x60
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* allShards; // 0x68
		::System::Int32 B1C73A955BD5B971; // 0x70

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* B7F09645C324197E(::UnityEngine::B3A7F113FE1DE383 E6C1D9569865F7A5, ::System::Int32 B823E22FA53943FD)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::B3A7F113FE1DE383, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B7F09645C324197E_OFFSET))(this, E6C1D9569865F7A5, B823E22FA53943FD);
		}

		::System::Void B5E67FC360D07650()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B5E67FC360D07650_OFFSET))(this);
		}

		::System::Void ED0576EFDE53F2BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_ED0576EFDE53F2BF_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER__CTOR_OFFSET))(this);
		}

		::System::Void F793EBF4E3935F0E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_F793EBF4E3935F0E_OFFSET))(this);
		}

		::System::Void B1360E42257C685B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B1360E42257C685B_OFFSET))(this);
		}

		::System::Void E723FAAB6AEA0130(::System::Collections::Generic::List_1<::RayFire::RFShard*>* AE8A8864D80707AE, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>* EC3AF7078E153F0F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_E723FAAB6AEA0130_OFFSET))(this, AE8A8864D80707AE, EC3AF7078E153F0F);
		}

		static ::System::Void A76F069BDA7E998B(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_A76F069BDA7E998B_OFFSET))(B0AC66CB75A55133);
		}

		::UnityEngine::B3A7F113FE1DE383 F16A942E63E7673E(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133)
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_F16A942E63E7673E_OFFSET))(this, BB1C78C5B2F8C7AD, B0AC66CB75A55133);
		}

		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B9AA3AA59B5A8031(::RayFire::RFCluster* BB2502C4ABF601F5)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFCluster*>*(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B9AA3AA59B5A8031_OFFSET))(this, BB2502C4ABF601F5);
		}

		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* FC20651E356B9B6F(::RayFire::RFCluster* FCB7FC19982530BF, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFCluster*>*(*)(::PVOID, ::RayFire::RFCluster*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_FC20651E356B9B6F_OFFSET))(this, FCB7FC19982530BF, FCB91636572348CF);
		}

		::System::Void EA14D7C31C76D975()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_EA14D7C31C76D975_OFFSET))(this);
		}

		::System::Void FD33B212987D16C9(::RayFire::RFCluster* A9A93F3B0DD65831, ::UnityEngine::Transform* B73A7225F694FAB2)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFCluster*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_FD33B212987D16C9_OFFSET))(this, A9A93F3B0DD65831, B73A7225F694FAB2);
		}

		static ::RayFire::RFShard* E111AC1D8E97296C(::System::Collections::Generic::List_1<::RayFire::RFShard*>* F2D449C688F17779, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* E9A1B4C47F1FFA0F)
		{
			return ((::RayFire::RFShard*(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_E111AC1D8E97296C_OFFSET))(F2D449C688F17779, E9A1B4C47F1FFA0F);
		}

		::System::Void EAC227C40F2B2B12(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* BBC7270E806D5869, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>* EC3AF7078E153F0F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_EAC227C40F2B2B12_OFFSET))(this, BBC7270E806D5869, EC3AF7078E153F0F);
		}

		::System::Void AEF07E6E9DAFFB54(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* EC3AF7078E153F0F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_AEF07E6E9DAFFB54_OFFSET))(this, EC3AF7078E153F0F);
		}

		::System::Int32 F68A71867D1059EA(::RayFire::RFShard* A9B58EA01420571C, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* E9A1B4C47F1FFA0F)
		{
			return ((::System::Int32(*)(::PVOID, ::RayFire::RFShard*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_F68A71867D1059EA_OFFSET))(this, A9B58EA01420571C, E9A1B4C47F1FFA0F);
		}

		::System::Void F1A142DB9AB11C31(::System::Collections::Generic::List_1<::RayFire::RFCluster*>* B0AC66CB75A55133)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RayFire::RFCluster*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_F1A142DB9AB11C31_OFFSET))(this, B0AC66CB75A55133);
		}

		::RayFire::RFCluster* E2D8E128E25C9D7B(::E33DBE3D45A5731A::F65B394BF159CB9F E63D5023A548AF9C)
		{
			return ((::RayFire::RFCluster*(*)(::PVOID, ::E33DBE3D45A5731A::F65B394BF159CB9F))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_E2D8E128E25C9D7B_OFFSET))(this, E63D5023A548AF9C);
		}

		::System::Collections::Generic::List_1<::RayFire::RFCluster*>* A32049AC0918940F(::RayFire::RFCluster* FCB7FC19982530BF)
		{
			return ((::System::Collections::Generic::List_1<::RayFire::RFCluster*>*(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_A32049AC0918940F_OFFSET))(this, FCB7FC19982530BF);
		}
	};
}
