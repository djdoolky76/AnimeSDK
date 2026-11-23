#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BEF3177B6E7FAA3A_HTTPDNSPERSISTENTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x299D020)

inline static constexpr unsigned int BEF3177B6E7FAA3A_HttpDnsPersistentObject_TypeDefinitionIndex = 15592;

class BEF3177B6E7FAA3A_HttpDnsPersistentObject : public ::System::Object
{
public:
	::System::String* host; // 0x10
	::System::String* ip; // 0x18
	::System::Int64 timestamp; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_HTTPDNSPERSISTENTOBJECT__CTOR_OFFSET))(this);
	}
};
