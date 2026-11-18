#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_HMCJBGOMPMD_MJGNFBCODOH_OFFSET UNITYSDK_OFFSET(0x15BA5B20)
#define KNLKGLCAPGH_HMCJBGOMPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5B10)

inline static constexpr unsigned int KNLKGLCAPGH_HMCJBGOMPMD_TypeDefinitionIndex = 41113;

class KNLKGLCAPGH_HMCJBGOMPMD : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HMCJBGOMPMD__CTOR_OFFSET))(this);
	}

	::System::Void MJGNFBCODOH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HMCJBGOMPMD_MJGNFBCODOH_OFFSET))(this, BHDNBGLCNOM);
	}
};
