#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E7CA89B6690BA989.h"

class FB3503DB193F1274;

#define BFC27A8BA979E1EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BFC27A8BA979E1EA_TypeDefinitionIndex = 411;

class BFC27A8BA979E1EA : public ::E379DE61A548837D
{
public:
	::E7CA89B6690BA989 EF0F9D8D794F0A3C; // 0x38
	::FB3503DB193F1274* FC539C6A6F0058F1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFC27A8BA979E1EA__CTOR_OFFSET))(this);
	}
};
