#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class ParticleSystem; }

#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_A788EA8D7C189191_1_OFFSET UNITYSDK_OFFSET(0x3DBD110)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x3DBD0A0)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x3DBD260)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_ED9694786276B7D5_OFFSET UNITYSDK_OFFSET(0x3DBD1C0)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3DBD2B0)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBD2F0)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int PGPoolableParticles_TypeDefinitionIndex = 21170;

	class PGPoolableParticles : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* _particleSystem; // 0x20
		::System::Boolean poolActive; // 0x28
		::System::Boolean autoDespawn; // 0x29

		::System::Void A788EA8D7C189191(::UnityEngine::ParticleSystem* A699AF646D857786, ::System::Boolean F41CB32CBCFA6F2C, ::System::Boolean BC489B56799A2DF0, ::System::Boolean EE573F85881FA712)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_A788EA8D7C189191_OFFSET))(this, A699AF646D857786, F41CB32CBCFA6F2C, BC489B56799A2DF0, EE573F85881FA712);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES__CTOR_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191_1(::System::Boolean F41CB32CBCFA6F2C, ::System::Boolean BC489B56799A2DF0, ::System::Boolean EE573F85881FA712)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_A788EA8D7C189191_1_OFFSET))(this, F41CB32CBCFA6F2C, BC489B56799A2DF0, EE573F85881FA712);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void ED9694786276B7D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLEPARTICLES_ED9694786276B7D5_OFFSET))(this);
		}
	};
}
