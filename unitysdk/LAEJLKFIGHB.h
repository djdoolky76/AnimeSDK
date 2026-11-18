#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGIECFEDMB.h"

class EFGEKMKMFJO;

#define LAEJLKFIGHB_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1DA14860)
#define LAEJLKFIGHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA14A00)

inline static constexpr unsigned int LAEJLKFIGHB_TypeDefinitionIndex = 94216;

class LAEJLKFIGHB : public ::DEGIECFEDMB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEJLKFIGHB__CTOR_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ(::EFGEKMKMFJO* LGPOPAFNIIA)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFGEKMKMFJO*))((::PBYTE)hIl2Cpp + LAEJLKFIGHB_BGJPLEHEDKJ_OFFSET))(this, LGPOPAFNIIA);
	}
};
