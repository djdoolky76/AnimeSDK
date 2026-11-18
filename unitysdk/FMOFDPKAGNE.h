#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NHKLBKEABJB.h"

#define FMOFDPKAGNE_CEAJOMBKKAC_OFFSET UNITYSDK_OFFSET(0x7DB640)

inline static constexpr unsigned int FMOFDPKAGNE_TypeDefinitionIndex = 66505;

struct alignas(4) FMOFDPKAGNE
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Quaternion IFEFGIHOKOC; // 0x1C

	::NHKLBKEABJB CEAJOMBKKAC()
	{
		return ((::NHKLBKEABJB(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOFDPKAGNE_CEAJOMBKKAC_OFFSET))(this);
	}
};
