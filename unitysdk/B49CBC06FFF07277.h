#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B49CBC06FFF07277__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B49CBC06FFF07277_TypeDefinitionIndex = 2987;

class B49CBC06FFF07277 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E43E467F516F27D3; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* B2A204654E0BBFC6; // 0x40
	::AB893667BB6F371B AA85C919E2E676CD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B49CBC06FFF07277__CTOR_OFFSET))(this);
	}
};
