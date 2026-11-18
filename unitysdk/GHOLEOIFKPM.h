#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GHOLEOIFKPM_DNFDLINCKPH_OFFSET UNITYSDK_OFFSET(0x682DE0)
#define GHOLEOIFKPM_HJGCEMLJPND_OFFSET UNITYSDK_OFFSET(0x682CF0)

inline static constexpr unsigned int GHOLEOIFKPM_TypeDefinitionIndex = 48870;

struct alignas(4) GHOLEOIFKPM
{
	::UnityEngine::Vector3 CNIENEKMGEA; // 0x10
	::UnityEngine::Quaternion LFHCHIICHBB; // 0x1C
	::UnityEngine::Vector3 FJFKMKFOLPN; // 0x2C
	::UnityEngine::Quaternion NIOENAPNMJA; // 0x38
	::UnityEngine::Vector3 JAGPLHHCKED; // 0x48
	::System::Single ECMOEENIHME; // 0x54

	::UnityEngine::Quaternion HJGCEMLJPND()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOLEOIFKPM_HJGCEMLJPND_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNFDLINCKPH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOLEOIFKPM_DNFDLINCKPH_OFFSET))(this);
	}
};
