#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B254278F09B7FDE0_GATESERVERRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B254278F09B7FDE0_GateServerResponse_TypeDefinitionIndex = 7719;

class B254278F09B7FDE0_GateServerResponse : public ::System::Object
{
public:
	::System::String* content; // 0x10
	::System::String* sign; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B254278F09B7FDE0_GATESERVERRESPONSE__CTOR_OFFSET))(this);
	}
};
