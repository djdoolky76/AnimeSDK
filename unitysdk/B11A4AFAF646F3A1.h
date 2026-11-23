#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B11A4AFAF646F3A1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B11A4AFAF646F3A1_TypeDefinitionIndex = 7777;

class B11A4AFAF646F3A1 : public ::E379DE61A548837D
{
public:
	::System::Single A09BDFB58F03FB5D; // 0x38
	::System::Single E65F56E41FA7EDD4; // 0x3C
	::System::Boolean F0D2AFBD3CAE7F65; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B11A4AFAF646F3A1__CTOR_OFFSET))(this);
	}
};
