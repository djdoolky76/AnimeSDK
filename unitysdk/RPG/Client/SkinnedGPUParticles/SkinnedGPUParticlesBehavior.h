#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client::SkinnedGPUParticles { class SkinnedGPUParticles; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_BEHAFDKFFOA_OFFSET UNITYSDK_OFFSET(0xE0E8BC0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0E9A00)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE0E7DC0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E99F0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE0E7F90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_EPHMCHCPGKC_OFFSET UNITYSDK_OFFSET(0xE0E8700)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET UNITYSDK_OFFSET(0xE0E97D0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE0E9860)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xE0E98F0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET UNITYSDK_OFFSET(0xE0E98A0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET UNITYSDK_OFFSET(0xE0E9780)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xE0E7D60)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xE0E8020)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE0E7E20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xE0E7C20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE0E7B60)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE0E7CE0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE0E7F30)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE0E7E70)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ONKAJHHFIEA_OFFSET UNITYSDK_OFFSET(0xE0E8090)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE0E7BD0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_PKNGOIOIPEC_OFFSET UNITYSDK_OFFSET(0xE0E96F0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE0E7EF0)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_TypeDefinitionIndex = 73700;

	class SkinnedGPUParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Matrix4x4 _SkinnedObjectToWorld; // 0x38
		::UnityEngine::Matrix4x4 _SkinnedWorldToObject; // 0x78
		::UnityEngine::Vector3 _SkinnedRoot; // 0xB8
		::UnityEngine::Matrix4x4 _PreviousSkinnedObjectToWorld; // 0xC4
		::UnityEngine::Vector3 _PreviousSkinnedRoot; // 0x104
		::UnityEngine::Vector4 _SkinnedVertexBufferLayout; // 0x110
		::UnityEngine::Vector4 _VertexBufferLayoutOfColor; // 0x120
		::UnityEngine::Vector4 _VertexBufferLayoutOfUV; // 0x130
		::System::Int32 _UsePackedVertex; // 0x140
		::System::Boolean _Inited; // 0x144
		static ::System::Int32* StaticGet__SkinnedWorldToObjectShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15810);
		}

		static ::System::Int32* StaticGet__MotionReprojectionShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15814);
		}

		static ::System::Int32* StaticGet__SkinnedObjectToWorldShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15818);
		}

		static ::System::Int32* StaticGet__VertexBufferLayoutOfColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x1581C);
		}

		static ::System::Int32* StaticGet__CustomVertexStreamsShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15820);
		}

		static ::System::Int32* StaticGet__VertexBufferLayoutOfUVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15824);
		}

		static ::System::Int32* StaticGet__UsePackedVertexShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x15828);
		}

		static ::System::Int32* StaticGet__SkinnedVertexBufferLayoutShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.SkinnedGPUParticles", "SkinnedGPUParticlesBehavior")->GetStaticField(0x1582C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Boolean ONKAJHHFIEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ONKAJHHFIEA_OFFSET))(this);
		}

		::System::Boolean EPHMCHCPGKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_EPHMCHCPGKC_OFFSET))(this);
		}

		::System::Void BEHAFDKFFOA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_BEHAFDKFFOA_OFFSET))(this, a1);
		}

		::System::Void PKNGOIOIPEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_PKNGOIOIPEC_OFFSET))(this);
		}

		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles* get__Owner()
		{
			return ((::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* get__SkinnedMesh()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* get__Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesRenderer* get__ParticlesRenderer()
		{
			return ((::UnityEngine::GPUParticlesRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get__ParticlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET))(this);
		}

	};
}
