#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_JAAALFJEHOK_BMMGNCCBPLD_OFFSET UNITYSDK_OFFSET(0x16C42360)
#define OOBAHEDLHOI_JAAALFJEHOK_DIOABFEGCDL_OFFSET UNITYSDK_OFFSET(0x16C42350)
#define OOBAHEDLHOI_JAAALFJEHOK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3B420)

inline static constexpr unsigned int OOBAHEDLHOI_JAAALFJEHOK_TypeDefinitionIndex = 75526;

class OOBAHEDLHOI_JAAALFJEHOK : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JAAALFJEHOK__CTOR_OFFSET))(this);
	}

	::System::Void DIOABFEGCDL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JAAALFJEHOK_DIOABFEGCDL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BMMGNCCBPLD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JAAALFJEHOK_BMMGNCCBPLD_OFFSET))(this, BHDNBGLCNOM);
	}
};
