#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define B0668BCFE6610338__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B0668BCFE6610338_TypeDefinitionIndex = 10224;

class B0668BCFE6610338 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E99C1CEF85982973; // 0x40
	::AB642D1382756991* E63E0F25F251B753; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0668BCFE6610338__CTOR_OFFSET))(this);
	}
};
