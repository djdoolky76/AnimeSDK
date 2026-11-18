#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_EOPMEAOKAPB_FBFFGFFBNBE_OFFSET UNITYSDK_OFFSET(0x14A1B8E0)
#define HJJEDOLCGOH_EOPMEAOKAPB_GPABLGFGMPB_OFFSET UNITYSDK_OFFSET(0x14A1BA40)
#define HJJEDOLCGOH_EOPMEAOKAPB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B8D0)

inline static constexpr unsigned int HJJEDOLCGOH_EOPMEAOKAPB_TypeDefinitionIndex = 87738;

class HJJEDOLCGOH_EOPMEAOKAPB : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_EOPMEAOKAPB__CTOR_OFFSET))(this);
	}

	::System::Void FBFFGFFBNBE(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_EOPMEAOKAPB_FBFFGFFBNBE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GPABLGFGMPB(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_EOPMEAOKAPB_GPABLGFGMPB_OFFSET))(this, LJBPECKCCEA);
	}
};
