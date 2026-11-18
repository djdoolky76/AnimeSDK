#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMCCGNIHBGO;
namespace System { class Type; }

#define IBPNDHCMPGH_GKBNIABPELO_GOBPFGKBHBK_OFFSET UNITYSDK_OFFSET(0x16562800)
#define IBPNDHCMPGH_GKBNIABPELO__CTOR_OFFSET UNITYSDK_OFFSET(0x165627F0)

inline static constexpr unsigned int IBPNDHCMPGH_GKBNIABPELO_TypeDefinitionIndex = 63188;

class IBPNDHCMPGH_GKBNIABPELO : public ::System::Object
{
public:
	::System::Type* MKNHCCIEFJL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPNDHCMPGH_GKBNIABPELO__CTOR_OFFSET))(this);
	}

	::System::Boolean GOBPFGKBHBK(::AMCCGNIHBGO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMCCGNIHBGO*))((::PBYTE)hIl2Cpp + IBPNDHCMPGH_GKBNIABPELO_GOBPFGKBHBK_OFFSET))(this, HAAEBCOBKFF);
	}
};
