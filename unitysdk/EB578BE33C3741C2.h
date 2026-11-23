#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class E3A84EC911380CDC;

#define EB578BE33C3741C2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EB578BE33C3741C2_TypeDefinitionIndex = 731;

class EB578BE33C3741C2 : public ::E379DE61A548837D
{
public:
	::E3A84EC911380CDC* F491724CC5AD99B6; // 0x38
	::AB642D1382756991* E927034E06260979; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB578BE33C3741C2__CTOR_OFFSET))(this);
	}
};
