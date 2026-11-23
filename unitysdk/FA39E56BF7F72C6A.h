#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA39E56BF7F72C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA39E56BF7F72C6A_TypeDefinitionIndex = 7138;

class FA39E56BF7F72C6A : public ::System::Object
{
public:
	::System::Int32 E04C06BFE19D6905; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* AEB3623BB2B3C7F1; // 0x18
	::System::String* AEDCABB247AF5AEE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA39E56BF7F72C6A__CTOR_OFFSET))(this);
	}
};
