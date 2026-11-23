#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E0A6F978A066DCC0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E0A6F978A066DCC0_TypeDefinitionIndex = 8683;

class E0A6F978A066DCC0 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E201AC1C786E1C3E; // 0x38
	::System::Boolean F99CB1AB2858499E; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0A6F978A066DCC0__CTOR_OFFSET))(this);
	}
};
