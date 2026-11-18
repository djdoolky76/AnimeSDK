#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJDBMLGLOPD;

#define DEJMKFCMPNP_DEPLDIFOBBI_EADCGHJHOCM_OFFSET UNITYSDK_OFFSET(0x12406F10)
#define DEJMKFCMPNP_DEPLDIFOBBI__CTOR_OFFSET UNITYSDK_OFFSET(0x12406F00)

inline static constexpr unsigned int DEJMKFCMPNP_DEPLDIFOBBI_TypeDefinitionIndex = 73457;

class DEJMKFCMPNP_DEPLDIFOBBI : public ::System::Object
{
public:
	::System::Single OEAHCAEIADA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJMKFCMPNP_DEPLDIFOBBI__CTOR_OFFSET))(this);
	}

	::System::Boolean EADCGHJHOCM(::KJDBMLGLOPD* EOKGCJINPDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::KJDBMLGLOPD*))((::PBYTE)hIl2Cpp + DEJMKFCMPNP_DEPLDIFOBBI_EADCGHJHOCM_OFFSET))(this, EOKGCJINPDH);
	}
};
