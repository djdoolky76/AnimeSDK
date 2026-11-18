#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CMPEEGENPCE_JDIFKLEOCPC_OFFSET UNITYSDK_OFFSET(0x1326ECC0)
#define CMPEEGENPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1326EED0)

inline static constexpr unsigned int CMPEEGENPCE_TypeDefinitionIndex = 48366;

class CMPEEGENPCE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPEEGENPCE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 JDIFKLEOCPC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPEEGENPCE_JDIFKLEOCPC_OFFSET))(this);
	}
};
