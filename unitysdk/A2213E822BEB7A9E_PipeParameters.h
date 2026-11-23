#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A2213E822BEB7A9E_PIPEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x3A72960)

inline static constexpr unsigned int A2213E822BEB7A9E_PipeParameters_TypeDefinitionIndex = 11923;

class A2213E822BEB7A9E_PipeParameters : public ::System::Object
{
public:
	::System::String* f; // 0x10
	::System::String* p; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2213E822BEB7A9E_PIPEPARAMETERS__CTOR_OFFSET))(this);
	}
};
