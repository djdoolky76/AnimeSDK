#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class BCF53C45776C20BE;

#define BB3631FA5FD01A7C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BB3631FA5FD01A7C_TypeDefinitionIndex = 477;

class BB3631FA5FD01A7C : public ::E379DE61A548837D
{
public:
	::BCF53C45776C20BE* F07B24BFD01C06AF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB3631FA5FD01A7C__CTOR_OFFSET))(this);
	}
};
