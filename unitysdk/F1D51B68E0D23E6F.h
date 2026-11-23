#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F1D51B68E0D23E6F__CTOR_OFFSET UNITYSDK_OFFSET(0x254E890)

inline static constexpr unsigned int F1D51B68E0D23E6F_TypeDefinitionIndex = 5356;

struct alignas(4) F1D51B68E0D23E6F
{
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x10
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Quaternion A0556B8B541B6D55)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + F1D51B68E0D23E6F__CTOR_OFFSET))(this, EB211B01816ACA79, A0556B8B541B6D55);
	}
};
