#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

class A9121EC6300692E4;

#define E501FCE2E2A8A630__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E501FCE2E2A8A630_TypeDefinitionIndex = 7704;

class E501FCE2E2A8A630 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID ACC4695EBAE594B8; // 0x38
	::A9121EC6300692E4* E503CF3EAE138E9D; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E501FCE2E2A8A630__CTOR_OFFSET))(this);
	}
};
