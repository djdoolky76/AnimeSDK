#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET UNITYSDK_OFFSET(0xE4E63A0)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E6780)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_GETMESHPARTICLELOCALRADIUS_OFFSET UNITYSDK_OFFSET(0xE4E6640)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET UNITYSDK_OFFSET(0xE4E6580)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xE4E6460)
#define RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0xE4E64E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemUtils_TypeDefinitionIndex = 74931;

	class ParticleSystemUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* _ParticleSystem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_AWAKE_OFFSET))(this);
		}

		::System::Void SetPlaybackSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETPLAYBACKSPEED_OFFSET))(this, a1);
		}

		::System::Void SetStartColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_SETSTARTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetParticleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_GETPARTICLEMATERIAL_OFFSET))(this);
		}

		static ::System::Single GetMeshParticleLocalRadius(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMUTILS_GETMESHPARTICLELOCALRADIUS_OFFSET))(a1);
		}

	};
}
