#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F9818E6D8693D479__CTOR_OFFSET UNITYSDK_OFFSET(0x1842EE0)

inline static constexpr unsigned int F9818E6D8693D479_TypeDefinitionIndex = 1224;

class F9818E6D8693D479 : public ::System::Object
{
public:
	::System::String* B22024564E8C495E; // 0x10
	::System::String* F1D66EE4199BAAF6; // 0x18
	::System::Single ABDE1A90505274CB; // 0x20
	::System::Single B1DA062BF9FC8A7E; // 0x24
	::System::Int32 E5AA59A88EB05EC5; // 0x28
	::System::Single A09BDFB58F03FB5D; // 0x2C
	::System::Boolean F8397B9B570C03D6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9818E6D8693D479__CTOR_OFFSET))(this);
	}
};
