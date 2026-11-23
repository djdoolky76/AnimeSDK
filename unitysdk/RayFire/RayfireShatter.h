#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/EAE40C7ABEA6A5D3.h"
#include "unitysdk/E33DBE3D45A5731A/FCDDADD604DCCBDC.h"
#include "unitysdk/RayFire/RayfireShatter_AAE3E8862020A0BC.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFCustom; }
namespace RayFire { class RFDictionary; }
namespace RayFire { class RFMeshExport; }
namespace RayFire { class RFRadial; }
namespace RayFire { class RFShatterAdvanced; }
namespace RayFire { class RFShatterCluster; }
namespace RayFire { class RFSlice; }
namespace RayFire { class RFSplinters; }
namespace RayFire { class RFSurface; }
namespace RayFire { class RFTets; }
namespace RayFire { class RFVoronoi; }
namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRESHATTER_A60884CCF6CE3F71_OFFSET UNITYSDK_OFFSET(0x29766B0)
#define RAYFIRE_RAYFIRESHATTER_AD5F7906D9EFCE4F_OFFSET UNITYSDK_OFFSET(0x2976F30)
#define RAYFIRE_RAYFIRESHATTER_B1D0BA9C51DF2083_OFFSET UNITYSDK_OFFSET(0x2976E80)
#define RAYFIRE_RAYFIRESHATTER_BB2113603E230CAC_OFFSET UNITYSDK_OFFSET(0x2976CB0)
#define RAYFIRE_RAYFIRESHATTER_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2976F30)
#define RAYFIRE_RAYFIRESHATTER_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x29751D0)
#define RAYFIRE_RAYFIRESHATTER_BF128134802B6CC9_OFFSET UNITYSDK_OFFSET(0x2975FB0)
#define RAYFIRE_RAYFIRESHATTER_E489481E957A5603_OFFSET UNITYSDK_OFFSET(0x29770A0)
#define RAYFIRE_RAYFIRESHATTER_EE3423380DAB5FD4_OFFSET UNITYSDK_OFFSET(0x2975610)
#define RAYFIRE_RAYFIRESHATTER_F2EBBBC3A051F062_OFFSET UNITYSDK_OFFSET(0x2977730)
#define RAYFIRE_RAYFIRESHATTER_F551E2F185D594CE_OFFSET UNITYSDK_OFFSET(0x29776D0)
#define RAYFIRE_RAYFIRESHATTER_F5EC67B6704B6CDD_OFFSET UNITYSDK_OFFSET(0x2976A60)
#define RAYFIRE_RAYFIRESHATTER_FA9B3B134BC97655_OFFSET UNITYSDK_OFFSET(0x2975480)
#define RAYFIRE_RAYFIRESHATTER_FD543ED2E56AFB72_OFFSET UNITYSDK_OFFSET(0x29764E0)
#define RAYFIRE_RAYFIRESHATTER_FFF518C260CC48A0_OFFSET UNITYSDK_OFFSET(0x2977340)
#define RAYFIRE_RAYFIRESHATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2977990)
#define RAYFIRE_RAYFIRESHATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x29779D0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireShatter_TypeDefinitionIndex = 15470;

	class RayfireShatter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_B2F7B07F2FA65A10()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RayfireShatter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::E33DBE3D45A5731A::EAE40C7ABEA6A5D3 type; // 0x20
		::System::Byte _padding0[0x4];
		::RayFire::RFVoronoi* voronoi; // 0x28
		::RayFire::RFSplinters* splinters; // 0x30
		::RayFire::RFSplinters* slabs; // 0x38
		::RayFire::RFRadial* radial; // 0x40
		::RayFire::RFCustom* custom; // 0x48
		::RayFire::RFSlice* slice; // 0x50
		::RayFire::RFTets* tets; // 0x58
		::E33DBE3D45A5731A::FCDDADD604DCCBDC mode; // 0x60
		::System::Byte _padding1[0x4];
		::RayFire::RFSurface* material; // 0x68
		::RayFire::RFShatterCluster* clusters; // 0x70
		::RayFire::RFShatterAdvanced* advanced; // 0x78
		::RayFire::RFMeshExport* export_; // 0x80
		::System::Boolean showCenter; // 0x88
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 centerPosition; // 0x8C
		::UnityEngine::Quaternion centerDirection; // 0x98
		::UnityEngine::Transform* transForm; // 0xA8
		::UnityEngine::MeshFilter* meshFilter; // 0xB0
		::UnityEngine::MeshRenderer* meshRenderer; // 0xB8
		::UnityEngine::SkinnedMeshRenderer* skinnedMeshRend; // 0xC0
		::Il2CppArray<::UnityEngine::Mesh*>* meshes; // 0xC8
		::Il2CppArray<::UnityEngine::Vector3>* pivots; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* rootChildList; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* fragmentsAll; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* fragmentsLast; // 0xE8
		::System::Collections::Generic::List_1<::RayFire::RFDictionary*>* origSubMeshIdsRF; // 0xF0
		::System::Int32 shatterMode; // 0xF8
		::System::Boolean colorPreview; // 0xFC
		::System::Boolean scalePreview; // 0xFD
		::System::Byte _padding3[0x2];
		::System::Single previewScale; // 0x100
		::System::Single size; // 0x104
		::System::Single rescaleFix; // 0x108
		::UnityEngine::Vector3 originalScale; // 0x10C
		::UnityEngine::B3A7F113FE1DE383 bound; // 0x118
		::System::Boolean resetState; // 0x130

		::System::Void FD543ED2E56AFB72()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_FD543ED2E56AFB72_OFFSET))(this);
		}

		::System::Void F2EBBBC3A051F062()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_F2EBBBC3A051F062_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void AD5F7906D9EFCE4F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_AD5F7906D9EFCE4F_OFFSET))(this);
		}

		::System::Void A60884CCF6CE3F71(::System::Int32 AAB58D3DD8FB6D4F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_A60884CCF6CE3F71_OFFSET))(this, AAB58D3DD8FB6D4F);
		}

		::System::Void FFF518C260CC48A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_FFF518C260CC48A0_OFFSET))(this);
		}

		static ::System::Void FA9B3B134BC97655(::RayFire::RayfireRigid* AFE8F10692F5139F, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* AE6F379D49132D4B)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_FA9B3B134BC97655_OFFSET))(AFE8F10692F5139F, AE6F379D49132D4B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER__CTOR_OFFSET))(this);
		}

		static ::RayFire::RayfireShatter_AAE3E8862020A0BC B1D0BA9C51DF2083(::UnityEngine::GameObject* AD1247287D2D9217)
		{
			return ((::RayFire::RayfireShatter_AAE3E8862020A0BC(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_B1D0BA9C51DF2083_OFFSET))(AD1247287D2D9217);
		}

		::System::Void BC7F534A8275D79E(::RayFire::RayfireShatter* F4E577C81A4930C7)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireShatter*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_BC7F534A8275D79E_OFFSET))(this, F4E577C81A4930C7);
		}

		::System::Void E489481E957A5603(::System::Single F3BD470466F28FE1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_E489481E957A5603_OFFSET))(this, F3BD470466F28FE1);
		}

		::System::Void F551E2F185D594CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_F551E2F185D594CE_OFFSET))(this);
		}

		::UnityEngine::B3A7F113FE1DE383 BB2113603E230CAC()
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_BB2113603E230CAC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EE3423380DAB5FD4(::UnityEngine::GameObject* F0F7165318B09F70)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_EE3423380DAB5FD4_OFFSET))(this, F0F7165318B09F70);
		}

		::System::Void F5EC67B6704B6CDD(::System::Int32 A00F6DB0F159872C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_F5EC67B6704B6CDD_OFFSET))(this, A00F6DB0F159872C);
		}

		::System::Boolean BF128134802B6CC9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER_BF128134802B6CC9_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESHATTER__CCTOR_OFFSET))();
		}
	};
}
