#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define B06EA42BB951CCE0_E8497EA0E65F857D_OFFSET UNITYSDK_OFFSET(0x3B83D90)

inline static constexpr unsigned int B06EA42BB951CCE0_TypeDefinitionIndex = 11059;

class B06EA42BB951CCE0 : public ::System::Object
{
public:
	static ::System::Exception* E8497EA0E65F857D()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + B06EA42BB951CCE0_E8497EA0E65F857D_OFFSET))();
	}
};
