#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class BCF53C45776C20BE;

#define F0F7E6575593A8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F0F7E6575593A8F7_TypeDefinitionIndex = 1507;

class F0F7E6575593A8F7 : public ::E379DE61A548837D
{
public:
	::BCF53C45776C20BE* F07B24BFD01C06AF; // 0x38
	::AB642D1382756991* B4BE1880E0BA5DB3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0F7E6575593A8F7__CTOR_OFFSET))(this);
	}
};
