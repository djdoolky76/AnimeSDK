#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BHINGJCHKHP_JOFEHCFONIA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C439D0)

inline static constexpr unsigned int BHINGJCHKHP_JOFEHCFONIA_TypeDefinitionIndex = 67744;

class BHINGJCHKHP_JOFEHCFONIA : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHINGJCHKHP_JOFEHCFONIA__CTOR_OFFSET))(this);
	}
};
