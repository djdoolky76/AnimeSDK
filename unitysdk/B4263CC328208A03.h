#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B4263CC328208A03__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B4263CC328208A03_TypeDefinitionIndex = 2845;

class B4263CC328208A03 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* B2A204654E0BBFC6; // 0x40
	::AB893667BB6F371B AA85C919E2E676CD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4263CC328208A03__CTOR_OFFSET))(this);
	}
};
