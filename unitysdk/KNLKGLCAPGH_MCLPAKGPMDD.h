#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_MCLPAKGPMDD_BBLJLCBDAAP_OFFSET UNITYSDK_OFFSET(0x17671FA0)
#define KNLKGLCAPGH_MCLPAKGPMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x17671F90)

inline static constexpr unsigned int KNLKGLCAPGH_MCLPAKGPMDD_TypeDefinitionIndex = 41100;

class KNLKGLCAPGH_MCLPAKGPMDD : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MCLPAKGPMDD__CTOR_OFFSET))(this);
	}

	::System::Void BBLJLCBDAAP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MCLPAKGPMDD_BBLJLCBDAAP_OFFSET))(this, BHDNBGLCNOM);
	}
};
