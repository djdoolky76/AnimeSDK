#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ENKKLEFNAKG_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x369FB0)

inline static constexpr unsigned int ENKKLEFNAKG_TypeDefinitionIndex = 75746;

struct alignas(4) ENKKLEFNAKG
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Vector3 IFEFGIHOKOC; // 0x1C

	/*
	::ENKKLEFNAKG PENDMLPCMKB()
	{
		return ((::ENKKLEFNAKG(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKLEFNAKG_PENDMLPCMKB_OFFSET))(this);
	}
	*/
};
