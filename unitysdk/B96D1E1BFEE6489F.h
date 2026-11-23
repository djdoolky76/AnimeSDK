#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B96D1E1BFEE6489F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B96D1E1BFEE6489F_TypeDefinitionIndex = 579;

class B96D1E1BFEE6489F : public ::E379DE61A548837D
{
public:
	::System::Single A73A60ABF8732441; // 0x38
	::System::Boolean BF4F72C63EEFE01C; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B96D1E1BFEE6489F__CTOR_OFFSET))(this);
	}
};
