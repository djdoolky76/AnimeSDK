#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define FPCEOBECOLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D988580)

inline static constexpr unsigned int FPCEOBECOLM_TypeDefinitionIndex = 94007;

class FPCEOBECOLM : public ::BIHPBFHEOOA
{
public:
	::System::UInt64 HDLECGINJDM; // 0x10
	::System::UInt64 GLPHHDMCDDB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCEOBECOLM__CTOR_OFFSET))(this);
	}
};
