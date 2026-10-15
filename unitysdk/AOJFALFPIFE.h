#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class ParticleSystem; }

#define AOJFALFPIFE_LLHPBDPNHMA_OFFSET UNITYSDK_OFFSET(0x158B08E0)

inline static constexpr unsigned int AOJFALFPIFE_TypeDefinitionIndex = 73176;

	class AOJFALFPIFE : public ::System::Object
	{
	public:
		static ::System::Void LLHPBDPNHMA(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + AOJFALFPIFE_LLHPBDPNHMA_OFFSET))(a1);
		}

	};
