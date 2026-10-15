#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"

#define OAEFCEJAING_CTOR_OFFSET UNITYSDK_OFFSET(0x3C30270)
#define OAEFCEJAING_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x3C30340)

	struct alignas(4) OAEFCEJAING
	{
		::UnityEngine::Vector3 MAFKLIGGIJI; // 0x10
		::UnityEngine::Vector3 ACNJKGHFLDM; // 0x1C
		::UnityEngine::Vector3 EAKMJDBLGKN; // 0x28
		::UnityEngine::Vector3 CBFFDLFAHOD; // 0x34
		::UnityEngine::Vector3 NBHLHKJLOAE; // 0x40
		::UnityEngine::Vector3 PPABJFCONGJ; // 0x4C
		::System::Void _ctor(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OAEFCEJAING_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPIIEBDOBAE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + OAEFCEJAING_NPIIEBDOBAE_OFFSET))(this, a1);
		}

	};
