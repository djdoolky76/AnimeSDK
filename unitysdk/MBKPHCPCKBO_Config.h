#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBKPHCPCKBO_Config_LGNFONCCJDP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MBKPHCPCKBO_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6350D0)

inline static constexpr unsigned int MBKPHCPCKBO_Config_TypeDefinitionIndex = 65006;

class MBKPHCPCKBO_Config : public ::System::Object
{
public:
	::MBKPHCPCKBO_Config_LGNFONCCJDP mode; // 0x10
	::UnityEngine::Vector2 yAngleRange; // 0x14
	::UnityEngine::Vector2 forceRange; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKPHCPCKBO_CONFIG__CTOR_OFFSET))(this);
	}
};
