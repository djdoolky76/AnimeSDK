#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_CHKHLCCFFAL_NDFFEJLFIBE_OFFSET UNITYSDK_OFFSET(0x13DA5C70)
#define HJJEDOLCGOH_CHKHLCCFFAL__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA5C60)

inline static constexpr unsigned int HJJEDOLCGOH_CHKHLCCFFAL_TypeDefinitionIndex = 87721;

class HJJEDOLCGOH_CHKHLCCFFAL : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_CHKHLCCFFAL__CTOR_OFFSET))(this);
	}

	::System::Void NDFFEJLFIBE(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_CHKHLCCFFAL_NDFFEJLFIBE_OFFSET))(this, LJBPECKCCEA);
	}
};
