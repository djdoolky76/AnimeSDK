#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define AC17FEFD83B1B524__CTOR_OFFSET UNITYSDK_OFFSET(0x1789690)

inline static constexpr unsigned int AC17FEFD83B1B524_TypeDefinitionIndex = 108;

class AC17FEFD83B1B524 : public ::E379DE61A548837D
{
public:
	::System::String* A6592F4404D4B6B3; // 0x38
	::System::Int32 E5AA59A88EB05EC5; // 0x40
	::System::Boolean B36154446F610A37; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC17FEFD83B1B524__CTOR_OFFSET))(this);
	}
};
