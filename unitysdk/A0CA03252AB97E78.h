#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A0CA03252AB97E78__CTOR_OFFSET UNITYSDK_OFFSET(0x28F22F0)

inline static constexpr unsigned int A0CA03252AB97E78_TypeDefinitionIndex = 16448;

class A0CA03252AB97E78 : public ::System::Object
{
public:
	::System::Single EA3A025D72E93D92; // 0x10
	::UnityEngine::Vector3 EB211B01816ACA79; // 0x14

	::System::Void _ctor(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A0CA03252AB97E78__CTOR_OFFSET))(this, EB211B01816ACA79);
	}
};
