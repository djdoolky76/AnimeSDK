#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_GPEKCPICIEE_IOOBNDFEANF_OFFSET UNITYSDK_OFFSET(0x1309FED0)
#define JOFANLNIMPC_GPEKCPICIEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1309FEC0)

inline static constexpr unsigned int JOFANLNIMPC_GPEKCPICIEE_TypeDefinitionIndex = 54090;

class JOFANLNIMPC_GPEKCPICIEE : public ::System::Object
{
public:
	::System::Single IMEDAEEHLHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_GPEKCPICIEE__CTOR_OFFSET))(this);
	}

	::System::Void IOOBNDFEANF(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_GPEKCPICIEE_IOOBNDFEANF_OFFSET))(this, LJBPECKCCEA);
	}
};
