#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AHFJABLPNFI_CTOR_OFFSET UNITYSDK_OFFSET(0x16F0)

	struct alignas(4) AHFJABLPNFI
	{
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
		::System::Single CONJAMJKHBI; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AHFJABLPNFI_CTOR_OFFSET))(this, a1, a2);
		}

	};
