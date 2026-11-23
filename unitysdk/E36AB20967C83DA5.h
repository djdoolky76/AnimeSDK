#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
class F09D914E7FD65959;

#define E36AB20967C83DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E36AB20967C83DA5_TypeDefinitionIndex = 9561;

class E36AB20967C83DA5 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* AAA0CC6D5484C129; // 0x38
	::F09D914E7FD65959* E503CF3EAE138E9D; // 0x40
	::System::Boolean BC46F7E1ECE7EE17; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E36AB20967C83DA5__CTOR_OFFSET))(this);
	}
};
