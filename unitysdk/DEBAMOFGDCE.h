#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define DEBAMOFGDCE_IELMAIBIJOM_OFFSET UNITYSDK_OFFSET(0xF5920)
#define DEBAMOFGDCE_PKMNGOHOIID_OFFSET UNITYSDK_OFFSET(0xF5830)

inline static constexpr unsigned int DEBAMOFGDCE_TypeDefinitionIndex = 78891;

	struct alignas(4) DEBAMOFGDCE
	{
		::UnityEngine::Quaternion FMIPFDIAPEE; // 0x10
		::UnityEngine::Quaternion HDEPGDKCFJK; // 0x20
		::System::Single BJBIBMDPCNP; // 0x30
		::System::Single PKDMBIMLJPH; // 0x34
		::UnityEngine::Quaternion PKMNGOHOIID(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEBAMOFGDCE_PKMNGOHOIID_OFFSET))(this, a1);
		}

		::System::Void IELMAIBIJOM(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + DEBAMOFGDCE_IELMAIBIJOM_OFFSET))(this, a1, a2, a3);
		}

	};
