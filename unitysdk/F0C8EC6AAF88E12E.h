#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class Type; }

#define F0C8EC6AAF88E12E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F0C8EC6AAF88E12E_TypeDefinitionIndex = 7173;

class F0C8EC6AAF88E12E : public ::E379DE61A548837D
{
public:
	::System::Type* F856CAF3047170F8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0C8EC6AAF88E12E__CTOR_OFFSET))(this);
	}
};
