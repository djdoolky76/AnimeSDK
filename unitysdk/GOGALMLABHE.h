#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Plane.h"

#define GOGALMLABHE_EAKHMHLJFIH_OFFSET UNITYSDK_OFFSET(0x743E60)

inline static constexpr unsigned int GOGALMLABHE_TypeDefinitionIndex = 55395;

struct alignas(8) GOGALMLABHE
{
	::UnityEngine::Vector3 CHIKKIIJKLN; // 0x10
	::UnityEngine::Vector3 EFINBBILEAD; // 0x1C
	::UnityEngine::Quaternion CFIFNMDEHFH; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* NJPBGLPEPNB; // 0x38

	::UnityEngine::Plane EAKHMHLJFIH()
	{
		return ((::UnityEngine::Plane(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGALMLABHE_EAKHMHLJFIH_OFFSET))(this);
	}
};
