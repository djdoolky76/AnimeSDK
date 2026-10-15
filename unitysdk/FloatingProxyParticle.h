#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define FLOATINGPROXYPARTICLE_CTOR_OFFSET UNITYSDK_OFFSET(0x2E79C80)
#define FLOATINGPROXYPARTICLE_MFDJHAAOODM_OFFSET UNITYSDK_OFFSET(0x15928070)
#define FLOATINGPROXYPARTICLE_OGPDIJFMIHM_OFFSET UNITYSDK_OFFSET(0x15928CB0)

inline static constexpr unsigned int FloatingProxyParticle_TypeDefinitionIndex = 47491;

	struct alignas(4) FloatingProxyParticle
	{
		::UnityEngine::Vector4 posRadius; // 0x10
		::UnityEngine::Vector4 param; // 0x20
		::UnityEngine::Vector4 param1; // 0x30
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 OGPDIJFMIHM()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE_OGPDIJFMIHM_OFFSET))();
		}

		static ::System::Int32 MFDJHAAOODM()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE_MFDJHAAOODM_OFFSET))();
		}

	};
