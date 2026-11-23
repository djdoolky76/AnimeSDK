#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define A0CF72FF9AC21FD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBAF00)

inline static constexpr unsigned int A0CF72FF9AC21FD6_TypeDefinitionIndex = 10221;

class A0CF72FF9AC21FD6 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E08C8950EE4A2B6F; // 0x38
	::System::Boolean FF97B25633EF37C6; // 0x3C
	::System::Byte _padding0[0x3];
	::System::String* B22024564E8C495E; // 0x40
	::System::String* F1D66EE4199BAAF6; // 0x48
	::System::Single ABDE1A90505274CB; // 0x50
	::System::Single B1DA062BF9FC8A7E; // 0x54
	::System::Int32 E5AA59A88EB05EC5; // 0x58
	::System::Single A09BDFB58F03FB5D; // 0x5C
	::System::Boolean F8397B9B570C03D6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0CF72FF9AC21FD6__CTOR_OFFSET))(this);
	}
};
