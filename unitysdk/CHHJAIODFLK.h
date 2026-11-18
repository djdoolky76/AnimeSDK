#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHHJAIODFLK_ACNADMJMHBC_OFFSET UNITYSDK_OFFSET(0x128F96F0)
#define CHHJAIODFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x128F96E0)

inline static constexpr unsigned int CHHJAIODFLK_TypeDefinitionIndex = 50527;

class CHHJAIODFLK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHJAIODFLK__CTOR_OFFSET))(this);
	}

	static ::System::Void ACNADMJMHBC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHJAIODFLK_ACNADMJMHBC_OFFSET))();
	}
};
