#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/F5BEB68CFD86A2E3.h"

namespace UnityEngine { class B196ACFA9D2AE729; }

#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x235F3A0)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1EAE190)
#define UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x41AC800)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MinMaxGradient_TypeDefinitionIndex = 21005;

	struct alignas(8) ParticleSystem_MinMaxGradient
	{
		::UnityEngine::F5BEB68CFD86A2E3 m_Mode; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::B196ACFA9D2AE729* m_GradientMin; // 0x18
		::UnityEngine::B196ACFA9D2AE729* m_GradientMax; // 0x20
		::UnityEngine::E46B881AA2636190 m_ColorMin; // 0x28
		::UnityEngine::E46B881AA2636190 m_ColorMax; // 0x38

		::System::Void _ctor(::UnityEngine::B196ACFA9D2AE729* EB1AF9019B6B61E3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B196ACFA9D2AE729*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT__CTOR_OFFSET))(this, EB1AF9019B6B61E3);
		}

		::System::Void set_mode(::UnityEngine::F5BEB68CFD86A2E3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::F5BEB68CFD86A2E3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_MODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_color(::UnityEngine::E46B881AA2636190 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_COLOR_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_gradient(::UnityEngine::B196ACFA9D2AE729* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B196ACFA9D2AE729*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MINMAXGRADIENT_SET_GRADIENT_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
