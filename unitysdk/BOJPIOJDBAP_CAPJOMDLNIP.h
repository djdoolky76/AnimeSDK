#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BOJPIOJDBAP_CAPJOMDLNIP_FKKNPACOCEF_OFFSET UNITYSDK_OFFSET(0xDD880)

	struct alignas(4) BOJPIOJDBAP_CAPJOMDLNIP
	{
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x1C
		::System::Single DKMJCCCAHDJ; // 0x2C
		::System::Single MOLIKLCAILM; // 0x30
		::UnityEngine::Vector3 FKKNPACOCEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPIOJDBAP_CAPJOMDLNIP_FKKNPACOCEF_OFFSET))(this);
		}

	};
