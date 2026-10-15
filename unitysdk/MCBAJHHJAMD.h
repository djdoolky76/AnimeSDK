#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MCBAJHHJAMD_BJPOGNABBLE_OFFSET UNITYSDK_OFFSET(0xB873520)
#define MCBAJHHJAMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8736D0)
#define MCBAJHHJAMD_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xB873620)
#define MCBAJHHJAMD_PLFJCMLDIKG_OFFSET UNITYSDK_OFFSET(0xB873440)

	class MCBAJHHJAMD : public ::System::Object
	{
	public:
		::UnityEngine::Vector3Int OGPDIJFMIHM; // 0x10
		::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x1C
		::System::Single HAHMJKDKEKC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBAJHHJAMD_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PLFJCMLDIKG(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCBAJHHJAMD_PLFJCMLDIKG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int BJPOGNABBLE(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCBAJHHJAMD_BJPOGNABBLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCBAJHHJAMD_NINDHOGICJD_OFFSET))(this, a1);
		}

	};
