#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPPCLJMLCL.h"
#include "unitysdk/System/Object.h"

#define LFDLDKDPFIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F071E0)

inline static constexpr unsigned int LFDLDKDPFIN_TypeDefinitionIndex = 84026;

class LFDLDKDPFIN : public ::System::Object
{
public:
	::LPPPCLJMLCL OCOJFKMOKMK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDLDKDPFIN__CTOR_OFFSET))(this);
	}
};
