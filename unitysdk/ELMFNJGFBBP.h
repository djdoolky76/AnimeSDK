#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGGNNPHAHCO.h"

class AKHELNKOPEB;
class CBMMKDOEHDB;

#define ELMFNJGFBBP_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x14AA7470)
#define ELMFNJGFBBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA7460)

inline static constexpr unsigned int ELMFNJGFBBP_TypeDefinitionIndex = 72515;

class ELMFNJGFBBP : public ::KGGNNPHAHCO
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + ELMFNJGFBBP__CTOR_OFFSET))(this, FFKBEGIHIGG);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + ELMFNJGFBBP_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
