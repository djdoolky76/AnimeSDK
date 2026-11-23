#pragma once
#include "unitysdk/unitysdk.h"

#define EBDA1E8754ACD9FC_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x2714D30)

inline static constexpr unsigned int EBDA1E8754ACD9FC_TypeDefinitionIndex = 2859;

class EBDA1E8754ACD9FC
{
public:
	::System::Boolean E3D17824AB1D819C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDA1E8754ACD9FC_E3D17824AB1D819C_OFFSET))(this);
	}
};
