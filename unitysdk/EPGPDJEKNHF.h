#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPGPDJEKNHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1418C7D0)

inline static constexpr unsigned int EPGPDJEKNHF_TypeDefinitionIndex = 48823;

class EPGPDJEKNHF : public ::System::Object
{
public:
	::System::String* IGGMPFJFNDP; // 0x10
	::System::Boolean GFNLLIJJCBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGPDJEKNHF__CTOR_OFFSET))(this);
	}
};
