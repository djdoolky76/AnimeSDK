#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBMFDDAPFLD_PBDCIFBCCOF_OFFSET UNITYSDK_OFFSET(0x1A2EA8D0)

inline static constexpr unsigned int LBMFDDAPFLD_TypeDefinitionIndex = 43675;

class LBMFDDAPFLD : public ::System::Object
{
public:
	static ::System::Boolean PBDCIFBCCOF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBMFDDAPFLD_PBDCIFBCCOF_OFFSET))();
	}
};
