#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_BFOELMBJAGO_EPPCLJMGGME_OFFSET UNITYSDK_OFFSET(0x13C85D30)
#define KNLKGLCAPGH_BFOELMBJAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85D20)

inline static constexpr unsigned int KNLKGLCAPGH_BFOELMBJAGO_TypeDefinitionIndex = 41101;

class KNLKGLCAPGH_BFOELMBJAGO : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BFOELMBJAGO__CTOR_OFFSET))(this);
	}

	::System::Void EPPCLJMGGME(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BFOELMBJAGO_EPPCLJMGGME_OFFSET))(this, BHDNBGLCNOM);
	}
};
