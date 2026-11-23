#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F8CAF43D67DA233E_PIPEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x3ADDBB0)

inline static constexpr unsigned int F8CAF43D67DA233E_PipeParameters_TypeDefinitionIndex = 12151;

class F8CAF43D67DA233E_PipeParameters : public ::System::Object
{
public:
	::System::String* f; // 0x10
	::System::String* p; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CAF43D67DA233E_PIPEPARAMETERS__CTOR_OFFSET))(this);
	}
};
