#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define EB095CEF80B31883__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EB095CEF80B31883_TypeDefinitionIndex = 2006;

class EB095CEF80B31883 : public ::E379DE61A548837D
{
public:
	::System::UInt32 FC0A08BDA6A3A782; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* EBE76FE821CB98AC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB095CEF80B31883__CTOR_OFFSET))(this);
	}
};
