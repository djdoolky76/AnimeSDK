#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_HGEEHPKDOFK_AIGIAIIEABK_OFFSET UNITYSDK_OFFSET(0x1722A260)
#define EDLDOFLKPHL_HGEEHPKDOFK_HAGIBDBJEDI_OFFSET UNITYSDK_OFFSET(0x1722A270)
#define EDLDOFLKPHL_HGEEHPKDOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1722A250)

inline static constexpr unsigned int EDLDOFLKPHL_HGEEHPKDOFK_TypeDefinitionIndex = 61491;

class EDLDOFLKPHL_HGEEHPKDOFK : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HGEEHPKDOFK__CTOR_OFFSET))(this);
	}

	::System::Void AIGIAIIEABK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HGEEHPKDOFK_AIGIAIIEABK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HAGIBDBJEDI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_HGEEHPKDOFK_HAGIBDBJEDI_OFFSET))(this, BHDNBGLCNOM);
	}
};
