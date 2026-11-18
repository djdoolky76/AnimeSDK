#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJHMOFFMPMB.h"

class CJIEIHEDMME;

#define CAILDJNPOLP_FDCJAGHFNHL_OFFSET UNITYSDK_OFFSET(0x14F0FFD0)
#define CAILDJNPOLP_NLMHEGCECID_OFFSET UNITYSDK_OFFSET(0x14F0FA00)

inline static constexpr unsigned int CAILDJNPOLP_TypeDefinitionIndex = 54581;

class CAILDJNPOLP : public ::System::Object
{
public:
	static ::AJHMOFFMPMB NLMHEGCECID(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::AJHMOFFMPMB(*)(::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CAILDJNPOLP_NLMHEGCECID_OFFSET))(LADPIPOMBJM);
	}

	static ::System::Int32 FDCJAGHFNHL(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CAILDJNPOLP_FDCJAGHFNHL_OFFSET))(NACGJJKHEJE);
	}
};
