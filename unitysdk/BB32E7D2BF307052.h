#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define BB32E7D2BF307052__CTOR_OFFSET UNITYSDK_OFFSET(0x172D340)

inline static constexpr unsigned int BB32E7D2BF307052_TypeDefinitionIndex = 992;

class BB32E7D2BF307052 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* AB7DFA2D6A863331; // 0x38
	::AB642D1382756991* F8AD0D50EDDC4570; // 0x40
	::System::Boolean FB9A3AAE046D0105; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB32E7D2BF307052__CTOR_OFFSET))(this);
	}
};
