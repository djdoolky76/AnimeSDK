#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_FFHCPNCDPGI_PKBEDGLBIBE_OFFSET UNITYSDK_OFFSET(0x1309FDA0)
#define JOFANLNIMPC_FFHCPNCDPGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1309FD90)

inline static constexpr unsigned int JOFANLNIMPC_FFHCPNCDPGI_TypeDefinitionIndex = 54086;

class JOFANLNIMPC_FFHCPNCDPGI : public ::System::Object
{
public:
	::System::Single OGMHMCOMLLM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_FFHCPNCDPGI__CTOR_OFFSET))(this);
	}

	::System::Void PKBEDGLBIBE(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_FFHCPNCDPGI_PKBEDGLBIBE_OFFSET))(this, LJBPECKCCEA);
	}
};
