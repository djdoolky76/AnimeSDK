#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OPBFJNDLPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC6DD0)

inline static constexpr unsigned int OPBFJNDLPFN_TypeDefinitionIndex = 72493;

class OPBFJNDLPFN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBFJNDLPFN__CTOR_OFFSET))(this);
	}
};
