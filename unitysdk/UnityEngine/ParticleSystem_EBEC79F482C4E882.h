#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxGradient.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_A5ABE49B4D814BD5_OFFSET UNITYSDK_OFFSET(0x41AB480)
#define UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_B881EE4FC0A9EFEB_OFFSET UNITYSDK_OFFSET(0x41AB480)
#define UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_BADD9167F5D10D2B_OFFSET UNITYSDK_OFFSET(0x41AB3E0)
#define UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_EAD10D7486065190_OFFSET UNITYSDK_OFFSET(0x41AB430)
#define UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EBEC79F482C4E882_TypeDefinitionIndex = 21009;

	struct alignas(8) ParticleSystem_EBEC79F482C4E882
	{
		::UnityEngine::ParticleSystem* A58F01034DC084D9; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* E7A0E881899372B9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882__CTOR_OFFSET))(this, E7A0E881899372B9);
		}

		::System::Void A5ABE49B4D814BD5(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_A5ABE49B4D814BD5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void EAD10D7486065190(::UnityEngine::ParticleSystem_MinMaxGradient E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_EAD10D7486065190_OFFSET))(this, E937D4885DAA1AE8);
		}

		/*
		static ::System::Void B881EE4FC0A9EFEB(::UnityEngine::ParticleSystem_EBEC79F482C4E882& EDB794C900A30CB0, ::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EBEC79F482C4E882&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_B881EE4FC0A9EFEB_OFFSET))(EDB794C900A30CB0, E937D4885DAA1AE8);
		}
		*/

		/*
		static ::System::Void BADD9167F5D10D2B(::UnityEngine::ParticleSystem_EBEC79F482C4E882& EDB794C900A30CB0, ::UnityEngine::ParticleSystem_MinMaxGradient& E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EBEC79F482C4E882&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EBEC79F482C4E882_BADD9167F5D10D2B_OFFSET))(EDB794C900A30CB0, E937D4885DAA1AE8);
		}
		*/
	};
}
