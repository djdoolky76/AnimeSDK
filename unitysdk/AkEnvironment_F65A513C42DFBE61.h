#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEnvironment_EDCA89EE35B5B14F.h"

class AkEnvironment;

#define AKENVIRONMENT_F65A513C42DFBE61_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x2916C40)
#define AKENVIRONMENT_F65A513C42DFBE61__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AkEnvironment_F65A513C42DFBE61_TypeDefinitionIndex = 20487;

class AkEnvironment_F65A513C42DFBE61 : public ::AkEnvironment_EDCA89EE35B5B14F
{
public:
	::System::Int32 BCB0A4DD6EA3B4C9(::AkEnvironment* B35BBBE7E39341A2, ::AkEnvironment* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::AkEnvironment*, ::AkEnvironment*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_F65A513C42DFBE61_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_F65A513C42DFBE61__CTOR_OFFSET))(this);
	}
};
