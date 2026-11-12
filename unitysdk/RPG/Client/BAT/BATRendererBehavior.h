#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATRendererBehavior_MaterialBATKeyword.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/RPG/Client/BAT/BATRendererBehavior___c__DisplayClass22_0.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
namespace RPG::Client::BAT { class BATRenderer; }
namespace RPG::Client::TAUtils { class MaterialPropertiesCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_BNDKOEBPIMD_OFFSET UNITYSDK_OFFSET(0xD136510)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD13DCD0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD138A80)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD13DC80)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_DGOEJIFHDAM_OFFSET UNITYSDK_OFFSET(0xD13BAC0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EEEIBPHBFIJ_OFFSET UNITYSDK_OFFSET(0xD137E10)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EFKAILBFHCK_OFFSET UNITYSDK_OFFSET(0xD13C710)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD13BA60)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0xD13BA50)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD136490)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__CSCULLINGKERNELID_OFFSET UNITYSDK_OFFSET(0xD13C660)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__INSTANCEDATABUFFER_OFFSET UNITYSDK_OFFSET(0xD13C5B0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GGDJFKABHKA_OFFSET UNITYSDK_OFFSET(0xD138CC0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_HIDAALFMDKH_OFFSET UNITYSDK_OFFSET(0xD137190)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_HLPJGOKDIBN_OFFSET UNITYSDK_OFFSET(0xD138660)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD138AC0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD136270)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_LNHONNLJNPD_OFFSET UNITYSDK_OFFSET(0xD138A30)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MBAAHHDMMOF_OFFSET UNITYSDK_OFFSET(0xD13C6C0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD1383D0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MFPLOPBPAHL_OFFSET UNITYSDK_OFFSET(0xD138FE0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD138BA0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_NJBIPPEOFJI_OFFSET UNITYSDK_OFFSET(0xD1387B0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD138B10)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD1362E0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_PLKHFLLDMFG_OFFSET UNITYSDK_OFFSET(0xD13DA10)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD138B60)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD138BE0)
#define RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___DRAWMESHES_G___GETMPB_22_0_OFFSET UNITYSDK_OFFSET(0xD13D990)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRendererBehavior_TypeDefinitionIndex = 75797;

	class BATRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _ArgsTotalCount; // 0x38
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* _ArgsOffsets; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _ArgsCounts; // 0x48
		::UnityEngine::ComputeBuffer* _ArgsCountsBuffer; // 0x50
		::UnityEngine::ComputeBuffer* _ArgsBuffer; // 0x58
		::UnityEngine::RenderTexture* _InstanceDataTexture; // 0x60
		::UnityEngine::RenderTexture* _InstanceDataIndexTexture; // 0x68
		::UnityEngine::Vector4 _InstanceDataTexture_TexelSize; // 0x70
		::UnityEngine::Vector4 _InstanceDataIndexTexture_TexelSize; // 0x80
		::System::Int32 _CSCopyBufferToTextureKernelID; // 0x90
		::System::Int32 _CSClearKernelID; // 0x94
		::System::Int32 _CSFrustumCullingKernelID; // 0x98
		::System::Int32 _CSFrustumHizCullingKernelID; // 0x9C
		::Il2CppArray<::UnityEngine::Plane>* _FrustumPlanes; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* _FrustumPlaneParams; // 0xA8
		::UnityEngine::ComputeBuffer* _InstanceDataIndexBuffer; // 0xB0
		::UnityEngine::ComputeBuffer* _CullingDataBuffer; // 0xB8
		::UnityEngine::ComputeBuffer* _InstanceCountsBuffer; // 0xC0
		::UnityEngine::ComputeShader* _BATRendererComputeShader; // 0xC8
		::UnityEngine::ComputeShader* _InstanceDataCopyComputeShader; // 0xD0
		::RPG::Client::TAUtils::MaterialPropertiesCollection* _GlobalMaterialProperties; // 0xD8
		::System::Single _TickTime; // 0xE0
		::System::Boolean _Visible; // 0xE4
		::System::Boolean _Culling; // 0xE5
		::System::Boolean _CullingWithHiz; // 0xE6
		static ::System::Int32* StaticGet__InstanceDataTextureTexelSizeShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B60);
		}

		static ::System::Int32* StaticGet__InstanceDataIndexTextureShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B64);
		}

		static ::System::Int32* StaticGet__IsLinearDepthShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B68);
		}

		static ::System::Int32* StaticGet__ArgsBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B6C);
		}

		static ::System::Int32* StaticGet__InstanceDataTextureShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B70);
		}

		static ::System::Int32* StaticGet__InstanceDataIndexTextureTexelSizeShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B74);
		}

		static ::System::Int32* StaticGet__InstanceDataBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B78);
		}

		static ::System::Int32* StaticGet__ArgsTotalCountBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B7C);
		}

		static ::System::Int32* StaticGet__FrustumPlaneParamsShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B80);
		}

		static ::System::Int32* StaticGet__CullingDataBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B84);
		}

		static ::System::Int32* StaticGet__FrameIndexShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B88);
		}

		static ::System::Int32* StaticGet__TotalCountShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B8C);
		}

		static ::System::Int32* StaticGet__NumberOfBonesShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B90);
		}

		static ::System::Int32* StaticGet__AnimationTextureShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B94);
		}

		static ::System::Int32* StaticGet__InstanceDataIndexBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B98);
		}

		static ::System::Int32* StaticGet__PrototypeCountShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10B9C);
		}

		static ::System::Int32* StaticGet__VertexCountShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10BA0);
		}

		static ::System::Int32* StaticGet__BoneIndicesWeightsTextureShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10BA4);
		}

		static ::System::Int32* StaticGet__InstanceCountsBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10BA8);
		}

		static ::System::Int32* StaticGet__ArgsCountsBufferShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.BAT", "BATRendererBehavior")->GetStaticField(0x10BAC);
		}

		// static const ::System::String* _BATRendererComputeShaderPath; // 0x0
		// static const ::System::String* _InstanceDataCopyComputeShaderPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void BNDKOEBPIMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_BNDKOEBPIMD_OFFSET))(this);
		}

		::System::Void HLPJGOKDIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_HLPJGOKDIBN_OFFSET))(this);
		}

		::System::Void EEEIBPHBFIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EEEIBPHBFIJ_OFFSET))(this);
		}

		::System::Void GGDJFKABHKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GGDJFKABHKA_OFFSET))(this);
		}

		::System::Void LNHONNLJNPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_LNHONNLJNPD_OFFSET))(this);
		}

		::System::Void HIDAALFMDKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_HIDAALFMDKH_OFFSET))(this);
		}

		::System::Void DGOEJIFHDAM(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_DGOEJIFHDAM_OFFSET))(this, a1);
		}

		::System::Void NJBIPPEOFJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_NJBIPPEOFJI_OFFSET))(this);
		}

		::System::Void MBAAHHDMMOF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MBAAHHDMMOF_OFFSET))(this, a1);
		}

		::System::Void MFPLOPBPAHL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_MFPLOPBPAHL_OFFSET))(this, a1);
		}

		::System::Void EFKAILBFHCK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_EFKAILBFHCK_OFFSET))(this, a1);
		}

		::System::Void PLKHFLLDMFG(::UnityEngine::Material* a1, ::RPG::Client::BAT::BATRendererBehavior_MaterialBATKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::BAT::BATRendererBehavior_MaterialBATKeyword))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_PLKHFLLDMFG_OFFSET))(this, a1, a2);
		}

		::System::Int32 get__CSCullingKernelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__CSCULLINGKERNELID_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get__InstanceDataBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET__INSTANCEDATABUFFER_OFFSET))(this);
		}

		::RPG::Client::BAT::BATRenderer* get_Owner()
		{
			return ((::RPG::Client::BAT::BATRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR_GET_OWNER_OFFSET))(this);
		}

		static ::UnityEngine::MaterialPropertyBlock* __DrawMeshes_g___GetMPB_22_0(::System::Int32 a1, ::RPG::Client::BAT::BATRendererBehavior___c__DisplayClass22_0 a2)
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::System::Int32, ::RPG::Client::BAT::BATRendererBehavior___c__DisplayClass22_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERERBEHAVIOR___DRAWMESHES_G___GETMPB_22_0_OFFSET))(a1, a2);
		}

	};
}
