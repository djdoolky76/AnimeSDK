#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B8922BBB685EE836__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8922BBB685EE836_TypeDefinitionIndex = 8625;

class B8922BBB685EE836 : public ::System::Object
{
public:
	::System::UInt32 AD53FA19D567EF15; // 0x10
	::System::UInt32 BC19F58BCD5310DB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8922BBB685EE836__CTOR_OFFSET))(this);
	}
};
