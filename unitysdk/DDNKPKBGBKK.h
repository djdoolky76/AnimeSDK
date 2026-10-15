#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DDNKPKBGBKK_IELMAIBIJOM_OFFSET UNITYSDK_OFFSET(0xF56E0)
#define DDNKPKBGBKK_PKMNGOHOIID_OFFSET UNITYSDK_OFFSET(0xF56C0)

	struct alignas(4) DDNKPKBGBKK
	{
		::UnityEngine::Vector3 FACGMPEJDEF; // 0x10
		::UnityEngine::Vector3 GFOOPMANHJJ; // 0x1C
		::System::Single BJBIBMDPCNP; // 0x28
		::System::Single PKDMBIMLJPH; // 0x2C
		::UnityEngine::Vector3 PKMNGOHOIID(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNKPKBGBKK_PKMNGOHOIID_OFFSET))(this, a1);
		}

		::System::Void IELMAIBIJOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DDNKPKBGBKK_IELMAIBIJOM_OFFSET))(this, a1, a2, a3);
		}

	};
