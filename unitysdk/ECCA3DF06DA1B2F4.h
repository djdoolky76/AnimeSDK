#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECCA3DF06DA1B2F4_E8EB8B8975232E34_OFFSET UNITYSDK_OFFSET(0x3AAEAD0)
#define ECCA3DF06DA1B2F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ECCA3DF06DA1B2F4_TypeDefinitionIndex = 12072;

class ECCA3DF06DA1B2F4 : public ::System::Object
{
public:
	static ::System::Int64 E8EB8B8975232E34(::System::Int32 EE35963A1047474D)
	{
		return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + ECCA3DF06DA1B2F4_E8EB8B8975232E34_OFFSET))(EE35963A1047474D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCA3DF06DA1B2F4__CTOR_OFFSET))(this);
	}
};
