#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONBNJIHCGCE.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LHMIMCHINAI_CGPAMHANMFF_GBBDLOANELL_OFFSET UNITYSDK_OFFSET(0x16851FD0)
#define LHMIMCHINAI_CGPAMHANMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16851FC0)

inline static constexpr unsigned int LHMIMCHINAI_CGPAMHANMFF_TypeDefinitionIndex = 77090;

class LHMIMCHINAI_CGPAMHANMFF : public ::System::Object
{
public:
	::System::Func_2<::ONBNJIHCGCE, ::System::Boolean>* KPDNJEDICCM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMIMCHINAI_CGPAMHANMFF__CTOR_OFFSET))(this);
	}

	::System::Boolean GBBDLOANELL(::ONBNJIHCGCE IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONBNJIHCGCE))((::PBYTE)hIl2Cpp + LHMIMCHINAI_CGPAMHANMFF_GBBDLOANELL_OFFSET))(this, IMLLDOHDCNC);
	}
};
