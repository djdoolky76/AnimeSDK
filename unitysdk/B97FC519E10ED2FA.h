#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;

#define B97FC519E10ED2FA_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x23BC810)
#define B97FC519E10ED2FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B97FC519E10ED2FA_TypeDefinitionIndex = 3641;

class B97FC519E10ED2FA : public ::System::Object
{
public:
	::System::Boolean FB9A9D2547BFABA0; // 0x10
	::System::Boolean BAEC64E04CD6F3DE; // 0x11
	::System::Boolean FD8D09F4ED926DC0; // 0x12
	::System::Byte _padding0[0x5];
	::AB642D1382756991* B4FEB152E12B4AF8; // 0x18
	::System::Boolean AC2537B360EDD5F6; // 0x20
	::System::Boolean E6D27CDB907885D2; // 0x21

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B97FC519E10ED2FA_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B97FC519E10ED2FA__CTOR_OFFSET))(this);
	}
};
