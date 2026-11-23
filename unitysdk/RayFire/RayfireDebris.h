#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFParticleCollisionDebris; }
namespace RayFire { class RFParticleDynamicDebris; }
namespace RayFire { class RFParticleEmission; }
namespace RayFire { class RFParticleLimitations; }
namespace RayFire { class RFParticleNoise; }
namespace RayFire { class RFParticleRendering; }
namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREDEBRIS_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x2A15550)
#define RAYFIRE_RAYFIREDEBRIS_B0CEC043F9FD008A_OFFSET UNITYSDK_OFFSET(0x2A15570)
#define RAYFIRE_RAYFIREDEBRIS_B537EFA7EC600606_OFFSET UNITYSDK_OFFSET(0x2A15730)
#define RAYFIRE_RAYFIREDEBRIS_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x2A14EC0)
#define RAYFIRE_RAYFIREDEBRIS_BF0E54BFF8CC259B_OFFSET UNITYSDK_OFFSET(0x2A15010)
#define RAYFIRE_RAYFIREDEBRIS_E67DEE1D25441FDF_OFFSET UNITYSDK_OFFSET(0x2A16160)
#define RAYFIRE_RAYFIREDEBRIS_F0798172518D2FF4_OFFSET UNITYSDK_OFFSET(0x2A15430)
#define RAYFIRE_RAYFIREDEBRIS_F62AF6F54D4E2EFF_OFFSET UNITYSDK_OFFSET(0x2A15980)
#define RAYFIRE_RAYFIREDEBRIS__CTOR_OFFSET UNITYSDK_OFFSET(0x2A15ED0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireDebris_TypeDefinitionIndex = 15895;

	class RayfireDebris : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean onDemolition; // 0x20
		::System::Boolean onActivation; // 0x21
		::System::Boolean onImpact; // 0x22
		::System::Byte _padding0[0x5];
		::UnityEngine::GameObject* debrisReference; // 0x28
		::UnityEngine::Material* debrisMaterial; // 0x30
		::UnityEngine::Material* emissionMaterial; // 0x38
		::RayFire::RFParticleEmission* emission; // 0x40
		::RayFire::RFParticleDynamicDebris* dynamic; // 0x48
		::RayFire::RFParticleNoise* noise; // 0x50
		::RayFire::RFParticleCollisionDebris* collision; // 0x58
		::RayFire::RFParticleLimitations* limitations; // 0x60
		::RayFire::RFParticleRendering* rendering; // 0x68
		::RayFire::RayfireRigid* rigid; // 0x70
		::UnityEngine::ParticleSystem* pSystem; // 0x78
		::UnityEngine::Transform* hostTm; // 0x80
		::System::Boolean initialized; // 0x88
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* debrisMeshList; // 0x90
		::UnityEngine::Vector3 refScale; // 0x98
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* children; // 0xA8
		::System::Int32 amountFinal; // 0xB0
		::System::Boolean oldChild; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS__CTOR_OFFSET))(this);
		}

		::System::Void B537EFA7EC600606(::UnityEngine::ParticleSystemRenderer* A3FF6EEE4BD54305, ::RayFire::RayfireDebris* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::RayFire::RayfireDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_B537EFA7EC600606_OFFSET))(this, A3FF6EEE4BD54305, F2C7FF5A19F78852);
		}

		::System::Void F0798172518D2FF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F0798172518D2FF4_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_A788EA8D7C189191_OFFSET))(this);
		}

		::System::Void B0CEC043F9FD008A(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* F91E493EBF01E18A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_B0CEC043F9FD008A_OFFSET))(this, F91E493EBF01E18A);
		}

		::System::Void F62AF6F54D4E2EFF(::UnityEngine::GameObject* E7C138969C4C3996)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_F62AF6F54D4E2EFF_OFFSET))(this, E7C138969C4C3996);
		}

		::System::Void BF0E54BFF8CC259B(::RayFire::RayfireDebris* F2C7FF5A19F78852, ::UnityEngine::MeshFilter* AB0B97D70B7C8C7B, ::System::Int32 F7F39AAD7A36778D, ::UnityEngine::ParticleSystem* FE067202C45BBC9A)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireDebris*, ::UnityEngine::MeshFilter*, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_BF0E54BFF8CC259B_OFFSET))(this, F2C7FF5A19F78852, AB0B97D70B7C8C7B, F7F39AAD7A36778D, FE067202C45BBC9A);
		}

		::System::Boolean E67DEE1D25441FDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_E67DEE1D25441FDF_OFFSET))(this);
		}

		::System::Void BC7F534A8275D79E(::RayFire::RayfireDebris* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDEBRIS_BC7F534A8275D79E_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}
