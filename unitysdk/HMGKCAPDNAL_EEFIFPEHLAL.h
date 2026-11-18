#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class MBODLFKOJOP;

#define HMGKCAPDNAL_EEFIFPEHLAL_ALOCDPBJBGF_OFFSET UNITYSDK_OFFSET(0x15DC8560)
#define HMGKCAPDNAL_EEFIFPEHLAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8080)

inline static constexpr unsigned int HMGKCAPDNAL_EEFIFPEHLAL_TypeDefinitionIndex = 73546;

class HMGKCAPDNAL_EEFIFPEHLAL : public ::System::Object
{
public:
	::GBINEPNHKKO* EECDKMONJPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGKCAPDNAL_EEFIFPEHLAL__CTOR_OFFSET))(this);
	}

	::System::Boolean ALOCDPBJBGF(::MBODLFKOJOP* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MBODLFKOJOP*))((::PBYTE)hIl2Cpp + HMGKCAPDNAL_EEFIFPEHLAL_ALOCDPBJBGF_OFFSET))(this, LJBPECKCCEA);
	}
};
