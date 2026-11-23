#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define E0319686A8F3BC55__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75DB0)

inline static constexpr unsigned int E0319686A8F3BC55_TypeDefinitionIndex = 1814;

class E0319686A8F3BC55 : public ::System::Object
{
public:
	::UnityEngine::Vector3 E26AE3C940A9D0CA; // 0x10
	::UnityEngine::Vector3 B4A07A3DC5DDF6FD; // 0x1C
	::System::Single FED2BB64CC61FD5F; // 0x28
	::System::Boolean FAA768BA98A94601; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0319686A8F3BC55__CTOR_OFFSET))(this);
	}
};
