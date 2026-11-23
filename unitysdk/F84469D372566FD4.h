#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class BA725E3AF08F825D;

#define F84469D372566FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x24703E0)

inline static constexpr unsigned int F84469D372566FD4_TypeDefinitionIndex = 4401;

class F84469D372566FD4 : public ::E379DE61A548837D
{
public:
	::BA725E3AF08F825D* F42308046F570A5C; // 0x38
	::System::Boolean E13C87102468F902; // 0x40
	::System::Boolean FC5D5731FE386552; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F84469D372566FD4__CTOR_OFFSET))(this);
	}
};
