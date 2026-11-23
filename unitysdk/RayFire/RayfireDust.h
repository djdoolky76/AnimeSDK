#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFParticleCollisionDust; }
namespace RayFire { class RFParticleDynamicDust; }
namespace RayFire { class RFParticleEmission; }
namespace RayFire { class RFParticleLimitations; }
namespace RayFire { class RFParticleNoise; }
namespace RayFire { class RFParticleRendering; }
namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREDUST_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x29F8E60)
#define RAYFIRE_RAYFIREDUST_AA155134A4FC2DA3_OFFSET UNITYSDK_OFFSET(0x29F8F80)
#define RAYFIRE_RAYFIREDUST_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x29F8760)
#define RAYFIRE_RAYFIREDUST_E5D7192ACBD436FF_OFFSET UNITYSDK_OFFSET(0x29F8870)
#define RAYFIRE_RAYFIREDUST_E67DEE1D25441FDF_OFFSET UNITYSDK_OFFSET(0x29F93A0)
#define RAYFIRE_RAYFIREDUST_F0798172518D2FF4_OFFSET UNITYSDK_OFFSET(0x29F8D70)
#define RAYFIRE_RAYFIREDUST_FD5A27579DD93A57_OFFSET UNITYSDK_OFFSET(0x29F9060)
#define RAYFIRE_RAYFIREDUST__CTOR_OFFSET UNITYSDK_OFFSET(0x29F91C0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireDust_TypeDefinitionIndex = 15750;

	class RayfireDust : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean onDemolition; // 0x20
		::System::Boolean onActivation; // 0x21
		::System::Boolean onImpact; // 0x22
		::System::Byte _padding0[0x1];
		::System::Single opacity; // 0x24
		::UnityEngine::Material* dustMaterial; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* dustMaterials; // 0x30
		::UnityEngine::Material* emissionMaterial; // 0x38
		::RayFire::RFParticleEmission* emission; // 0x40
		::RayFire::RFParticleDynamicDust* dynamic; // 0x48
		::RayFire::RFParticleNoise* noise; // 0x50
		::RayFire::RFParticleCollisionDust* collision; // 0x58
		::RayFire::RFParticleLimitations* limitations; // 0x60
		::RayFire::RFParticleRendering* rendering; // 0x68
		::RayFire::RayfireRigid* rigid; // 0x70
		::UnityEngine::ParticleSystem* pSystem; // 0x78
		::UnityEngine::Transform* hostTm; // 0x80
		::System::Boolean initialized; // 0x88
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* children; // 0x90
		::System::Int32 amountFinal; // 0x98
		::System::Boolean oldChild; // 0x9C

		::System::Void E5D7192ACBD436FF(::RayFire::RayfireDust* F2C7FF5A19F78852, ::UnityEngine::MeshFilter* AB0B97D70B7C8C7B, ::System::Int32 F7F39AAD7A36778D, ::UnityEngine::ParticleSystem* FE067202C45BBC9A)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireDust*, ::UnityEngine::MeshFilter*, ::System::Int32, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_E5D7192ACBD436FF_OFFSET))(this, F2C7FF5A19F78852, AB0B97D70B7C8C7B, F7F39AAD7A36778D, FE067202C45BBC9A);
		}

		::System::Void AA155134A4FC2DA3(::UnityEngine::ParticleSystemRenderer* A3FF6EEE4BD54305, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* A932B67CD0187B58)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_AA155134A4FC2DA3_OFFSET))(this, A3FF6EEE4BD54305, A932B67CD0187B58);
		}

		::System::Void F0798172518D2FF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_F0798172518D2FF4_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_A788EA8D7C189191_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST__CTOR_OFFSET))(this);
		}

		::System::Boolean E67DEE1D25441FDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_E67DEE1D25441FDF_OFFSET))(this);
		}

		::System::Void FD5A27579DD93A57(::UnityEngine::ParticleSystemRenderer* A3FF6EEE4BD54305, ::RayFire::RayfireDust* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::RayFire::RayfireDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_FD5A27579DD93A57_OFFSET))(this, A3FF6EEE4BD54305, F2C7FF5A19F78852);
		}

		::System::Void BC7F534A8275D79E(::RayFire::RayfireDust* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREDUST_BC7F534A8275D79E_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}
