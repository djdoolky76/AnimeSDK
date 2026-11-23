#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B8321D6AD2FEC371__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B8321D6AD2FEC371_TypeDefinitionIndex = 208;

class B8321D6AD2FEC371 : public ::E379DE61A548837D
{
public:
	::System::Boolean B92D137E23F00207; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 B602BF020E2BBA49; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8321D6AD2FEC371__CTOR_OFFSET))(this);
	}
};
