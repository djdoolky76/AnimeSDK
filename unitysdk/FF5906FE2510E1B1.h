#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E1816BB67E198386.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FF5906FE2510E1B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF5906FE2510E1B1_TypeDefinitionIndex = 1143;

class FF5906FE2510E1B1 : public ::E1816BB67E198386
{
public:
	::UnityEngine::Vector3 F8EC378A83A469CE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF5906FE2510E1B1__CTOR_OFFSET))(this);
	}
};
