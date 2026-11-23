#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0E58000A3E2C398.h"
#include "unitysdk/System/DateTime.h"

namespace System { class Object; }

#define E266C662150BC53F_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x3CA9CE0)

inline static constexpr unsigned int E266C662150BC53F_TypeDefinitionIndex = 10481;

class E266C662150BC53F : public ::B0E58000A3E2C398
{
public:
	::System::DateTime A5A0BFE0BD2BFE64; // 0x10

	::System::Object* BA0AFB830600D2A9()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + E266C662150BC53F_BA0AFB830600D2A9_OFFSET))(this);
	}
};
