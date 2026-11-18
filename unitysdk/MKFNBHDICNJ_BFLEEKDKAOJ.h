#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APFMDJMLMFH;
class MELFFONPBBD;

#define MKFNBHDICNJ_BFLEEKDKAOJ_BDJNGIDJBLD_OFFSET UNITYSDK_OFFSET(0x13195E40)
#define MKFNBHDICNJ_BFLEEKDKAOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13195E30)

inline static constexpr unsigned int MKFNBHDICNJ_BFLEEKDKAOJ_TypeDefinitionIndex = 61409;

class MKFNBHDICNJ_BFLEEKDKAOJ : public ::System::Object
{
public:
	::APFMDJMLMFH* DEKJDEPKKLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BFLEEKDKAOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean BDJNGIDJBLD(::MELFFONPBBD* ONOAGAPJNCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BFLEEKDKAOJ_BDJNGIDJBLD_OFFSET))(this, ONOAGAPJNCG);
	}
};
