#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NOOHPODHIAA;

#define HPBELMLDDEC_CTOR_OFFSET UNITYSDK_OFFSET(0x3E82100)
#define HPBELMLDDEC_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x3E82160)

inline static constexpr unsigned int HPBELMLDDEC_TypeDefinitionIndex = 44510;

	struct alignas(4) HPBELMLDDEC
	{
		::UnityEngine::Vector3 EAKMJDBLGKN; // 0x10
		::UnityEngine::Vector3 NBHLHKJLOAE; // 0x1C
		::System::Void _ctor(::NOOHPODHIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOOHPODHIAA*))((::PBYTE)hIl2Cpp + HPBELMLDDEC_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPIIEBDOBAE(::NOOHPODHIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOOHPODHIAA*))((::PBYTE)hIl2Cpp + HPBELMLDDEC_NPIIEBDOBAE_OFFSET))(this, a1);
		}

	};
