#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGHFHMMPMPC__CTOR_OFFSET UNITYSDK_OFFSET(0xE14C7C0)

inline static constexpr unsigned int OGHFHMMPMPC_TypeDefinitionIndex = 75812;

class OGHFHMMPMPC : public ::System::Object
{
public:
	// static const ::System::Single HCODDMIGCBF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHFHMMPMPC__CTOR_OFFSET))(this);
	}
};
