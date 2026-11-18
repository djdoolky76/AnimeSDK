#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CNFNCAACDFP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A19690)

inline static constexpr unsigned int CNFNCAACDFP_TypeDefinitionIndex = 76046;

class CNFNCAACDFP : public ::System::Exception
{
public:
	::System::Void _ctor(::System::String* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CNFNCAACDFP__CTOR_OFFSET))(this, BHDNBGLCNOM);
	}
};
