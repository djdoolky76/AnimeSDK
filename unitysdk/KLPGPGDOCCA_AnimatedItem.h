#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define KLPGPGDOCCA_ANIMATEDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB534190)
#define KLPGPGDOCCA_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET UNITYSDK_OFFSET(0xB534590)
#define KLPGPGDOCCA_ANIMATEDITEM_GET_GPUPARTICLEINSTANCEDATALISTS_OFFSET UNITYSDK_OFFSET(0xB5346D0)
#define KLPGPGDOCCA_ANIMATEDITEM_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB532FC0)
#define KLPGPGDOCCA_ANIMATEDITEM_GET_MESH_OFFSET UNITYSDK_OFFSET(0xB5330A0)
#define KLPGPGDOCCA_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB533180)
#define KLPGPGDOCCA_ANIMATEDITEM_GET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xB5345A0)
#define KLPGPGDOCCA_ANIMATEDITEM_OFMPPGBNONB_OFFSET UNITYSDK_OFFSET(0xB5331E0)
#define KLPGPGDOCCA_ANIMATEDITEM_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB534580)
#define KLPGPGDOCCA_ANIMATEDITEM_SET_MESH_OFFSET UNITYSDK_OFFSET(0xB534570)
#define KLPGPGDOCCA_ANIMATEDITEM_SET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0xB534620)

inline static constexpr unsigned int KLPGPGDOCCA_AnimatedItem_TypeDefinitionIndex = 70318;

	class KLPGPGDOCCA_AnimatedItem : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		::UnityEngine::Vector3 LossyScale; // 0x18
		::System::Boolean EnableInstancing; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Mesh* _Mesh; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* AnimatedInstances; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _AnimatedInstanceMatrixLists; // 0x40
		::System::Boolean EnableGPUParticles; // 0x48
		::System::Byte _padding1[0x7];
		::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x50
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAsset; // 0x58
		::UnityEngine::GPUParticlesAsset* _ParticlesAssetInstance; // 0x60
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* _GPUParticleInstanceDataLists; // 0x68
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET_MESH_OFFSET))(this);
		}

		::System::Void set_Mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_SET_MESH_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_Materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_SET_MATERIALS_OFFSET))(this, a1);
		}

		::System::Int32 get_SubMeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* get_AnimatedInstanceMatrixLists()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get__ParticlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET__PARTICLESASSET_OFFSET))(this);
		}

		::System::Void set__ParticlesAsset(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_SET__PARTICLESASSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* get_GPUParticleInstanceDataLists()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_GET_GPUPARTICLEINSTANCEDATALISTS_OFFSET))(this);
		}

		::System::Void OFMPPGBNONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA_ANIMATEDITEM_OFMPPGBNONB_OFFSET))(this);
		}

	};
