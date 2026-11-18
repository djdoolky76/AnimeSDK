#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_HJEKACLIIJE_CIAKAGHFMPD_OFFSET UNITYSDK_OFFSET(0x129AADD0)
#define KNLKGLCAPGH_HJEKACLIIJE__CTOR_OFFSET UNITYSDK_OFFSET(0x129AADC0)

inline static constexpr unsigned int KNLKGLCAPGH_HJEKACLIIJE_TypeDefinitionIndex = 41123;

class KNLKGLCAPGH_HJEKACLIIJE : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HJEKACLIIJE__CTOR_OFFSET))(this);
	}

	::System::Void CIAKAGHFMPD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_HJEKACLIIJE_CIAKAGHFMPD_OFFSET))(this, BHDNBGLCNOM);
	}
};
