#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BC1E2AD8BEA421CF;

#define FE623E90FC697F65_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1DB0DE0)
#define FE623E90FC697F65__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE623E90FC697F65_TypeDefinitionIndex = 10202;

class FE623E90FC697F65 : public ::System::Object
{
public:
	::System::Void A1E97155B145443C(::BC1E2AD8BEA421CF* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::BC1E2AD8BEA421CF*))((::PBYTE)hIl2Cpp + FE623E90FC697F65_A1E97155B145443C_OFFSET))(this, ACDE58E97E37D13C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE623E90FC697F65__CTOR_OFFSET))(this);
	}
};
