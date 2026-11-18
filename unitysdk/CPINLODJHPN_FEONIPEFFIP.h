#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class CPINLODJHPN_PDLBILPIEMH;

#define CPINLODJHPN_FEONIPEFFIP_JDBCAGPMOPN_OFFSET UNITYSDK_OFFSET(0x18317B80)
#define CPINLODJHPN_FEONIPEFFIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18317B70)

inline static constexpr unsigned int CPINLODJHPN_FEONIPEFFIP_TypeDefinitionIndex = 77480;

class CPINLODJHPN_FEONIPEFFIP : public ::System::Object
{
public:
	::CPINLODJHPN_PDLBILPIEMH* FGBNBFHOKAA; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPINLODJHPN_FEONIPEFFIP__CTOR_OFFSET))(this);
	}

	::System::Void JDBCAGPMOPN(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + CPINLODJHPN_FEONIPEFFIP_JDBCAGPMOPN_OFFSET))(this, NFFNEFLKPDG);
	}
};
