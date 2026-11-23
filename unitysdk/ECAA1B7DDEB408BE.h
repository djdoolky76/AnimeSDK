#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"

namespace System { class Exception; }

#define ECAA1B7DDEB408BE_FAA137692D175DE5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ECAA1B7DDEB408BE__CTOR_OFFSET UNITYSDK_OFFSET(0x4408500)

inline static constexpr unsigned int ECAA1B7DDEB408BE_TypeDefinitionIndex = 19441;

class ECAA1B7DDEB408BE : public ::E8C1635F85E9BC30
{
public:
	::System::Exception* EB538CBD1114FAB3; // 0x10

	::System::Void FAA137692D175DE5(::System::Exception* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ECAA1B7DDEB408BE_FAA137692D175DE5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ECAA1B7DDEB408BE__CTOR_OFFSET))(this, E2B6D81F69EA0D9B);
	}
};
