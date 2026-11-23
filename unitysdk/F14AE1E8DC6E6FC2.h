#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class BCF53C45776C20BE;

#define F14AE1E8DC6E6FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F14AE1E8DC6E6FC2_TypeDefinitionIndex = 613;

class F14AE1E8DC6E6FC2 : public ::E379DE61A548837D
{
public:
	::BCF53C45776C20BE* F07B24BFD01C06AF; // 0x38
	::AB642D1382756991* B4BE1880E0BA5DB3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F14AE1E8DC6E6FC2__CTOR_OFFSET))(this);
	}
};
