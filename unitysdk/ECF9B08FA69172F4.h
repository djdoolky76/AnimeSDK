#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

class E2974D7451932257;
namespace System { class String; }

#define ECF9B08FA69172F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C540)

inline static constexpr unsigned int ECF9B08FA69172F4_TypeDefinitionIndex = 2252;

class ECF9B08FA69172F4 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38
	::System::Boolean E632D2441EC894B1; // 0x3C
	::System::Byte _padding0[0x3];
	::System::String* B2A204654E0BBFC6; // 0x40
	::System::Boolean FAC55700A212D77E; // 0x48
	::System::Byte _padding1[0x7];
	::AB893667BB6F371B A19F6DDD0D29254E; // 0x50
	::E2974D7451932257* EA8C2FD788715BB5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECF9B08FA69172F4__CTOR_OFFSET))(this);
	}
};
