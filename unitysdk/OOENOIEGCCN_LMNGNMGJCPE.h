#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JFCNOEPOJMJ.h"

#define OOENOIEGCCN_LMNGNMGJCPE_JINPOBECLMH_OFFSET UNITYSDK_OFFSET(0x13A7B3C0)
#define OOENOIEGCCN_LMNGNMGJCPE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7B3B0)

inline static constexpr unsigned int OOENOIEGCCN_LMNGNMGJCPE_TypeDefinitionIndex = 69171;

class OOENOIEGCCN_LMNGNMGJCPE : public ::System::Object
{
public:
	::System::Single BEKLCLFIDKF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOENOIEGCCN_LMNGNMGJCPE__CTOR_OFFSET))(this);
	}

	::System::Boolean JINPOBECLMH(::JFCNOEPOJMJ IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JFCNOEPOJMJ))((::PBYTE)hIl2Cpp + OOENOIEGCCN_LMNGNMGJCPE_JINPOBECLMH_OFFSET))(this, IPMMCGDMODG);
	}
};
