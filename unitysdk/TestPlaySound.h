#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TESTPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CB8E0)

inline static constexpr unsigned int TestPlaySound_TypeDefinitionIndex = 80271;

class TestPlaySound : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTPLAYSOUND__CTOR_OFFSET))(this);
	}
};
