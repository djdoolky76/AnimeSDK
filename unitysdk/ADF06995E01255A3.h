#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/System/Object.h"

class ADA289FA76259953;

#define ADF06995E01255A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADF06995E01255A3_TypeDefinitionIndex = 5124;

class ADF06995E01255A3 : public ::System::Object
{
public:
	::ADA289FA76259953* FCB0C301E04F0128; // 0x10
	::E12F55A5FCCCF1EC EE812BD37722C900; // 0x18
	::E12F55A5FCCCF1EC F0A72A8EE45E094C; // 0x20
	::E12F55A5FCCCF1EC E7A38DD4FBA3B1E8; // 0x28
	::System::Boolean EF481D1FFF4E9F22; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADF06995E01255A3__CTOR_OFFSET))(this);
	}
};
