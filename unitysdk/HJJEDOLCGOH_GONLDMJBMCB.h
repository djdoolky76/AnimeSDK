#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_GONLDMJBMCB_MINFKDNOKOO_OFFSET UNITYSDK_OFFSET(0x19E28390)
#define HJJEDOLCGOH_GONLDMJBMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E28380)

inline static constexpr unsigned int HJJEDOLCGOH_GONLDMJBMCB_TypeDefinitionIndex = 87730;

class HJJEDOLCGOH_GONLDMJBMCB : public ::System::Object
{
public:
	::System::Action* KCIPHLPEBIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_GONLDMJBMCB__CTOR_OFFSET))(this);
	}

	::System::Void MINFKDNOKOO(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_GONLDMJBMCB_MINFKDNOKOO_OFFSET))(this, LJBPECKCCEA);
	}
};
