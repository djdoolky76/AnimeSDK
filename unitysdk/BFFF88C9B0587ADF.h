#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

#define BFFF88C9B0587ADF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BFFF88C9B0587ADF_TypeDefinitionIndex = 9236;

class BFFF88C9B0587ADF : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID ACC4695EBAE594B8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFF88C9B0587ADF__CTOR_OFFSET))(this);
	}
};
