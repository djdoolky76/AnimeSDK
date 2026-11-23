#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6D57A31343640D7.h"

#define AF000B79BCE181FC_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x1CD1CC0)
#define AF000B79BCE181FC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA0)

inline static constexpr unsigned int AF000B79BCE181FC_TypeDefinitionIndex = 9766;

class AF000B79BCE181FC : public ::F6D57A31343640D7
{
public:
	::System::Boolean BC8FCB218D25F8E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AF000B79BCE181FC_BC8FCB218D25F8E8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF000B79BCE181FC__CTOR_OFFSET))(this);
	}
};
