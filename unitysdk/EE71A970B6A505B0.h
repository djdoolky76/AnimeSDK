#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"

#define EE71A970B6A505B0_B9FEE428BDD9250E_OFFSET UNITYSDK_OFFSET(0x40E9B20)

inline static constexpr unsigned int EE71A970B6A505B0_TypeDefinitionIndex = 20223;

class EE71A970B6A505B0 : public ::System::Object
{
public:
	static ::System::Single B9FEE428BDD9250E(::FA1EDF0909FD0302::AE42330449B9EF25 FC77013E9A9FA097)
	{
		return ((::System::Single(*)(::FA1EDF0909FD0302::AE42330449B9EF25))((::PBYTE)hIl2Cpp + EE71A970B6A505B0_B9FEE428BDD9250E_OFFSET))(FC77013E9A9FA097);
	}
};
