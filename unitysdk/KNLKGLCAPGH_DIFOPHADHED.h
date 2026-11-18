#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOFFJIIGNIM;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLKGLCAPGH_DIFOPHADHED_BAFHLBDEFPN_OFFSET UNITYSDK_OFFSET(0x1791A2A0)
#define KNLKGLCAPGH_DIFOPHADHED_MGMIDLCLAPP_OFFSET UNITYSDK_OFFSET(0x1791A230)
#define KNLKGLCAPGH_DIFOPHADHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A220)

inline static constexpr unsigned int KNLKGLCAPGH_DIFOPHADHED_TypeDefinitionIndex = 41095;

class KNLKGLCAPGH_DIFOPHADHED : public ::System::Object
{
public:
	::System::Action* LJFKEJMODMK; // 0x10
	::System::Action_1<::LOFFJIIGNIM*>* LPFMDKKFMBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_DIFOPHADHED__CTOR_OFFSET))(this);
	}

	::System::Void MGMIDLCLAPP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_DIFOPHADHED_MGMIDLCLAPP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BAFHLBDEFPN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_DIFOPHADHED_BAFHLBDEFPN_OFFSET))(this, BHDNBGLCNOM);
	}
};
