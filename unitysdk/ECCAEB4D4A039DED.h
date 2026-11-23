#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

#define ECCAEB4D4A039DED__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ECCAEB4D4A039DED_TypeDefinitionIndex = 1229;

class ECCAEB4D4A039DED : public ::E379DE61A548837D
{
public:
	::System::UInt32 B289D9A1F114D305; // 0x38
	::System::UInt32 B240C78BB6BC8182; // 0x3C
	::System::Boolean A5D996568B0BA21D; // 0x40
	::System::Byte _padding0[0x7];
	::AB893667BB6F371B B97E11AD8B618D88; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAEB4D4A039DED__CTOR_OFFSET))(this);
	}
};
